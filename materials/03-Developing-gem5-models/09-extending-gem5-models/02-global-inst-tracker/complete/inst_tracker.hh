/*
 * Copyright (c) 2024 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __CPU_PROBES_INST_TRACKER_HH__
#define __CPU_PROBES_INST_TRACKER_HH__

#include "sim/sim_exit.hh"
#include "sim/probe/probe.hh"
#include "params/LocalInstTracker.hh"

namespace gem5
{

class GlobalInstTracker : public SimObject
{
  public:
    GlobalInstTracker(const GlobalInstTrackerParams &params);
    void checkPc(const uint64_t& inst);

  private:
    uint64_t instCount;
    uint64_t instThreshold;

  public:
    void changeThreshold(uint64_t newThreshold) {
      instThreshold = newThreshold;
    }
    void resetCounter() {
      instCount = 0;
    }
    uint64_t getThreshold() const {
      return instThreshold;
    }
};

class LocalInstTracker : public ProbeListenerObject
{
  public:
    LocalInstTracker(const LocalInstTrackerParams &params);

    /** setup the probelistener */
    virtual void regProbeListeners();

    /**
     * this function is called when the ProbePoint "RetiredInsts" is notified
     *
     * @param inst the number of retired instructions
     */
    void checkPc(const uint64_t& inst);

  private:
    typedef ProbeListenerArg<LocalInstTracker, uint64_t>
                                                    LocalInstTrackerListener;
    bool listening;
    GlobalInstTracker *globalInstTracker;

  public:
    void stopListening();
    void startListening() {
      listening = true;
      regProbeListeners();
    }

};

} // namespace gem5

#endif // __CPU_PROBES_INST_TRACKER_HH__
