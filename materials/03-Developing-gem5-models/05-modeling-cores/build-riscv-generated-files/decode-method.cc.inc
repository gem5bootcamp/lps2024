// DO NOT EDIT
// This file was automatically generated from an ISA description:
//   riscv/isa/main.isa


using namespace gem5;
StaticInstPtr
RiscvISA::Decoder::decodeInst(RiscvISA::ExtMachInst machInst)
{
    using namespace RiscvISAInst;
  switch (QUADRANT) {
    
    case 0x0: 
      switch (COPCODE) {
        
        case 0x0:   
          // CIAddi4spnOp::c_addi4spn((['\n            imm = CIMM8<1:1> << 2 |\n                  CIMM8<0:0> << 3 |\n                  CIMM8<7:6> << 4 |\n                  CIMM8<5:2> << 6;\n        ', '\n            if (imm == 0)\n                return std::make_shared<IllegalInstFault>("immediate = 0",\n                                                           machInst);\n            Rp2 = rvSext(sp + imm);\n        ', 'uint64_t'], {}))
          
              return new C_addi4spn(machInst);
          break;
        
        case 0x1:   
          // CompressedLoad::c_fld(['\n                offset = CIMM3 << 3 | CIMM2 << 6;\n            ', '\n                STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                if (status.fs == FPUStatus::OFF)\n                    return std::make_shared<IllegalInstFault>("FPU is off",\n                                                               machInst);\n\n                // Mutating any floating point register changes the FS bit\n                // of the STATUS CSR.\n                status.fs = FPUStatus::DIRTY;\n                xc->setMiscReg(MISCREG_STATUS, status);\n\n                Fp2_bits = Mem;\n            ', '\n                EA = rvZext(Rp1 + offset);\n            '],{})
          
              return new C_fld(machInst);
          break;
        
        case 0x2:   
          // CompressedLoad::c_lw(['\n                offset = CIMM2<1:1> << 2 |\n                         CIMM3 << 3 |\n                         CIMM2<0:0> << 6;\n            ', '\n                Rp2_sd = Mem_sw;\n            ', '\n                EA = rvZext(Rp1 + offset);\n            '],{})
          
              return new C_lw(machInst);
          break;
        
        case 0x3: 
          switch (RVTYPE) {
            
            case 0x0:   
              // CompressedLoad::c_flw(['\n                    offset = CIMM2<1:1> << 2 |\n                             CIMM3 << 3 |\n                             CIMM2<0:0> << 6;\n                ', '\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>("FPU is off",\n                                                                   machInst);\n\n                    status.fs = FPUStatus::DIRTY;\n                    xc->setMiscReg(MISCREG_STATUS, status);\n\n                    freg_t fd = freg(f32(Mem_uw));\n                    Fp2_bits = fd.v;\n                ', '\n                    EA = (uint32_t)(Rp1_uw + offset);\n                '],{})
              
                  return new C_flw(machInst);
              break;
            
            case 0x1:   
              // CompressedLoad::c_ld(['\n                    offset = CIMM3 << 3 | CIMM2 << 6;\n                ', '\n                    Rp2_sd = Mem_sd;\n                ', '\n                    EA = Rp1 + offset;\n                '],{})
              
                  return new C_ld(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x4: 
          switch (CFUNCT6LOW3) {
            
            case 0x0:   
              // CompressedLoad::c_lbu(['\n                    offset = (CIMM2<0:0> << 1) | CIMM2<1:1>;\n                ', '\n                    Rp2 = Mem_ub;\n                ', '\n                    EA = rvZext(Rp1 + offset);\n                '],{})
              
                  return new C_lbu(machInst);
              break;
            
            case 0x1: 
              switch (CFUNCT1BIT6) {
                
                case 0x0:   
                  // CompressedLoad::c_lhu(['\n                        offset = CIMM2<0:0> << 1;\n                    ', '\n                        Rp2 = Mem_uh;\n                    ', '\n                        EA = rvZext(Rp1 + offset);\n                    '],{})
                  
                      return new C_lhu(machInst);
                  break;
                
                case 0x1:   
                  // CompressedLoad::c_lh(['\n                        offset = CIMM2<0:0> << 1;\n                    ', '\n                        Rp2_sd = Mem_sh;\n                    ', '\n                        EA = rvZext(Rp1 + offset);\n                    '],{})
                  
                      return new C_lh(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x2:   
              // CompressedStore::c_sb(['\n                    offset = (CIMM2<0:0> << 1) | CIMM2<1:1>;\n                ', '\n                    Mem_ub = Rp2_ub;\n                '],{'ea_code': '\n                    EA = rvZext(Rp1 + offset);\n                '})
              
                  return new C_sb(machInst);
              break;
            
            case 0x3:   
              // CompressedStore::c_sh(['\n                    offset = (CIMM2<0:0> << 1);\n                ', '\n                    Mem_uh = Rp2_uh;\n                '],{'ea_code': '\n                    EA = rvZext(Rp1 + offset);\n                '})
              
                  return new C_sh(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x5:   
          // CompressedStore::c_fsd(['\n                offset = CIMM3 << 3 | CIMM2 << 6;\n            ', '\n                STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                if (status.fs == FPUStatus::OFF)\n                    return std::make_shared<IllegalInstFault>("FPU is off",\n                                                               machInst);\n\n                Mem = Fp2_bits;\n            ', '\n                EA = rvZext(Rp1 + offset);\n            '],{})
          
              return new C_fsd(machInst);
          break;
        
        case 0x6:   
          // CompressedStore::c_sw(['\n                offset = CIMM2<1:1> << 2 |\n                         CIMM3 << 3 |\n                         CIMM2<0:0> << 6;\n            ', '\n                Mem_uw = Rp2_uw;\n            '],{'ea_code': '\n                EA = rvZext(Rp1 + offset);\n            '})
          
              return new C_sw(machInst);
          break;
        
        case 0x7: 
          switch (RVTYPE) {
            
            case 0x0:   
              // CompressedStore::c_fsw(['\n                    offset = CIMM2<1:1> << 2 |\n                             CIMM3 << 3 |\n                             CIMM2<0:0> << 6;\n                ', '\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>("FPU is off",\n                                                                   machInst);\n\n                    Mem_uw = unboxF32(boxF32(Fp2_bits));\n                ', '\n                    EA = (uint32_t)(Rp1_uw + offset);\n                '],{})
              
                  return new C_fsw(machInst);
              break;
            
            case 0x1:   
              // CompressedStore::c_sd(['\n                    offset = CIMM3 << 3 | CIMM2 << 6;\n                ', '\n                    Mem_ud = Rp2_ud;\n                ', '\n                    EA = Rp1 + offset;\n                '],{})
              
                  return new C_sd(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        default:
          
          // Unknown::unknown(([], {}))
          return new Unknown(machInst);
          break;
        }
      GEM5_UNREACHABLE;
    
    case 0x1: 
      switch (COPCODE) {
        
        case 0x0:   
          // CIOp::c_addi((['\n            imm = sext<6>(CIMM5 | (CIMM1 << 5));\n        ', '\n            if ((RC1 == 0) != (imm == 0)) {\n                if (RC1 == 0) {\n                    // imm != 0 is HINT\n                } else {\n                    // imm == 0 is HINT\n                }\n            }\n            Rc1_sd = rvSext(Rc1_sd + imm);\n        '], {}))
          
              return new C_addi(machInst);
          break;
        
        case 0x1: 
          switch (RVTYPE) {
            
            case 0x0:   
              // CJOp::c_jal((['\n                ra_sw = NPC_uw;\n                NPC_uw = PC_uw + imm;\n            ', 'IsDirectControl', 'IsUncondControl', 'IsCall'], {}))
              
                  return new C_jal(machInst);
              break;
            
            case 0x1:   
              // CIOp::c_addiw((['\n                imm = sext<6>(CIMM5 | (CIMM1 << 5));\n            ', '\n                if (RC1 == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "source reg x0", machInst);\n                }\n                Rc1_sw = (int32_t)(Rc1_sw + imm);\n            '], {}))
              
                  return new C_addiw(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x2:   
          // CIOp::c_li((['\n            imm = sext<6>(CIMM5 | (CIMM1 << 5));\n        ', '\n            // RC1 == 0 is HINT\n            Rc1_sd = imm;\n        '], {}))
          
              return new C_li(machInst);
          break;
        
        case 0x3: 
          switch (RC1) {
            
            case 0x2:   
              // CIOp::c_addi16sp((['\n                imm = sext<10>((CIMM5<4:4> << 4) |\n                               (CIMM5<0:0> << 5) |\n                               (CIMM5<3:3> << 6) |\n                               (CIMM5<2:1> << 7) |\n                               (CIMM1 << 9));\n            ', '\n                if (imm == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "immediate = 0", machInst);\n                }\n                sp_sd = rvSext(sp_sd + imm);\n            '], {}))
              
                  return new C_addi16sp(machInst);
              break;
            
            default:  
              // CIOp::c_lui((['\n                imm = sext<6>(CIMM5 | (CIMM1 << 5)) << 12;\n            ', '\n                // RC1 == 0 is HINT\n                if (imm == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "immediate = 0", machInst);\n                }\n                Rc1_sd = imm;\n            '], {}))
              
                  return new C_lui(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x4: 
          switch (CFUNCT2HIGH) {
            
            case 0x0:   
              // CIOp::c_srli(['\n                    imm = CIMM5 | (CIMM1 << 5);\n                ', '\n                    if (rvSelect((bool)CIMM1, false)) {\n                        return std::make_shared<IllegalInstFault>(\n                                "shmat[5] != 0", machInst);\n                    }\n                    if (imm == 0) {\n                        // C.SRLI64, HINT for RV32/RV64\n                    }\n                    // The MSB can never be 1, hence no need to sign ext.\n                    Rp1 = rvZext(Rp1) >> imm;\n                ', 'uint64_t'],{})
              
                  return new C_srli(machInst);
              break;
            
            case 0x1:   
              // CIOp::c_srai(['\n                    imm = CIMM5 | (CIMM1 << 5);\n                ', '\n                    if (rvSelect((bool)CIMM1, false)) {\n                        return std::make_shared<IllegalInstFault>(\n                                "shmat[5] != 0", machInst);\n                    }\n                    if (imm == 0) {\n                        // C.SRAI64, HINT for RV32/RV64\n                    }\n                    Rp1_sd = rvSext(Rp1_sd) >> imm;\n                ', 'uint64_t'],{})
              
                  return new C_srai(machInst);
              break;
            
            case 0x2:   
              // CIOp::c_andi(['\n                    imm = CIMM5;\n                    if (CIMM1 > 0)\n                        imm |= ~((uint64_t)0x1F);\n                ', '\n                    Rp1 = rvSext(Rp1 & imm);\n                ', 'uint64_t'],{})
              
                  return new C_andi(machInst);
              break;
            
            case 0x3: 
              switch (CFUNCT1) {
                
                case 0x0: 
                  switch (CFUNCT2LOW) {
                    
                    case 0x0:   
                      // CompressedROp::c_sub(['\n                            Rp1 = rvSext(Rp1 - Rp2);\n                        '],{})
                      
                          return new C_sub(machInst);
                      break;
                    
                    case 0x1:   
                      // CompressedROp::c_xor(['\n                            Rp1 = rvSext(Rp1 ^ Rp2);\n                        '],{})
                      
                          return new C_xor(machInst);
                      break;
                    
                    case 0x2:   
                      // CompressedROp::c_or(['\n                            Rp1 = rvSext(Rp1 | Rp2);\n                        '],{})
                      
                          return new C_or(machInst);
                      break;
                    
                    case 0x3:   
                      // CompressedROp::c_and(['\n                            Rp1 = rvSext(Rp1 & Rp2);\n                        '],{})
                      
                          return new C_and(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1: 
                  switch (CFUNCT2LOW) {
                    
                    case 0x0: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // CompressedROp::c_subw(['\n                                Rp1_sd = (int32_t)Rp1_sd - Rp2_sw;\n                            '],{})
                          
                              return new C_subw(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x1: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // CompressedROp::c_addw(['\n                                Rp1_sd = (int32_t)Rp1_sd + Rp2_sw;\n                            '],{})
                          
                              return new C_addw(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x2:   
                      // CompressedROp::c_mul(['\n                            Rp1_sd = rvSext(Rp1_sd * Rp2_sd);\n                        ', 'IntMultOp'],{})
                      
                          return new C_mul(machInst);
                      break;
                    
                    case 0x3: 
                      switch (RP2) {
                        
                        case 0x0:   
                          // CompressedROp::c_zext_b(['\n                                Rp1 = Rp1 & 0xFFULL;\n                            '],{})
                          
                              return new C_zext_b(machInst);
                          break;
                        
                        case 0x1:   
                          // CompressedROp::c_sext_b(['\n                                Rp1 = sext<8>(Rp1 & 0xFFULL);\n                            '],{})
                          
                              return new C_sext_b(machInst);
                          break;
                        
                        case 0x2:   
                          // CompressedROp::c_zext_h(['\n                                Rp1 = Rp1 & 0xFFFFULL;\n                            '],{})
                          
                              return new C_zext_h(machInst);
                          break;
                        
                        case 0x3:   
                          // CompressedROp::c_sext_h(['\n                                Rp1 = sext<16>(Rp1 & 0xFFFFULL);\n                            '],{})
                          
                              return new C_sext_h(machInst);
                          break;
                        
                        case 0x4: 
                          switch (RVTYPE) {
                            
                            case 0x1:   
                              // CompressedROp::c_zext_w(['\n                                    Rp1 = bits(Rp1, 31, 0);\n                                '],{})
                              
                                  return new C_zext_w(machInst);
                              break;
                            
                            default:
                              
                              // Unknown::unknown(([], {}))
                              return new Unknown(machInst);
                              break;
                            }
                          GEM5_UNREACHABLE;
                        
                        case 0x5:   
                          // CompressedROp::c_not(['\n                                Rp1 = ~Rp1;\n                            '],{})
                          
                              return new C_not(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x5:   
          // CJOp::c_j((['\n            NPC = rvZext(PC + imm);\n        ', 'IsDirectControl', 'IsUncondControl'], {}))
          
              return new C_j(machInst);
          break;
        
        case 0x6:   
          // CBOp::c_beqz(['\n                if (rvSext(Rp1) == 0)\n                    NPC = rvZext(PC + imm);\n                else\n                    NPC = NPC;\n            ', 'IsDirectControl', 'IsCondControl'],{})
          
              return new C_beqz(machInst);
          break;
        
        case 0x7:   
          // CBOp::c_bnez(['\n                if (rvSext(Rp1) != 0)\n                    NPC = rvZext(PC + imm);\n                else\n                    NPC = NPC;\n            ', 'IsDirectControl', 'IsCondControl'],{})
          
              return new C_bnez(machInst);
          break;
        
        default:
          
          // Unknown::unknown(([], {}))
          return new Unknown(machInst);
          break;
        }
      GEM5_UNREACHABLE;
    
    case 0x2: 
      switch (COPCODE) {
        
        case 0x0:   
          // CIOp::c_slli((['\n            imm = CIMM5 | (CIMM1 << 5);\n        ', '\n            if (rvSelect((bool)CIMM1, false)) {\n                return std::make_shared<IllegalInstFault>(\n                        "shmat[5] != 0", machInst);\n            }\n            if (imm == 0) {\n                // C.SLLI64, HINT for RV32/RV64\n            }\n            // RC1 == 0 is HINT\n            Rc1 = rvSext(Rc1 << imm);\n        ', 'uint64_t'], {}))
          
              return new C_slli(machInst);
          break;
        
        case 0x1:   
          // CompressedLoad::c_fldsp(['\n                offset = CIMM5<4:3> << 3 |\n                         CIMM1 << 5 |\n                         CIMM5<2:0> << 6;\n            ', '\n                STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                if (status.fs == FPUStatus::OFF)\n                    return std::make_shared<IllegalInstFault>("FPU is off",\n                                                               machInst);\n\n                status.fs = FPUStatus::DIRTY;\n                xc->setMiscReg(MISCREG_STATUS, status);\n\n                Fc1_bits = Mem;\n            ', '\n                EA = rvZext(sp + offset);\n            '],{})
          
              return new C_fldsp(machInst);
          break;
        
        case 0x2:   
          // CompressedLoad::c_lwsp(['\n                offset = CIMM5<4:2> << 2 |\n                         CIMM1 << 5 |\n                         CIMM5<1:0> << 6;\n            ', '\n                if (RC1 == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "source reg x0", machInst);\n                }\n                Rc1_sw = Mem_sw;\n            ', '\n                EA = rvZext(sp + offset);\n            '],{})
          
              return new C_lwsp(machInst);
          break;
        
        case 0x3: 
          switch (RVTYPE) {
            
            case 0x0:   
              // CompressedLoad::c_flwsp(['\n                    offset = CIMM5<4:2> << 2 |\n                             CIMM1 << 5 |\n                             CIMM5<1:0> << 6;\n                ', '\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>("FPU is off",\n                                                                   machInst);\n\n                    status.fs = FPUStatus::DIRTY;\n                    xc->setMiscReg(MISCREG_STATUS, status);\n\n                    freg_t fd;\n                    fd = freg(f32(Mem_uw));\n                    Fc1_bits = fd.v;\n                ', '\n                    EA = (uint32_t)(sp_uw + offset);\n                '],{})
              
                  return new C_flwsp(machInst);
              break;
            
            case 0x1:   
              // CompressedLoad::c_ldsp(['\n                    offset = CIMM5<4:3> << 3 |\n                             CIMM1 << 5 |\n                             CIMM5<2:0> << 6;\n                ', '\n                    if (RC1 == 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x0", machInst);\n                    }\n                    Rc1_sd = Mem_sd;\n                ', '\n                    EA = sp + offset;\n                '],{})
              
                  return new C_ldsp(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x4: 
          switch (CFUNCT1) {
            
            case 0x0: 
              switch (RC2) {
                
                case 0x0:   
                  // CJump::c_jr((['\n                    if (RC1 == 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x0", machInst);\n                    }\n                    NPC = rvZext(Rc1 & (~0x1));\n                ', 'IsIndirectControl', 'IsUncondControl'], {}))
                  
                      return new C_jr(machInst);
                  break;
                
                default:  
                  // CROp::c_mv((['\n                    // RC1 == 0 is HINT\n                    Rc1 = rvSext(Rc2);\n                '], {}))
                  
                      return new C_mv(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x1: 
              switch (RC2) {
                
                case 0x0: 
                  switch (RC1) {
                    
                    case 0x0:   
                      // SystemOp::c_ebreak((['\n                        // NB: Semihosting spec requires uncompressed ebreak,\n                        // so this instruction does not check for semihosting.\n                        return std::make_shared<BreakpointFault>(\n                            xc->pcState());\n                    ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'], {}))
                      
                          return new C_ebreak(machInst);
                      break;
                    
                    default:  
                      // CJump::c_jalr((['\n                        ra = rvSext(NPC);\n                        NPC = rvZext(Rc1 & (~0x1));\n                    ', 'IsIndirectControl', 'IsUncondControl', 'IsCall'], {}))
                      
                          return new C_jalr(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:  
                  // CompressedROp::c_add((['\n                    // RC1 == 0 is HINT\n                    Rc1_sd = rvSext(Rc1_sd + Rc2_sd);\n                '], {}))
                  
                      return new C_add(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x5:   
          // CompressedStore::c_fsdsp(['\n                offset = CIMM6<5:3> << 3 |\n                         CIMM6<2:0> << 6;\n            ', '\n                STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                if (status.fs == FPUStatus::OFF)\n                    return std::make_shared<IllegalInstFault>("FPU is off",\n                                                               machInst);\n\n                Mem_ud = Fc2_bits;\n            ', '\n                EA = rvZext(sp + offset);\n            '],{})
          
              return new C_fsdsp(machInst);
          break;
        
        case 0x6:   
          // CompressedStore::c_swsp(['\n                offset = CIMM6<5:2> << 2 |\n                         CIMM6<1:0> << 6;\n            ', '\n                Mem_uw = Rc2_uw;\n            ', '\n                EA = rvZext(sp + offset);\n            '],{})
          
              return new C_swsp(machInst);
          break;
        
        case 0x7: 
          switch (RVTYPE) {
            
            case 0x0:   
              // CompressedStore::c_fswsp(['\n                    offset = CIMM6<5:2> << 2 |\n                             CIMM6<1:0> << 6;\n                ', '\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>("FPU is off",\n                                                                   machInst);\n\n                    Mem_uw = unboxF32(boxF32(Fc2_bits));\n                ', '\n                    EA = (uint32_t)(sp_uw + offset);\n                '],{})
              
                  return new C_fswsp(machInst);
              break;
            
            case 0x1:   
              // CompressedStore::c_sdsp(['\n                    offset = CIMM6<5:3> << 3 |\n                             CIMM6<2:0> << 6;\n                ', '\n                    Mem = Rc2;\n                ', '\n                    EA = sp + offset;\n                '],{})
              
                  return new C_sdsp(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        default:
          
          // Unknown::unknown(([], {}))
          return new Unknown(machInst);
          break;
        }
      GEM5_UNREACHABLE;
    
    case 0x3: 
      switch (OPCODE5) {
        
        case 0x0: 
          switch (FUNCT3) {
            
            case 0x0:   
              // Load::lb(['\n                    Rd_sd = Mem_sb;\n                '],{})
              
                  return new Lb(machInst);
              break;
            
            case 0x1:   
              // Load::lh(['\n                    Rd_sd = Mem_sh;\n                '],{})
              
                  return new Lh(machInst);
              break;
            
            case 0x2:   
              // Load::lw(['\n                    Rd_sd = Mem_sw;\n                '],{})
              
                  return new Lw(machInst);
              break;
            
            case 0x3: 
              switch (RVTYPE) {
                
                case 0x1:   
                  // Load::ld(['\n                        Rd_sd = Mem_sd;\n                    '],{})
                  
                      return new Ld(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x4:   
              // Load::lbu(['\n                    Rd = Mem_ub;\n                '],{})
              
                  return new Lbu(machInst);
              break;
            
            case 0x5:   
              // Load::lhu(['\n                    Rd = Mem_uh;\n                '],{})
              
                  return new Lhu(machInst);
              break;
            
            case 0x6: 
              switch (RVTYPE) {
                
                case 0x1:   
                  // Load::lwu(['\n                        Rd = Mem_uw;\n                    '],{})
                  
                      return new Lwu(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x1: 
          switch (FUNCT3) {
            
            case 0x1:   
              // Load::flh(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                    "FPU is off", machInst);\n\n                    status.fs = FPUStatus::DIRTY;\n                    xc->setMiscReg(MISCREG_STATUS, status);\n\n                    freg_t fd;\n                    fd = freg(f16(Mem_uh));\n                    Fd_bits = fd.v;\n                '],{'inst_flags': 'FloatMemReadOp'})
              
                  return new Flh(machInst);
              break;
            
            case 0x2:   
              // Load::flw(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                    "FPU is off", machInst);\n\n                    status.fs = FPUStatus::DIRTY;\n                    xc->setMiscReg(MISCREG_STATUS, status);\n\n                    freg_t fd;\n                    fd = freg(f32(Mem_uw));\n                    Fd_bits = fd.v;\n                '],{'inst_flags': 'FloatMemReadOp'})
              
                  return new Flw(machInst);
              break;
            
            case 0x3:   
              // Load::fld(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                    "FPU is off", machInst);\n\n                    status.fs = FPUStatus::DIRTY;\n                    xc->setMiscReg(MISCREG_STATUS, status);\n\n                    freg_t fd;\n                    fd = freg(f64(Mem));\n                    Fd_bits = fd.v;\n                '],{'inst_flags': 'FloatMemReadOp'})
              
                  return new Fld(machInst);
              break;
            
            case 0x0: 
              switch (MOP) {
                
                case 0x0: 
                  switch (LUMOP) {
                    
                    case 0x0: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VleOp::vle8_v((['\n                            if ((machInst.vm || elem_mask(v0, ei)) &&\n                                i < this->microVl) {\n                                Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                            }\n                        '], {'inst_flags': 'SimdUnitStrideLoadOp'}))
                          
                              return new Vle8_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VlSegOp::vlseg2e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 2)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg2e8_v(machInst, vlen);
                          break;
                        
                        case 0x2:   
                          // VlSegOp::vlseg3e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 3)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg3e8_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VlSegOp::vlseg4e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 4)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg4e8_v(machInst, vlen);
                          break;
                        
                        case 0x4:   
                          // VlSegOp::vlseg5e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 5)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg5e8_v(machInst, vlen);
                          break;
                        
                        case 0x5:   
                          // VlSegOp::vlseg6e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 6)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg6e8_v(machInst, vlen);
                          break;
                        
                        case 0x6:   
                          // VlSegOp::vlseg7e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 7)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg7e8_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VlSegOp::vlseg8e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 8)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg8e8_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x8: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VlWholeOp::vl1re8_v(['\n                                Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl1re8_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VlWholeOp::vl2re8_v(['\n                                Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl2re8_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VlWholeOp::vl4re8_v(['\n                                Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl4re8_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VlWholeOp::vl8re8_v(['\n                                Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl8re8_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0xb:   
                      // VlmOp::vlm_v((['\n                        Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                    '], {'inst_flags': 'SimdUnitStrideMaskLoadOp'}))
                      
                          return new Vlm_v(machInst, vlen);
                      break;
                    
                    case 0x10:   
                      // VleOp::vle8ff_v((['\n                        if ((machInst.vm || elem_mask(v0, ei)) &&\n                            i < this->microVl && i < this->faultIdx) {\n                            Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                        }\n                    '], {'inst_flags': 'SimdUnitStrideFaultOnlyFirstLoadOp'}))
                      
                          return new Vle8ff_v(machInst, vlen);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1:   
                  // VlIndexOp::vluxei8_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_ub[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vluxei8_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vluxei8_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vluxei8_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vluxei8_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VlStrideOp::vlse8_v((['\n                    Vd_ub[microIdx] = Mem_vc.as<uint8_t>()[0];\n                '], {'inst_flags': 'SimdStridedLoadOp'}))
                  
                      return new Vlse8_v(machInst, vlen);
                  break;
                
                case 0x3:   
                  // VlIndexOp::vloxei8_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_ub[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vloxei8_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vloxei8_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vloxei8_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vloxei8_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x5: 
              switch (MOP) {
                
                case 0x0: 
                  switch (LUMOP) {
                    
                    case 0x0: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VleOp::vle16_v((['\n                            if ((machInst.vm || elem_mask(v0, ei)) &&\n                                i < this->microVl) {\n                                Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                            }\n                        '], {'inst_flags': 'SimdUnitStrideLoadOp'}))
                          
                              return new Vle16_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VlSegOp::vlseg2e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 2)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg2e16_v(machInst, vlen);
                          break;
                        
                        case 0x2:   
                          // VlSegOp::vlseg3e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 3)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg3e16_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VlSegOp::vlseg4e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 4)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg4e16_v(machInst, vlen);
                          break;
                        
                        case 0x4:   
                          // VlSegOp::vlseg5e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 5)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg5e16_v(machInst, vlen);
                          break;
                        
                        case 0x5:   
                          // VlSegOp::vlseg6e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 6)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg6e16_v(machInst, vlen);
                          break;
                        
                        case 0x6:   
                          // VlSegOp::vlseg7e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 7)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg7e16_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VlSegOp::vlseg8e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 8)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg8e16_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x8: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VlWholeOp::vl1re16_v(['\n                                Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl1re16_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VlWholeOp::vl2re16_v(['\n                                Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl2re16_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VlWholeOp::vl4re16_v(['\n                                Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl4re16_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VlWholeOp::vl8re16_v(['\n                                Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl8re16_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x10:   
                      // VleOp::vle16ff_v((['\n                        if ((machInst.vm || elem_mask(v0, ei)) &&\n                            i < this->microVl && i < this->faultIdx) {\n                            Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                        }\n                    '], {'inst_flags': 'SimdUnitStrideFaultOnlyFirstLoadOp'}))
                      
                          return new Vle16ff_v(machInst, vlen);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1:   
                  // VlIndexOp::vluxei16_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_uh[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vluxei16_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vluxei16_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vluxei16_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vluxei16_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VlStrideOp::vlse16_v((['\n                    Vd_uh[microIdx] = Mem_vc.as<uint16_t>()[0];\n                '], {'inst_flags': 'SimdStridedLoadOp'}))
                  
                      return new Vlse16_v(machInst, vlen);
                  break;
                
                case 0x3:   
                  // VlIndexOp::vloxei16_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_uh[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vloxei16_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vloxei16_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vloxei16_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vloxei16_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x6: 
              switch (MOP) {
                
                case 0x0: 
                  switch (LUMOP) {
                    
                    case 0x0: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VleOp::vle32_v((['\n                            if ((machInst.vm || elem_mask(v0, ei)) &&\n                                i < this->microVl) {\n                                Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                            }\n                        '], {'inst_flags': 'SimdUnitStrideLoadOp'}))
                          
                              return new Vle32_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VlSegOp::vlseg2e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 2)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg2e32_v(machInst, vlen);
                          break;
                        
                        case 0x2:   
                          // VlSegOp::vlseg3e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 3)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg3e32_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VlSegOp::vlseg4e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 4)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg4e32_v(machInst, vlen);
                          break;
                        
                        case 0x4:   
                          // VlSegOp::vlseg5e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 5)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg5e32_v(machInst, vlen);
                          break;
                        
                        case 0x5:   
                          // VlSegOp::vlseg6e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 6)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg6e32_v(machInst, vlen);
                          break;
                        
                        case 0x6:   
                          // VlSegOp::vlseg7e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 7)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg7e32_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VlSegOp::vlseg8e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 8)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg8e32_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x8: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VlWholeOp::vl1re32_v(['\n                                Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl1re32_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VlWholeOp::vl2re32_v(['\n                                Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl2re32_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VlWholeOp::vl4re32_v(['\n                                Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl4re32_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VlWholeOp::vl8re32_v(['\n                                Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl8re32_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x10:   
                      // VleOp::vle32ff_v((['\n                        if ((machInst.vm || elem_mask(v0, ei)) &&\n                            i < this->microVl && i < this->faultIdx) {\n                            Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                        }\n                    '], {'inst_flags': 'SimdUnitStrideFaultOnlyFirstLoadOp'}))
                      
                          return new Vle32ff_v(machInst, vlen);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1:   
                  // VlIndexOp::vluxei32_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_uw[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vluxei32_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vluxei32_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vluxei32_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vluxei32_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VlStrideOp::vlse32_v((['\n                    Vd_uw[microIdx] = Mem_vc.as<uint32_t>()[0];\n                '], {'inst_flags': 'SimdStridedLoadOp'}))
                  
                      return new Vlse32_v(machInst, vlen);
                  break;
                
                case 0x3:   
                  // VlIndexOp::vloxei32_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_uw[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vloxei32_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vloxei32_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vloxei32_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vloxei32_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x7: 
              switch (MOP) {
                
                case 0x0: 
                  switch (LUMOP) {
                    
                    case 0x0: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VleOp::vle64_v((['\n                            if ((machInst.vm || elem_mask(v0, ei)) &&\n                                i < this->microVl) {\n                                Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                            }\n                        '], {'inst_flags': 'SimdUnitStrideLoadOp'}))
                          
                              return new Vle64_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VlSegOp::vlseg2e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 2)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg2e64_v(machInst, vlen);
                          break;
                        
                        case 0x2:   
                          // VlSegOp::vlseg3e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 3)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg3e64_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VlSegOp::vlseg4e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 4)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg4e64_v(machInst, vlen);
                          break;
                        
                        case 0x4:   
                          // VlSegOp::vlseg5e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 5)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg5e64_v(machInst, vlen);
                          break;
                        
                        case 0x5:   
                          // VlSegOp::vlseg6e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 6)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg6e64_v(machInst, vlen);
                          break;
                        
                        case 0x6:   
                          // VlSegOp::vlseg7e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 7)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg7e64_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VlSegOp::vlseg8e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 8)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})
                          
                              return new Vlseg8e64_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x8: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VlWholeOp::vl1re64_v(['\n                                Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl1re64_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VlWholeOp::vl2re64_v(['\n                                Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl2re64_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VlWholeOp::vl4re64_v(['\n                                Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl4re64_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VlWholeOp::vl8re64_v(['\n                                Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})
                          
                              return new Vl8re64_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x10:   
                      // VleOp::vle64ff_v((['\n                        if ((machInst.vm || elem_mask(v0, ei)) &&\n                            i < this->microVl && i < this->faultIdx) {\n                            Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                        }\n                    '], {'inst_flags': 'SimdUnitStrideFaultOnlyFirstLoadOp'}))
                      
                          return new Vle64ff_v(machInst, vlen);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1:   
                  // VlIndexOp::vluxei64_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_ud[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vluxei64_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vluxei64_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vluxei64_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vluxei64_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VlStrideOp::vlse64_v((['\n                    Vd_ud[microIdx] = Mem_vc.as<uint64_t>()[0];\n                '], {'inst_flags': 'SimdStridedLoadOp'}))
                  
                      return new Vlse64_v(machInst, vlen);
                  break;
                
                case 0x3:   
                  // VlIndexOp::vloxei64_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_ud[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vloxei64_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vloxei64_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vloxei64_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vloxei64_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x3: 
          switch (FUNCT3) {
            
            case 0x0:   
              // FenceOp::fence(['\n                ', 'uint64_t', 'IsReadBarrier', 'IsWriteBarrier', 'No_OpClass'],{})
              
                  return new Fence(machInst);
              break;
            
            case 0x1:   
              // FenceOp::fence_i(['\n                ', 'uint64_t', 'IsNonSpeculative', 'IsSerializeAfter', 'IsSquashAfter', 'No_OpClass'],{})
              
                  return new Fence_i(machInst);
              break;
            
            case 0x2: 
              switch (FUNCT12) {
                
                case 0x0:   
                  // CBMOp::cbo_inval(['\n                        Mem = 0;\n                    '],{'mem_flags': ['INVALIDATE', 'DST_POC']})
                  
                      return new Cbo_inval(machInst);
                  break;
                
                case 0x1:   
                  // CBMOp::cbo_clean(['\n                        Mem = 0;\n                    '],{'mem_flags': ['CLEAN', 'DST_POC']})
                  
                      return new Cbo_clean(machInst);
                  break;
                
                case 0x2:   
                  // CBMOp::cbo_flush(['\n                        Mem = 0;\n                    '],{'mem_flags': ['CLEAN', 'INVALIDATE', 'DST_POC']})
                  
                      return new Cbo_flush(machInst);
                  break;
                
                case 0x4:   
                  // CBMOp::cbo_zero(['\n                        Mem = 0;\n                    '],{'mem_flags': ['CACHE_BLOCK_ZERO']})
                  
                      return new Cbo_zero(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x4: 
          switch (FUNCT3) {
            
            case 0x1: 
              switch (FS3) {
                
                case 0x0:   
                  // IOp::slli(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        Rd = rvSext(Rs1 << imm);\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Slli(machInst);
                  break;
                
                case 0x1: 
                  switch (RVTYPE) {
                    
                    case 0x0:   
                      // IOp::zip(['\n                            Rd_sw = _rvk_emu_zip_32(Rs1_sw);\n                        '],{'imm_code': ' imm = SHAMT5; '})
                      
                          return new Zip(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x2: 
                  switch (FS2) {
                    
                    case 0x0:   
                      // IOp::sha256sum0(['\n                            Rd_sw = _rvk_emu_sha256sum0(Rs1_sw);\n                        '],{})
                      
                          return new Sha256sum0(machInst);
                      break;
                    
                    case 0x1:   
                      // IOp::sha256sum1(['\n                            Rd_sw = _rvk_emu_sha256sum1(Rs1_sw);\n                        '],{})
                      
                          return new Sha256sum1(machInst);
                      break;
                    
                    case 0x2:   
                      // IOp::sha256sig0(['\n                            Rd_sw = _rvk_emu_sha256sig0(Rs1_sw);\n                        '],{})
                      
                          return new Sha256sig0(machInst);
                      break;
                    
                    case 0x3:   
                      // IOp::sha256sig1(['\n                            Rd_sw = _rvk_emu_sha256sig1(Rs1_sw);\n                        '],{})
                      
                          return new Sha256sig1(machInst);
                      break;
                    
                    case 0x4: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // IOp::sha512sum0(['\n                                Rd_sd = _rvk_emu_sha512sum0(Rs1_sd);\n                            '],{})
                          
                              return new Sha512sum0(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x5: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // IOp::sha512sum1(['\n                                Rd_sd = _rvk_emu_sha512sum1(Rs1_sd);\n                            '],{})
                          
                              return new Sha512sum1(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x6: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // IOp::sha512sig0(['\n                                Rd_sd = _rvk_emu_sha512sig0(Rs1_sd);\n                            '],{})
                          
                              return new Sha512sig0(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x7: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // IOp::sha512sig1(['\n                                Rd_sd = _rvk_emu_sha512sig1(Rs1_sd);\n                            '],{})
                          
                              return new Sha512sig1(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x8:   
                      // IOp::sm3p0(['\n                            Rd_sw = _rvk_emu_sm3p0(Rs1_sw);\n                        '],{})
                      
                          return new Sm3p0(machInst);
                      break;
                    
                    case 0x9:   
                      // IOp::sm3p1(['\n                            Rd_sw = _rvk_emu_sm3p1(Rs1_sw);\n                        '],{})
                      
                          return new Sm3p1(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x5:   
                  // IOp::bseti(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        uint64_t index = imm & rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 | (UINT64_C(1) << index));\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Bseti(machInst);
                  break;
                
                case 0x6: 
                  switch (BIT24) {
                    
                    case 0x0: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // IOp::aes64im(['\n                                Rd_sd = _rvk_emu_aes64im(Rs1_sd);\n                            '],{})
                          
                              return new Aes64im(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x1: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // IOp::aes64ks1i(['\n                                Rd_sd = _rvk_emu_aes64ks1i(Rs1_sd, imm);\n                            '],{'imm_type': 'int32_t', 'imm_code': ' imm = RNUM; '})
                          
                              return new Aes64ks1i(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x9:   
                  // IOp::bclri(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        uint64_t index = imm & rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 & (~(UINT64_C(1) << index)));\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Bclri(machInst);
                  break;
                
                case 0xd:   
                  // IOp::binvi(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        uint64_t index = imm & rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 ^ (UINT64_C(1) << index));\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Binvi(machInst);
                  break;
                
                case 0xc: 
                  switch (RS2) {
                    
                    case 0x0:   
                      // ROp::clz(['\n                            Rd = (machInst.rv_type == RV32) ? clz32(Rs1) : clz64(Rs1);\n                        '],{})
                      
                          return new Clz(machInst);
                      break;
                    
                    case 0x1:   
                      // ROp::ctz(['\n                            Rd = (machInst.rv_type == RV32) ? ctz32(Rs1) : ctz64(Rs1);\n                        '],{})
                      
                          return new Ctz(machInst);
                      break;
                    
                    case 0x2:   
                      // ROp::cpop(['\n                            Rd = (machInst.rv_type == RV32) ? popCount(Rs1<31:0>) : popCount(Rs1);\n                        '],{})
                      
                          return new Cpop(machInst);
                      break;
                    
                    case 0x4:   
                      // ROp::sext_b(['\n                            Rd = sext<8>(Rs1_ub);\n                        '],{})
                      
                          return new Sext_b(machInst);
                      break;
                    
                    case 0x5:   
                      // ROp::sext_h(['\n                            Rd = sext<16>(Rs1_uh);\n                        '],{})
                      
                          return new Sext_h(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x0:   
              // IOp::addi(['\n                    Rd_sd = rvSext(Rs1_sd + imm);\n                '],{})
              
                  return new Addi(machInst);
              break;
            
            case 0x2:   
              // IOp::slti(['\n                    Rd = (rvSext(Rs1_sd) < imm) ? 1 : 0;\n                '],{})
              
                  return new Slti(machInst);
              break;
            
            case 0x3:   
              // IOp::sltiu(['\n                    Rd = (rvZext(Rs1) < imm) ? 1 : 0;\n                ', 'uint64_t'],{'imm_code': ' imm = rvZext(sext<12>(IMM12)); '})
              
                  return new Sltiu(machInst);
              break;
            
            case 0x4:   
              // IOp::xori(['\n                    Rd = rvSext(Rs1 ^ imm);\n                ', 'uint64_t'],{})
              
                  return new Xori(machInst);
              break;
            
            case 0x5: 
              switch (FS3) {
                
                case 0x0:   
                  // IOp::srli(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        Rd = rvSext(rvZext(Rs1) >> imm);\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Srli(machInst);
                  break;
                
                case 0x1: 
                  switch (RVTYPE) {
                    
                    case 0x0:   
                      // IOp::unzip(['\n                            Rd_sw = _rvk_emu_unzip_32(Rs1_sw);\n                        '],{'imm_code': ' imm = SHAMT5; '})
                      
                          return new Unzip(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x5:   
                  // IOp::orc_b(['\n                        uint64_t result = 0;\n                        result |= (Rs1<7:0> ? UINT64_C(0xff) : 0x0);\n                        result |= (Rs1<15:8> ? UINT64_C(0xff) : 0x0) << 8;\n                        result |= (Rs1<23:16> ? UINT64_C(0xff) : 0x0) << 16;\n                        result |= (Rs1<31:24> ? UINT64_C(0xff) : 0x0) << 24;\n                        result |= (Rs1<39:32> ? UINT64_C(0xff) : 0x0) << 32;\n                        result |= (Rs1<47:40> ? UINT64_C(0xff) : 0x0) << 40;\n                        result |= (Rs1<55:48> ? UINT64_C(0xff) : 0x0) << 48;\n                        result |= (Rs1<63:56> ? UINT64_C(0xff) : 0x0) << 56;\n                        Rd = rvSext(result);\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Orc_b(machInst);
                  break;
                
                case 0x8:   
                  // IOp::srai(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        Rd_sd = rvSext(Rs1_sd) >> imm;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Srai(machInst);
                  break;
                
                case 0x9:   
                  // IOp::bexti(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        uint64_t index = imm & rvSelect(32 - 1, 64 - 1);\n                        Rd = (Rs1 >> index) & 0x1;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Bexti(machInst);
                  break;
                
                case 0xc:   
                  // IOp::rori(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        uint64_t xlen = rvSelect(32, 64);\n                        Rd = rvSext((rvZext(Rs1) >> imm)\n                            | (Rs1 << ((xlen - imm) & (xlen - 1))));\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                  
                      return new Rori(machInst);
                  break;
                
                case 0xd: 
                  switch (RS2) {
                    
                    case 0x18:   
                      // ROp::rev8((['\n                            if (rvSelect((bool)SHAMT6BIT5, false)) {\n                                return std::make_shared<IllegalInstFault>(\n                                        "shmat[5] != 0", machInst);\n                            }\n                            if (machInst.rv_type == RV32) {\n                                Rd_sd = _rvk_emu_grev_32(Rs1_sd, 0x18);\n                            } else {\n                                Rd_sd = _rvk_emu_grev_64(Rs1_sd, 0x38);\n                            }\n                        '], {}))
                      
                          return new Rev8(machInst);
                      break;
                    
                    case 0x7:   
                      // ROp::brev8((['\n                            if (machInst.rv_type == RV32) {\n                                Rd_sd = _rvk_emu_brev8_32(Rs1_sd);\n                            } else {\n                                Rd_sd = _rvk_emu_brev8_64(Rs1_sd);\n                            }\n                        '], {}))
                      
                          return new Brev8(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x6:   
              // IOp::ori(['\n                    Rd = rvSext(Rs1 | imm);\n                ', 'uint64_t'],{})
              
                  return new Ori(machInst);
              break;
            
            case 0x7:   
              // IOp::andi(['\n                    Rd = rvSext(Rs1 & imm);\n                ', 'uint64_t'],{})
              
                  return new Andi(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x5:   
          // UOp::auipc((['\n            Rd = rvSext(PC + (sext<20>(imm) << 12));\n        '], {}))
          
              return new Auipc(machInst);
          break;
        
        case 0x6: 
          switch (RVTYPE) {
            
            case 0x1: 
              switch (FUNCT3) {
                
                case 0x0:   
                  // IOp::addiw(['\n                        Rd_sw = (int32_t)(Rs1_sw + imm);\n                    ', 'int32_t'],{})
                  
                      return new Addiw(machInst);
                  break;
                
                case 0x1: 
                  switch (FS3) {
                    
                    case 0x0:   
                      // IOp::slliw(['\n                            Rd_sd = Rs1_sw << imm;\n                        '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})
                      
                          return new Slliw(machInst);
                      break;
                    
                    case 0x1:   
                      // IOp::slli_uw(['\n                            Rd = ((uint64_t)(Rs1_uw)) << imm;\n                        '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})
                      
                          return new Slli_uw(machInst);
                      break;
                    
                    case 0xc: 
                      switch (FS2) {
                        
                        case 0x0:   
                          // IOp::clzw(['\n                                Rd = clz32(Rs1);\n                            '],{})
                          
                              return new Clzw(machInst);
                          break;
                        
                        case 0x1:   
                          // IOp::ctzw(['\n                                Rd = ctz32(Rs1);\n                            '],{})
                          
                              return new Ctzw(machInst);
                          break;
                        
                        case 0x2:   
                          // IOp::cpopw(['\n                                Rd = popCount(Rs1<31:0>);\n                            '],{})
                          
                              return new Cpopw(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x5: 
                  switch (FS3) {
                    
                    case 0x0:   
                      // IOp::srliw(['\n                            Rd_sd = (int32_t)(Rs1_uw >> imm);\n                        '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})
                      
                          return new Srliw(machInst);
                      break;
                    
                    case 0x8:   
                      // IOp::sraiw(['\n                            Rd_sd = Rs1_sw >> imm;\n                        '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})
                      
                          return new Sraiw(machInst);
                      break;
                    
                    case 0xc:   
                      // IOp::roriw(['\n                            Rd = (int32_t) ((Rs1_uw >> imm) | (Rs1_uw << ((32 - imm) & (32 - 1))));\n                        '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})
                      
                          return new Roriw(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x8: 
          switch (FUNCT3) {
            
            case 0x0:   
              // Store::sb(['\n                    Mem_ub = Rs2_ub;\n                '],{})
              
                  return new Sb(machInst);
              break;
            
            case 0x1:   
              // Store::sh(['\n                    Mem_uh = Rs2_uh;\n                '],{})
              
                  return new Sh(machInst);
              break;
            
            case 0x2:   
              // Store::sw(['\n                    Mem_uw = Rs2_uw;\n                '],{})
              
                  return new Sw(machInst);
              break;
            
            case 0x3: 
              switch (RVTYPE) {
                
                case 0x1:   
                  // Store::sd(['\n                        Mem_ud = Rs2_ud;\n                    '],{})
                  
                      return new Sd(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x9: 
          switch (FUNCT3) {
            
            case 0x1:   
              // Store::fsh(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                "FPU is off", machInst);\n\n                    Mem_uh = unboxF16(boxF16(Fs2_bits));\n                '],{'inst_flags': 'FloatMemWriteOp'})
              
                  return new Fsh(machInst);
              break;
            
            case 0x2:   
              // Store::fsw(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                "FPU is off", machInst);\n\n                    Mem_uw = unboxF32(boxF32(Fs2_bits));\n                '],{'inst_flags': 'FloatMemWriteOp'})
              
                  return new Fsw(machInst);
              break;
            
            case 0x3:   
              // Store::fsd(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                "FPU is off", machInst);\n\n                    Mem_ud = Fs2_bits;\n                '],{'inst_flags': 'FloatMemWriteOp'})
              
                  return new Fsd(machInst);
              break;
            
            case 0x0: 
              switch (MOP) {
                
                case 0x0: 
                  switch (SUMOP) {
                    
                    case 0x0: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VseOp::vse8_v((['\n                            Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                        '], {'inst_flags': 'SimdUnitStrideStoreOp'}))
                          
                              return new Vse8_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VsSegOp::vsseg2e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg2e8_v(machInst, vlen);
                          break;
                        
                        case 0x2:   
                          // VsSegOp::vsseg3e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg3e8_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VsSegOp::vsseg4e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg4e8_v(machInst, vlen);
                          break;
                        
                        case 0x4:   
                          // VsSegOp::vsseg5e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg5e8_v(machInst, vlen);
                          break;
                        
                        case 0x5:   
                          // VsSegOp::vsseg6e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg6e8_v(machInst, vlen);
                          break;
                        
                        case 0x6:   
                          // VsSegOp::vsseg7e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg7e8_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VsSegOp::vsseg8e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg8e8_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x8: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VsWholeOp::vs1r_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdWholeRegisterStoreOp'})
                          
                              return new Vs1r_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VsWholeOp::vs2r_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdWholeRegisterStoreOp'})
                          
                              return new Vs2r_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VsWholeOp::vs4r_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdWholeRegisterStoreOp'})
                          
                              return new Vs4r_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VsWholeOp::vs8r_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdWholeRegisterStoreOp'})
                          
                              return new Vs8r_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0xb:   
                      // VsmOp::vsm_v((['\n                        Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                    '], {'inst_flags': 'SimdUnitStrideMaskStoreOp'}))
                      
                          return new Vsm_v(machInst, vlen);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1:   
                  // VsIndexOp::vsuxei8_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_ub[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vsuxei8_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vsuxei8_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vsuxei8_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vsuxei8_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VsStrideOp::vsse8_v((['\n                    Mem_vc.as<uint8_t>()[0] = Vs3_ub[microIdx];\n                '], {'inst_flags': 'SimdStridedStoreOp'}))
                  
                      return new Vsse8_v(machInst, vlen);
                  break;
                
                case 0x3:   
                  // VsIndexOp::vsoxei8_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_ub[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vsoxei8_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vsoxei8_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vsoxei8_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vsoxei8_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x5: 
              switch (MOP) {
                
                case 0x0: 
                  switch (SUMOP) {
                    
                    case 0x0: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VseOp::vse16_v((['\n                            Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                        '], {'inst_flags': 'SimdUnitStrideStoreOp'}))
                          
                              return new Vse16_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VsSegOp::vsseg2e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg2e16_v(machInst, vlen);
                          break;
                        
                        case 0x2:   
                          // VsSegOp::vsseg3e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg3e16_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VsSegOp::vsseg4e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg4e16_v(machInst, vlen);
                          break;
                        
                        case 0x4:   
                          // VsSegOp::vsseg5e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg5e16_v(machInst, vlen);
                          break;
                        
                        case 0x5:   
                          // VsSegOp::vsseg6e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg6e16_v(machInst, vlen);
                          break;
                        
                        case 0x6:   
                          // VsSegOp::vsseg7e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg7e16_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VsSegOp::vsseg8e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg8e16_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1:   
                  // VsIndexOp::vsuxei16_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_uh[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vsuxei16_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vsuxei16_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vsuxei16_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vsuxei16_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VsStrideOp::vsse16_v((['\n                    Mem_vc.as<uint16_t>()[0] = Vs3_uh[microIdx];\n                '], {'inst_flags': 'SimdStridedStoreOp'}))
                  
                      return new Vsse16_v(machInst, vlen);
                  break;
                
                case 0x3:   
                  // VsIndexOp::vsoxei16_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_uh[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vsoxei16_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vsoxei16_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vsoxei16_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vsoxei16_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x6: 
              switch (MOP) {
                
                case 0x0: 
                  switch (SUMOP) {
                    
                    case 0x0: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VseOp::vse32_v((['\n                            Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                        '], {'inst_flags': 'SimdUnitStrideStoreOp'}))
                          
                              return new Vse32_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VsSegOp::vsseg2e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg2e32_v(machInst, vlen);
                          break;
                        
                        case 0x2:   
                          // VsSegOp::vsseg3e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg3e32_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VsSegOp::vsseg4e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg4e32_v(machInst, vlen);
                          break;
                        
                        case 0x4:   
                          // VsSegOp::vsseg5e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg5e32_v(machInst, vlen);
                          break;
                        
                        case 0x5:   
                          // VsSegOp::vsseg6e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg6e32_v(machInst, vlen);
                          break;
                        
                        case 0x6:   
                          // VsSegOp::vsseg7e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg7e32_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VsSegOp::vsseg8e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg8e32_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1:   
                  // VsIndexOp::vsuxei32_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_uw[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vsuxei32_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vsuxei32_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vsuxei32_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vsuxei32_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VsStrideOp::vsse32_v((['\n                    Mem_vc.as<uint32_t>()[0] = Vs3_uw[microIdx];\n                '], {'inst_flags': 'SimdStridedStoreOp'}))
                  
                      return new Vsse32_v(machInst, vlen);
                  break;
                
                case 0x3:   
                  // VsIndexOp::vsoxei32_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_uw[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vsoxei32_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vsoxei32_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vsoxei32_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vsoxei32_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x7: 
              switch (MOP) {
                
                case 0x0: 
                  switch (SUMOP) {
                    
                    case 0x0: 
                      switch (NF) {
                        
                        case 0x0:   
                          // VseOp::vse64_v((['\n                            Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                        '], {'inst_flags': 'SimdUnitStrideStoreOp'}))
                          
                              return new Vse64_v(machInst, vlen);
                          break;
                        
                        case 0x1:   
                          // VsSegOp::vsseg2e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg2e64_v(machInst, vlen);
                          break;
                        
                        case 0x2:   
                          // VsSegOp::vsseg3e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg3e64_v(machInst, vlen);
                          break;
                        
                        case 0x3:   
                          // VsSegOp::vsseg4e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg4e64_v(machInst, vlen);
                          break;
                        
                        case 0x4:   
                          // VsSegOp::vsseg5e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg5e64_v(machInst, vlen);
                          break;
                        
                        case 0x5:   
                          // VsSegOp::vsseg6e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg6e64_v(machInst, vlen);
                          break;
                        
                        case 0x6:   
                          // VsSegOp::vsseg7e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg7e64_v(machInst, vlen);
                          break;
                        
                        case 0x7:   
                          // VsSegOp::vsseg8e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})
                          
                              return new Vsseg8e64_v(machInst, vlen);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1:   
                  // VsIndexOp::vsuxei64_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_ud[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vsuxei64_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vsuxei64_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vsuxei64_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vsuxei64_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VsStrideOp::vsse64_v((['\n                    Mem_vc.as<uint64_t>()[0] = Vs3_ud[microIdx];\n                '], {'inst_flags': 'SimdStridedStoreOp'}))
                  
                      return new Vsse64_v(machInst, vlen);
                  break;
                
                case 0x3:   
                  // VsIndexOp::vsoxei64_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_ud[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          return new Vsoxei64_v<uint8_t>(machInst, vlen);
                      }
                      case 0b001: {
                          return new Vsoxei64_v<uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          return new Vsoxei64_v<uint32_t>(machInst, vlen);
                      }
                      case 0b011: {
                          return new Vsoxei64_v<uint64_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0xb: 
          switch (FUNCT3) {
            
            case 0x2: 
              switch (AMOFUNCT) {
                
                case 0x2:   
                  // LoadReserved::lr_w((['\n                    Rd_sd = Mem_sw;\n                '], {'mem_flags': 'LLSC'}))
                  
                      return new Lr_w(machInst);
                  break;
                
                case 0x3:   
                  // StoreCond::sc_w((['\n                    Mem_uw = Rs2_uw;\n                ', '\n                    Rd = rvSext(result);\n                '], {'inst_flags': 'IsStoreConditional', 'mem_flags': 'LLSC'}))
                  
                      return new Sc_w(machInst);
                  break;
                
                case 0x0:   
                  // AtomicMemOp::amoadd_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<int32_t> *amo_op =\n                          new AtomicGenericOp<int32_t>(Rs2_sw,\n                                  [](int32_t* b, int32_t a){ *b += a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoadd_w(machInst);
                  break;
                
                case 0x1:   
                  // AtomicMemOp::amoswap_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoswap_w(machInst);
                  break;
                
                case 0x4:   
                  // AtomicMemOp::amoxor_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b ^= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoxor_w(machInst);
                  break;
                
                case 0x8:   
                  // AtomicMemOp::amoor_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b |= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoor_w(machInst);
                  break;
                
                case 0xc:   
                  // AtomicMemOp::amoand_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b &= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amoand_w(machInst);
                  break;
                
                case 0x10:   
                  // AtomicMemOp::amomin_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<int32_t> *amo_op =\n                      new AtomicGenericOp<int32_t>(Rs2_sw,\n                        [](int32_t* b, int32_t a){ if (a < *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amomin_w(machInst);
                  break;
                
                case 0x14:   
                  // AtomicMemOp::amomax_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<int32_t> *amo_op =\n                      new AtomicGenericOp<int32_t>(Rs2_sw,\n                        [](int32_t* b, int32_t a){ if (a > *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amomax_w(machInst);
                  break;
                
                case 0x18:   
                  // AtomicMemOp::amominu_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                      new AtomicGenericOp<uint32_t>(Rs2_uw,\n                        [](uint32_t* b, uint32_t a){ if (a < *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amominu_w(machInst);
                  break;
                
                case 0x1c:   
                  // AtomicMemOp::amomaxu_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                      new AtomicGenericOp<uint32_t>(Rs2_uw,\n                        [](uint32_t* b, uint32_t a){ if (a > *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                  
                      return new Amomaxu_w(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x3: 
              switch (RVTYPE) {
                
                case 0x1: 
                  switch (AMOFUNCT) {
                    
                    case 0x2:   
                      // LoadReserved::lr_d((['\n                        Rd_sd = Mem_sd;\n                    '], {'mem_flags': 'LLSC'}))
                      
                          return new Lr_d(machInst);
                      break;
                    
                    case 0x3:   
                      // StoreCond::sc_d((['\n                        Mem = Rs2;\n                    ', '\n                        Rd = result;\n                    '], {'mem_flags': 'LLSC', 'inst_flags': 'IsStoreConditional'}))
                      
                          return new Sc_d(machInst);
                      break;
                    
                    case 0x0:   
                      // AtomicMemOp::amoadd_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<int64_t> *amo_op =\n                              new AtomicGenericOp<int64_t>(Rs2_sd,\n                                      [](int64_t* b, int64_t a){ *b += a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                      
                          return new Amoadd_d(machInst);
                      break;
                    
                    case 0x1:   
                      // AtomicMemOp::amoswap_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                              new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                      [](uint64_t* b, uint64_t a){ *b = a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                      
                          return new Amoswap_d(machInst);
                      break;
                    
                    case 0x4:   
                      // AtomicMemOp::amoxor_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                              new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                     [](uint64_t* b, uint64_t a){ *b ^= a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                      
                          return new Amoxor_d(machInst);
                      break;
                    
                    case 0x8:   
                      // AtomicMemOp::amoor_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                              new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                     [](uint64_t* b, uint64_t a){ *b |= a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                      
                          return new Amoor_d(machInst);
                      break;
                    
                    case 0xc:   
                      // AtomicMemOp::amoand_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                              new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                     [](uint64_t* b, uint64_t a){ *b &= a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                      
                          return new Amoand_d(machInst);
                      break;
                    
                    case 0x10:   
                      // AtomicMemOp::amomin_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<int64_t> *amo_op =\n                          new AtomicGenericOp<int64_t>(Rs2_sd,\n                            [](int64_t* b, int64_t a){ if (a < *b) *b = a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                      
                          return new Amomin_d(machInst);
                      break;
                    
                    case 0x14:   
                      // AtomicMemOp::amomax_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<int64_t> *amo_op =\n                          new AtomicGenericOp<int64_t>(Rs2_sd,\n                            [](int64_t* b, int64_t a){ if (a > *b) *b = a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                      
                          return new Amomax_d(machInst);
                      break;
                    
                    case 0x18:   
                      // AtomicMemOp::amominu_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                          new AtomicGenericOp<uint64_t>(Rs2_ud,\n                            [](uint64_t* b, uint64_t a){\n                              if (a < *b) *b = a;\n                            });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                      
                          return new Amominu_d(machInst);
                      break;
                    
                    case 0x1c:   
                      // AtomicMemOp::amomaxu_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                          new AtomicGenericOp<uint64_t>(Rs2_ud,\n                            [](uint64_t* b, uint64_t a){\n                              if (a > *b) *b = a;\n                            });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))
                      
                          return new Amomaxu_d(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0xc: 
          switch (FUNCT3) {
            
            case 0x0: 
              switch (KFUNCT5) {
                
                case 0x0: 
                  switch (BS) {
                    
                    case 0x0:   
                      // ROp::add(['\n                            Rd = rvSext(Rs1_sd + Rs2_sd);\n                        '],{})
                      
                          return new Add(machInst);
                      break;
                    
                    case 0x1:   
                      // ROp::sub(['\n                            Rd = rvSext(Rs1_sd - Rs2_sd);\n                        '],{})
                      
                          return new Sub(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1: 
                  switch (BS) {
                    
                    case 0x0:   
                      // ROp::mul(['\n                            Rd = rvSext(Rs1_sd * Rs2_sd);\n                        ', 'IntMultOp'],{})
                      
                          return new Mul(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x8: 
                  switch (BS) {
                    
                    case 0x1: 
                      switch (RVTYPE) {
                        
                        case 0x0:   
                          // ROp::sha512sum0r(['\n                                Rd_sw = _rvk_emu_sha512sum0r(Rs1_sw, Rs2_sw);\n                            '],{})
                          
                              return new Sha512sum0r(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x9: 
                  switch (BS) {
                    
                    case 0x1: 
                      switch (RVTYPE) {
                        
                        case 0x0:   
                          // ROp::sha512sum1r(['\n                                Rd_sw = _rvk_emu_sha512sum1r(Rs1_sw, Rs2_sw);\n                            '],{})
                          
                              return new Sha512sum1r(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0xa: 
                  switch (BS) {
                    
                    case 0x1: 
                      switch (RVTYPE) {
                        
                        case 0x0:   
                          // ROp::sha512sig0l(['\n                                Rd_sw = _rvk_emu_sha512sig0l(Rs1_sw, Rs2_sw);\n                            '],{})
                          
                              return new Sha512sig0l(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0xb: 
                  switch (BS) {
                    
                    case 0x1: 
                      switch (RVTYPE) {
                        
                        case 0x0:   
                          // ROp::sha512sig1l(['\n                                Rd_sw = _rvk_emu_sha512sig1l(Rs1_sw, Rs2_sw);\n                            '],{})
                          
                              return new Sha512sig1l(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0xe: 
                  switch (BS) {
                    
                    case 0x1: 
                      switch (RVTYPE) {
                        
                        case 0x0:   
                          // ROp::sha512sig0h(['\n                                Rd_sw = _rvk_emu_sha512sig0h(Rs1_sw, Rs2_sw);\n                            '],{})
                          
                              return new Sha512sig0h(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0xf: 
                  switch (BS) {
                    
                    case 0x1: 
                      switch (RVTYPE) {
                        
                        case 0x0:   
                          // ROp::sha512sig1h(['\n                                Rd_sw = _rvk_emu_sha512sig1h(Rs1_sw, Rs2_sw);\n                            '],{})
                          
                              return new Sha512sig1h(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x11: 
                  switch (RVTYPE) {
                    
                    case 0x0:   
                      // BSOp::aes32esi((['\n                            Rd_sw = _rvk_emu_aes32esi(Rs1_sw, Rs2_sw, bs);\n                        '], {}))
                      
                          return new Aes32esi(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x13: 
                  switch (RVTYPE) {
                    
                    case 0x0:   
                      // BSOp::aes32esmi((['\n                            Rd_sw = _rvk_emu_aes32esmi(Rs1_sw, Rs2_sw, bs);\n                        '], {}))
                      
                          return new Aes32esmi(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x15: 
                  switch (RVTYPE) {
                    
                    case 0x0:   
                      // BSOp::aes32dsi((['\n                            Rd_sw = _rvk_emu_aes32dsi(Rs1_sw, Rs2_sw, bs);\n                        '], {}))
                      
                          return new Aes32dsi(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x17: 
                  switch (RVTYPE) {
                    
                    case 0x0:   
                      // BSOp::aes32dsmi((['\n                            Rd_sw = _rvk_emu_aes32dsmi(Rs1_sw, Rs2_sw, bs);\n                        '], {}))
                      
                          return new Aes32dsmi(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x18:   
                  // BSOp::sm4ed((['\n                        Rd_sw = _rvk_emu_sm4ed(Rs1_sw, Rs2_sw, bs);\n                    '], {}))
                  
                      return new Sm4ed(machInst);
                  break;
                
                case 0x19: 
                  switch (BS) {
                    
                    case 0x0: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // ROp::aes64es(['\n                                Rd_sd = _rvk_emu_aes64es(Rs1_sd, Rs2_sd);\n                            '],{})
                          
                              return new Aes64es(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1a:   
                  // BSOp::sm4ks((['\n                        Rd_sw = _rvk_emu_sm4ks(Rs1_sw, Rs2_sw, bs);\n                    '], {}))
                  
                      return new Sm4ks(machInst);
                  break;
                
                case 0x1b: 
                  switch (BS) {
                    
                    case 0x0: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // ROp::aes64esm(['\n                                Rd_sd = _rvk_emu_aes64esm(Rs1_sd, Rs2_sd);\n                            '],{})
                          
                              return new Aes64esm(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1d: 
                  switch (BS) {
                    
                    case 0x0: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // ROp::aes64ds(['\n                                Rd_sd = _rvk_emu_aes64ds(Rs1_sd, Rs2_sd);\n                            '],{})
                          
                              return new Aes64ds(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1f: 
                  switch (BS) {
                    
                    case 0x0: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // ROp::aes64dsm(['\n                                Rd_sd = _rvk_emu_aes64dsm(Rs1_sd, Rs2_sd);\n                            '],{})
                          
                              return new Aes64dsm(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x1: 
                      switch (RVTYPE) {
                        
                        case 0x1:   
                          // ROp::aes64ks2(['\n                                Rd_sd = _rvk_emu_aes64ks2(Rs1_sd, Rs2_sd);\n                            '],{})
                          
                              return new Aes64ks2(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x1: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::sll(['\n                        Rd = rvSext(Rs1 << rvSelect(Rs2<4:0>, Rs2<5:0>));\n                    '],{})
                  
                      return new Sll(machInst);
                  break;
                
                case 0x1:   
                  // ROp::mulh(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = mulh<int32_t>(Rs1_sd, Rs2_sd);\n                        } else {\n                            Rd_sd = mulh<int64_t>(Rs1_sd, Rs2_sd);\n                        }\n                    ', 'IntMultOp'],{})
                  
                      return new Mulh(machInst);
                  break;
                
                case 0x5:   
                  // ROp::clmul(['\n                        uint64_t result = 0;\n                        for (int i = 0; i < rvSelect(32, 64); i++) {\n                            if ((Rs2 >> i) & 1) {\n                                result ^= Rs1 << i;\n                            }\n                        }\n                        Rd = rvSext(result);\n                    '],{})
                  
                      return new Clmul(machInst);
                  break;
                
                case 0x14:   
                  // ROp::bset(['\n                        Rs2 &= rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 | (UINT64_C(1) << Rs2));\n                    '],{})
                  
                      return new Bset(machInst);
                  break;
                
                case 0x24:   
                  // ROp::bclr(['\n                        Rs2 &= rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 & (~(UINT64_C(1) << Rs2)));\n                    '],{})
                  
                      return new Bclr(machInst);
                  break;
                
                case 0x30:   
                  // ROp::rol(['\n                        uint64_t xlen = rvSelect(32, 64);\n                        int shamt = Rs2 & (xlen - 1);\n                        Rd = rvSext((Rs1 << shamt)\n                            | (rvZext(Rs1) >> ((xlen - shamt) & (xlen - 1))));\n                    '],{})
                  
                      return new Rol(machInst);
                  break;
                
                case 0x34:   
                  // ROp::binv(['\n                        Rs2 &= rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 ^ (UINT64_C(1) << Rs2));\n                    '],{})
                  
                      return new Binv(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x2: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::slt(['\n                        Rd = (rvSext(Rs1_sd) < rvSext(Rs2_sd)) ? 1 : 0;\n                    '],{})
                  
                      return new Slt(machInst);
                  break;
                
                case 0x1:   
                  // ROp::mulhsu(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = mulhsu<int32_t>(Rs1_sd, Rs2);\n                        } else {\n                            Rd_sd = mulhsu<int64_t>(Rs1_sd, Rs2);\n                        }\n                    ', 'IntMultOp'],{})
                  
                      return new Mulhsu(machInst);
                  break;
                
                case 0x5:   
                  // ROp::clmulr(['\n                        uint64_t result = 0;\n                        uint64_t xlen = rvSelect(32, 64);\n                        uint64_t zextRs1 = rvZext(Rs1);\n                        for (int i = 0; i < xlen; i++) {\n                            if ((Rs2 >> i) & 1) {\n                                result ^= zextRs1 >> (xlen-i-1);\n                            }\n                        }\n                        Rd = rvSext(result);\n                    '],{})
                  
                      return new Clmulr(machInst);
                  break;
                
                case 0x10:   
                  // ROp::sh1add(['\n                        Rd = rvSext((Rs1 << 1) + Rs2);\n                    '],{})
                  
                      return new Sh1add(machInst);
                  break;
                
                case 0x14:   
                  // ROp::xperm4(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = _rvk_emu_xperm4_32(Rs1_sd, Rs2_sd);\n                        } else {\n                            Rd_sd = _rvk_emu_xperm4_64(Rs1_sd, Rs2_sd);\n                        }\n                    '],{})
                  
                      return new Xperm4(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x3: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::sltu(['\n                        Rd = (rvZext(Rs1) < rvZext(Rs2)) ? 1 : 0;\n                    '],{})
                  
                      return new Sltu(machInst);
                  break;
                
                case 0x1:   
                  // ROp::mulhu(['\n                        if (machInst.rv_type == RV32) {\n                            Rd = (int32_t)mulhu<uint32_t>(Rs1, Rs2);\n                        } else {\n                            Rd = mulhu<uint64_t>(Rs1, Rs2);\n                        }\n                    ', 'IntMultOp'],{})
                  
                      return new Mulhu(machInst);
                  break;
                
                case 0x5:   
                  // ROp::clmulh(['\n                        uint64_t result = 0;\n                        uint64_t xlen = rvSelect(32, 64);\n                        uint64_t zextRs1 = rvZext(Rs1);\n                        for (int i = 1; i < xlen; i++) {\n                            if ((Rs2 >> i) & 1) {\n                                result ^= zextRs1 >> (xlen-i);\n                            }\n                        }\n                        // The MSB can never be 1, no need to sign extend.\n                        Rd = result;\n                    '],{})
                  
                      return new Clmulh(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x4: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::xor(['\n                        Rd = rvSext(Rs1 ^ Rs2);\n                    '],{})
                  
                      return new Xor(machInst);
                  break;
                
                case 0x1:   
                  // ROp::div(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = div<int32_t>(Rs1, Rs2);\n                        } else {\n                            Rd_sd = div<int64_t>(Rs1, Rs2);\n                        }\n                    ', 'IntDivOp'],{})
                  
                      return new Div(machInst);
                  break;
                
                case 0x4:   
                  // ROp::pack(['\n                        int xlen = rvSelect(32, 64);\n                        Rd = rvSext(\n                            (bits(Rs2, xlen/2-1, 0) << (xlen / 2)) | \\\n                            bits(Rs1, xlen/2-1, 0)\n                        );\n                    '],{})
                  
                      return new Pack(machInst);
                  break;
                
                case 0x5:   
                  // ROp::min(['\n                        Rd_sd = std::min(rvSext(Rs1_sd), rvSext(Rs2_sd));\n                    '],{})
                  
                      return new Min(machInst);
                  break;
                
                case 0x10:   
                  // ROp::sh2add(['\n                        Rd = rvSext((Rs1 << 2) + Rs2);\n                    '],{})
                  
                      return new Sh2add(machInst);
                  break;
                
                case 0x14:   
                  // ROp::xperm8(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = _rvk_emu_xperm8_32(Rs1_sd, Rs2_sd);\n                        } else {\n                            Rd_sd = _rvk_emu_xperm8_64(Rs1_sd, Rs2_sd);\n                        }\n                    '],{})
                  
                      return new Xperm8(machInst);
                  break;
                
                case 0x20:   
                  // ROp::xnor(['\n                        Rd = rvSext(~(Rs1 ^ Rs2));\n                    '],{})
                  
                      return new Xnor(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x5: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::srl(['\n                        Rd = rvSext(rvZext(Rs1) >>\n                                    rvSelect(Rs2<4:0>, Rs2<5:0>));\n                    '],{})
                  
                      return new Srl(machInst);
                  break;
                
                case 0x1:   
                  // ROp::divu(['\n                        if (machInst.rv_type == RV32) {\n                            Rd = (int32_t)divu<uint32_t>(Rs1, Rs2);\n                        } else {\n                            Rd = divu<uint64_t>(Rs1, Rs2);\n                        }\n                    ', 'IntDivOp'],{})
                  
                      return new Divu(machInst);
                  break;
                
                case 0x7:   
                  // ROp::czero_eqz(['\n                        Rd = rvSext(Rs2) == 0 ? 0 : rvSext(Rs1);\n                    '],{})
                  
                      return new Czero_eqz(machInst);
                  break;
                
                case 0x20:   
                  // ROp::sra(['\n                        Rd = rvSext(Rs1_sd) >> rvSelect(Rs2<4:0>, Rs2<5:0>);\n                    '],{})
                  
                      return new Sra(machInst);
                  break;
                
                case 0x5:   
                  // ROp::minu(['\n                        Rd = rvSext(std::min(rvZext(Rs1), rvZext(Rs2)));\n                    '],{})
                  
                      return new Minu(machInst);
                  break;
                
                case 0x24:   
                  // ROp::bext(["\n                        Rs2 &= (rvSelect(32, 64) - 1);\n                        // It doesn't need to sign ext because MSB is always 0\n                        Rd = (Rs1 >> Rs2) & 0x1;\n                    "],{})
                  
                      return new Bext(machInst);
                  break;
                
                case 0x30:   
                  // ROp::ror(['\n                        uint64_t xlen = rvSelect(32, 64);\n                        int shamt = Rs2 & (xlen - 1);\n                        Rd = rvSext((rvZext(Rs1) >> shamt)\n                            | (Rs1 << ((xlen - shamt) & (xlen - 1))));\n                    '],{})
                  
                      return new Ror(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x6: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::or(['\n                        Rd = rvSext(Rs1 | Rs2);\n                    '],{})
                  
                      return new Or(machInst);
                  break;
                
                case 0x1:   
                  // ROp::rem(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = rem<int32_t>(Rs1, Rs2);\n                        } else {\n                            Rd_sd = rem<int64_t>(Rs1, Rs2);\n                        }\n                    ', 'IntDivOp'],{})
                  
                      return new Rem(machInst);
                  break;
                
                case 0x5:   
                  // ROp::max(['\n                        Rd_sd = std::max(rvSext(Rs1_sd), rvSext(Rs2_sd));\n                    '],{})
                  
                      return new Max(machInst);
                  break;
                
                case 0x10:   
                  // ROp::sh3add(['\n                        Rd = rvSext((Rs1 << 3) + Rs2);\n                    '],{})
                  
                      return new Sh3add(machInst);
                  break;
                
                case 0x20:   
                  // ROp::orn(['\n                        Rd = rvSext(Rs1 | (~Rs2));\n                    '],{})
                  
                      return new Orn(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x7: 
              switch (FUNCT7) {
                
                case 0x0:   
                  // ROp::and(['\n                        Rd = rvSext(Rs1 & Rs2);\n                    '],{})
                  
                      return new And(machInst);
                  break;
                
                case 0x1:   
                  // ROp::remu(['\n                        if (machInst.rv_type == RV32) {\n                            Rd = (int32_t)remu<uint32_t>(Rs1, Rs2);\n                        } else {\n                            Rd = remu<uint64_t>(Rs1, Rs2);\n                        }\n                    ', 'IntDivOp'],{})
                  
                      return new Remu(machInst);
                  break;
                
                case 0x4:   
                  // ROp::packh(["\n                        // It doesn't need to sign ext as MSB is always 0\n                        Rd = (Rs2_ub << 8) | Rs1_ub;\n                    "],{})
                  
                      return new Packh(machInst);
                  break;
                
                case 0x5:   
                  // ROp::maxu(['\n                        Rd = rvSext(std::max(rvZext(Rs1), rvZext(Rs2)));\n                    '],{})
                  
                      return new Maxu(machInst);
                  break;
                
                case 0x7:   
                  // ROp::czero_nez(['\n                        Rd = rvSext(Rs2) != 0 ? 0 : rvSext(Rs1);\n                    '],{})
                  
                      return new Czero_nez(machInst);
                  break;
                
                case 0x20:   
                  // ROp::andn(['\n                        Rd = rvSext(Rs1 & (~Rs2));\n                    '],{})
                  
                      return new Andn(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0xd:   
          // UOp::lui((['\n            Rd = (sext<20>(imm) << 12);\n        '], {}))
          
              return new Lui(machInst);
          break;
        
        case 0xe: 
          switch (RVTYPE) {
            
            case 0x1: 
              switch (FUNCT3) {
                
                case 0x0: 
                  switch (FUNCT7) {
                    
                    case 0x0:   
                      // ROp::addw(['\n                            Rd_sd = Rs1_sw + Rs2_sw;\n                        '],{})
                      
                          return new Addw(machInst);
                      break;
                    
                    case 0x1:   
                      // ROp::mulw(['\n                            Rd_sd = (int32_t)(Rs1_sw*Rs2_sw);\n                        ', 'IntMultOp'],{})
                      
                          return new Mulw(machInst);
                      break;
                    
                    case 0x4:   
                      // ROp::add_uw(['\n                            Rd = Rs1_uw + Rs2;\n                        '],{})
                      
                          return new Add_uw(machInst);
                      break;
                    
                    case 0x20:   
                      // ROp::subw(['\n                            Rd_sd = Rs1_sw - Rs2_sw;\n                        '],{})
                      
                          return new Subw(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1: 
                  switch (FUNCT7) {
                    
                    case 0x0:   
                      // ROp::sllw(['\n                            Rd_sd = Rs1_sw << Rs2<4:0>;\n                        '],{})
                      
                          return new Sllw(machInst);
                      break;
                    
                    case 0x30:   
                      // ROp::rolw(['\n                            int shamt = Rs2 & (32 - 1);\n                            Rd = (int32_t) ((Rs1_uw << shamt) | (Rs1_uw >> ((32 - shamt) & (32 - 1))));\n                        '],{})
                      
                          return new Rolw(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x2: 
                  switch (FUNCT7) {
                    
                    case 0x10:   
                      // ROp::sh1add_uw(['\n                            Rd = (((uint64_t)Rs1_uw) << 1) + Rs2;\n                        '],{})
                      
                          return new Sh1add_uw(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x4: 
                  switch (FUNCT7) {
                    
                    case 0x1:   
                      // ROp::divw(['\n                            Rd_sd = div<int32_t>(Rs1, Rs2);\n                        ', 'IntDivOp'],{})
                      
                          return new Divw(machInst);
                      break;
                    
                    case 0x4:   
                      // ROp::packw(['\n                            Rd_sd = sext<32>((Rs2_uh << 16) | Rs1_uh);\n                        '],{})
                      
                          return new Packw(machInst);
                      break;
                    
                    case 0x10:   
                      // ROp::sh2add_uw(['\n                            Rd = (((uint64_t)Rs1_uw) << 2) + Rs2;\n                        '],{})
                      
                          return new Sh2add_uw(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x5: 
                  switch (FUNCT7) {
                    
                    case 0x0:   
                      // ROp::srlw(['\n                            Rd_sd = (int32_t)(Rs1_uw >> Rs2<4:0>);\n                        '],{})
                      
                          return new Srlw(machInst);
                      break;
                    
                    case 0x1:   
                      // ROp::divuw(['\n                            Rd = sext<32>(divu<uint32_t>(Rs1, Rs2));\n                        ', 'IntDivOp'],{})
                      
                          return new Divuw(machInst);
                      break;
                    
                    case 0x20:   
                      // ROp::sraw(['\n                            Rd_sd = Rs1_sw >> Rs2<4:0>;\n                        '],{})
                      
                          return new Sraw(machInst);
                      break;
                    
                    case 0x30:   
                      // ROp::rorw(['\n                            int shamt = Rs2 & (32 - 1);\n                            Rd = (int32_t) ((Rs1_uw >> shamt) | (Rs1_uw << ((32 - shamt) & (32 - 1))));\n                        '],{})
                      
                          return new Rorw(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x6: 
                  switch (FUNCT7) {
                    
                    case 0x1:   
                      // ROp::remw(['\n                            Rd_sd = rem<int32_t>(Rs1, Rs2);\n                        ', 'IntDivOp'],{})
                      
                          return new Remw(machInst);
                      break;
                    
                    case 0x10:   
                      // ROp::sh3add_uw(['\n                            Rd = (((uint64_t)Rs1_uw) << 3) + Rs2;\n                        '],{})
                      
                          return new Sh3add_uw(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x7:   
                  // ROp::remuw(['\n                        Rd = sext<32>(remu<uint32_t>(Rs1, Rs2));\n                    ', 'IntDivOp'],{})
                  
                      return new Remuw(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x10: 
          switch (FUNCT2) {
            
            case 0x0:   
              // FPROp::fmadd_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(freg(Fs1_bits)),\n                                         f32(freg(Fs2_bits)),\n                                         f32(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmadd_s(machInst);
              break;
            
            case 0x1:   
              // FPROp::fmadd_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(freg(Fs1_bits)),\n                                         f64(freg(Fs2_bits)),\n                                         f64(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmadd_d(machInst);
              break;
            
            case 0x2:   
              // FPROp::fmadd_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(freg(Fs1_bits)),\n                                         f16(freg(Fs2_bits)),\n                                         f16(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmadd_h(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x11: 
          switch (FUNCT2) {
            
            case 0x0:   
              // FPROp::fmsub_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(freg(Fs1_bits)),\n                                    f32(freg(Fs2_bits)),\n                                    f32(f32(freg(Fs3_bits)).v ^\n                                        mask(31, 31))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmsub_s(machInst);
              break;
            
            case 0x1:   
              // FPROp::fmsub_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(freg(Fs1_bits)),\n                                    f64(freg(Fs2_bits)),\n                                    f64(f64(freg(Fs3_bits)).v ^\n                                        mask(63, 63))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmsub_d(machInst);
              break;
            
            case 0x2:   
              // FPROp::fmsub_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(freg(Fs1_bits)),\n                                    f16(freg(Fs2_bits)),\n                                    f16(f16(freg(Fs3_bits)).v ^\n                                        mask(15, 15))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fmsub_h(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x12: 
          switch (FUNCT2) {
            
            case 0x0:   
              // FPROp::fnmsub_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(f32(freg(Fs1_bits)).v ^\n                                             mask(31, 31)),\n                                         f32(freg(Fs2_bits)),\n                                         f32(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmsub_s(machInst);
              break;
            
            case 0x1:   
              // FPROp::fnmsub_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(f64(freg(Fs1_bits)).v ^\n                                             mask(63, 63)),\n                                         f64(freg(Fs2_bits)),\n                                         f64(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmsub_d(machInst);
              break;
            
            case 0x2:   
              // FPROp::fnmsub_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(f16(freg(Fs1_bits)).v ^\n                                             mask(15, 15)),\n                                         f16(freg(Fs2_bits)),\n                                         f16(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmsub_h(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x13: 
          switch (FUNCT2) {
            
            case 0x0:   
              // FPROp::fnmadd_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(f32(freg(Fs1_bits)).v ^\n                                             mask(31, 31)),\n                                    f32(freg(Fs2_bits)),\n                                    f32(f32(freg(Fs3_bits)).v ^\n                                        mask(31, 31))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmadd_s(machInst);
              break;
            
            case 0x1:   
              // FPROp::fnmadd_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(f64(freg(Fs1_bits)).v ^\n                                             mask(63, 63)),\n                                    f64(freg(Fs2_bits)),\n                                    f64(f64(freg(Fs3_bits)).v ^\n                                        mask(63, 63))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmadd_d(machInst);
              break;
            
            case 0x2:   
              // FPROp::fnmadd_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(f16(freg(Fs1_bits)).v ^\n                                             mask(15, 15)),\n                                    f16(freg(Fs2_bits)),\n                                    f16(f16(freg(Fs3_bits)).v ^\n                                        mask(15, 15))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})
              
                  return new Fnmadd_h(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x14: 
          switch (FUNCT7) {
            
            case 0x0:   
              // FPROp::fadd_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_add(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fadd_s(machInst);
              break;
            
            case 0x1:   
              // FPROp::fadd_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_add(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fadd_d(machInst);
              break;
            
            case 0x2:   
              // FPROp::fadd_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_add(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fadd_h(machInst);
              break;
            
            case 0x4:   
              // FPROp::fsub_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_sub(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fsub_s(machInst);
              break;
            
            case 0x5:   
              // FPROp::fsub_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_sub(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fsub_d(machInst);
              break;
            
            case 0x6:   
              // FPROp::fsub_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_sub(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})
              
                  return new Fsub_h(machInst);
              break;
            
            case 0x8:   
              // FPROp::fmul_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mul(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultOp'],{})
              
                  return new Fmul_s(machInst);
              break;
            
            case 0x9:   
              // FPROp::fmul_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mul(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultOp'],{})
              
                  return new Fmul_d(machInst);
              break;
            
            case 0xa:   
              // FPROp::fmul_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mul(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultOp'],{})
              
                  return new Fmul_h(machInst);
              break;
            
            case 0xc:   
              // FPROp::fdiv_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_div(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatDivOp'],{})
              
                  return new Fdiv_s(machInst);
              break;
            
            case 0xd:   
              // FPROp::fdiv_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_div(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatDivOp'],{})
              
                  return new Fdiv_d(machInst);
              break;
            
            case 0xe:   
              // FPROp::fdiv_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_div(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatDivOp'],{})
              
                  return new Fdiv_h(machInst);
              break;
            
            case 0x10: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fsgnj_s(['\n                        auto sign = bits(unboxF32(Fs2_bits), 31);\n                        Fd_bits = boxF32(insertBits(unboxF32(Fs1_bits), 31,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnj_s(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fsgnjn_s(['\n                        auto sign = ~bits(unboxF32(Fs2_bits), 31);\n                        Fd_bits = boxF32(insertBits(unboxF32(Fs1_bits), 31,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjn_s(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fsgnjx_s(['\n                        auto sign = bits(\n                            unboxF32(Fs1_bits) ^ unboxF32(Fs2_bits), 31);\n                        Fd_bits = boxF32(insertBits(unboxF32(Fs1_bits), 31,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjx_s(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x11: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fsgnj_d(['\n                        Fd_bits = insertBits(Fs2_bits, 62, 0, Fs1_bits);\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fsgnj_d(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fsgnjn_d(['\n                        Fd_bits = insertBits(~Fs2_bits, 62, 0, Fs1_bits);\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjn_d(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fsgnjx_d(['\n                        Fd_bits = insertBits(\n                                Fs1_bits ^ Fs2_bits, 62, 0, Fs1_bits);\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjx_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x12: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fsgnj_h(['\n                        auto sign = bits(unboxF16(Fs2_bits), 15);\n                        Fd_bits = boxF16(insertBits(unboxF16(Fs1_bits), 15,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnj_h(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fsgnjn_h(['\n                        auto sign = ~bits(unboxF16(Fs2_bits), 15);\n                        Fd_bits = boxF16(insertBits(unboxF16(Fs1_bits), 15,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjn_h(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fsgnjx_h(['\n                        auto sign = bits(\n                            unboxF16(Fs1_bits) ^ unboxF16(Fs2_bits), 15);\n                        Fd_bits = boxF16(insertBits(unboxF16(Fs1_bits), 15,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})
                  
                      return new Fsgnjx_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x14: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fmin_s(['\n                        float32_t fs1 = f32(freg(Fs1_bits));\n                        float32_t fs2 = f32(freg(Fs2_bits));\n                        float32_t fd;\n                        bool less = f32_lt_quiet(fs1, fs2) ||\n                            (f32_eq(fs1, fs2) && bits(fs1.v, 31));\n\n                        fd = less || isNaNF32UI(fs2.v) ? fs1 : fs2;\n                        if (isNaNF32UI(fs1.v) && isNaNF32UI(fs2.v))\n                            fd = f32(defaultNaNF32UI);\n                        Fd_bits = freg(fd).v;\n                        ', 'FloatCmpOp'],{})
                  
                      return new Fmin_s(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fmax_s(['\n                        float32_t fs1 = f32(freg(Fs1_bits));\n                        float32_t fs2 = f32(freg(Fs2_bits));\n                        float32_t fd;\n                        bool greater = f32_lt_quiet(fs2, fs1) ||\n                            (f32_eq(fs2, fs1) && bits(fs2.v, 31));\n\n                        fd = greater || isNaNF32UI(fs2.v) ? fs1: fs2;\n                        if (isNaNF32UI(fs1.v) && isNaNF32UI(fs2.v))\n                            fd = f32(defaultNaNF32UI);\n                        Fd_bits = freg(fd).v;\n                        ', 'FloatCmpOp'],{})
                  
                      return new Fmax_s(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x15: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fmin_d(['\n                        float64_t fs1 = f64(freg(Fs1_bits));\n                        float64_t fs2 = f64(freg(Fs2_bits));\n                        float64_t fd;\n                        bool less = f64_lt_quiet(fs1, fs2) ||\n                            (f64_eq(fs1, fs2) && bits(fs1.v, 63));\n\n                        fd = less || isNaNF64UI(fs2.v) ? fs1 : fs2;\n                        if (isNaNF64UI(fs1.v) && isNaNF64UI(fs2.v))\n                            fd = f64(defaultNaNF64UI);\n                        Fd_bits = freg(fd).v;\n                    ', 'FloatCmpOp'],{})
                  
                      return new Fmin_d(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fmax_d(['\n                        float64_t fs1 = f64(freg(Fs1_bits));\n                        float64_t fs2 = f64(freg(Fs2_bits));\n                        float64_t fd;\n                        bool greater = f64_lt_quiet(fs2, fs1) ||\n                            (f64_eq(fs2, fs1) && bits(fs2.v, 63));\n\n                        fd = greater || isNaNF64UI(fs2.v) ? fs1 : fs2;\n                        if (isNaNF64UI(fs1.v) && isNaNF64UI(fs2.v))\n                            fd = f64(defaultNaNF64UI);\n                        Fd_bits = freg(fd).v;\n                    ', 'FloatCmpOp'],{})
                  
                      return new Fmax_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x16: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fmin_h(['\n                        float16_t fs1 = f16(freg(Fs1_bits));\n                        float16_t fs2 = f16(freg(Fs2_bits));\n                        float16_t fd;\n                        bool less = f16_lt_quiet(fs1, fs2) ||\n                            (f16_eq(fs1, fs2) && bits(fs1.v, 15));\n\n                        fd = less || isNaNF16UI(fs2.v) ? fs1 : fs2;\n                        if (isNaNF16UI(fs1.v) && isNaNF16UI(fs2.v))\n                            fd = f16(defaultNaNF16UI);\n                        Fd_bits = freg(fd).v;\n                        ', 'FloatCmpOp'],{})
                  
                      return new Fmin_h(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fmax_h(['\n                        float16_t fs1 = f16(freg(Fs1_bits));\n                        float16_t fs2 = f16(freg(Fs2_bits));\n                        float16_t fd;\n                        bool greater = f16_lt_quiet(fs2, fs1) ||\n                            (f16_eq(fs2, fs1) && bits(fs2.v, 15));\n\n                        fd = greater || isNaNF16UI(fs2.v) ? fs1 : fs2;\n                        if (isNaNF16UI(fs1.v) && isNaNF16UI(fs2.v))\n                            fd = f16(defaultNaNF16UI);\n                        Fd_bits = freg(fd).v;\n                        ', 'FloatCmpOp'],{})
                  
                      return new Fmax_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x20: 
              switch (CONV_SGN) {
                
                case 0x1:   
                  // FPROp::fcvt_s_d(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f64_to_f32(f64(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_s_d(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fcvt_s_h(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f16_to_f32(f16(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_s_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x21: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_d_s(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f32_to_f64(f32(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_d_s(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::fcvt_d_h(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f16_to_f64(f16(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_d_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x22: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_h_s(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f32_to_f16(f32(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_h_s(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_h_d(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f64_to_f16(f64(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_h_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x2c:   
              // FPROp::fsqrt_s(['\n                    if (RS2 != 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x1", machInst);\n                    }\n                    freg_t fd;\n                    RM_REQUIRED;\n                    fd = freg(f32_sqrt(f32(freg(Fs1_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatSqrtOp'],{})
              
                  return new Fsqrt_s(machInst);
              break;
            
            case 0x2d:   
              // FPROp::fsqrt_d(['\n                    if (RS2 != 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x1", machInst);\n                    }\n                    freg_t fd;\n                    RM_REQUIRED;\n                    fd = freg(f64_sqrt(f64(freg(Fs1_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatSqrtOp'],{})
              
                  return new Fsqrt_d(machInst);
              break;
            
            case 0x2e:   
              // FPROp::fsqrt_h(['\n                    if (RS2 != 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x1", machInst);\n                    }\n                    freg_t fd;\n                    RM_REQUIRED;\n                    fd = freg(f16_sqrt(f16(freg(Fs1_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatSqrtOp'],{})
              
                  return new Fsqrt_h(machInst);
              break;
            
            case 0x50: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fle_s(['\n                        Rd = f32_le(f32(freg(Fs1_bits)), f32(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Fle_s(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::flt_s(['\n                        Rd = f32_lt(f32(freg(Fs1_bits)), f32(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Flt_s(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::feq_s(['\n                        Rd = f32_eq(f32(freg(Fs1_bits)), f32(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Feq_s(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x51: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fle_d(['\n                        Rd = f64_le(f64(freg(Fs1_bits)), f64(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Fle_d(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::flt_d(['\n                        Rd = f64_lt(f64(freg(Fs1_bits)), f64(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Flt_d(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::feq_d(['\n                        Rd = f64_eq(f64(freg(Fs1_bits)), f64(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Feq_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x52: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fle_h(['\n                        Rd = f16_le(f16(freg(Fs1_bits)), f16(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Fle_h(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::flt_h(['\n                        Rd = f16_lt(f16(freg(Fs1_bits)), f16(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Flt_h(machInst);
                  break;
                
                case 0x2:   
                  // FPROp::feq_h(['\n                        Rd = f16_eq(f16(freg(Fs1_bits)), f16(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})
                  
                      return new Feq_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x60: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_w_s(['\n                        RM_REQUIRED;\n                        Rd_sd = sext<32>(f32_to_i32(f32(freg(Fs1_bits)), rm,\n                                                    true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_w_s(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_wu_s(['\n                        RM_REQUIRED;\n                        Rd = sext<32>(f32_to_ui32(f32(freg(Fs1_bits)), rm,\n                                                  true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_wu_s(machInst);
                  break;
                
                case 0x2: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_l_s(['\n                            RM_REQUIRED;\n                            Rd_sd = f32_to_i64(f32(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_l_s(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x3: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_lu_s(['\n                            RM_REQUIRED;\n                            Rd = f32_to_ui64(f32(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_lu_s(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x61: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_w_d(['\n                        RM_REQUIRED;\n                        Rd_sd = sext<32>(f64_to_i32(f64(freg(Fs1_bits)), rm,\n                                                    true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_w_d(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_wu_d(['\n                        RM_REQUIRED;\n                        Rd = sext<32>(f64_to_ui32(f64(freg(Fs1_bits)), rm,\n                                                  true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_wu_d(machInst);
                  break;
                
                case 0x2: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_l_d(['\n                            RM_REQUIRED;\n                            Rd_sd = f64_to_i64(f64(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_l_d(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x3: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_lu_d(['\n                            RM_REQUIRED;\n                            Rd = f64_to_ui64(f64(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_lu_d(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x62: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_w_h(['\n                        RM_REQUIRED;\n                        Rd_sd = sext<32>(f16_to_i32(f16(freg(Fs1_bits)), rm,\n                                                    true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_w_h(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_wu_h(['\n                        RM_REQUIRED;\n                        Rd = sext<32>(f16_to_ui32(f16(freg(Fs1_bits)), rm,\n                                                  true));\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_wu_h(machInst);
                  break;
                
                case 0x2: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_l_h(['\n                            RM_REQUIRED;\n                            Rd_sd = f16_to_i64(f16(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_l_h(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x3: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_lu_h(['\n                            RM_REQUIRED;\n                            Rd = f16_to_ui64(f16(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_lu_h(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x68: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_s_w(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(i32_to_f32(Rs1_sw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_s_w(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_s_wu(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(ui32_to_f32(Rs1_uw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_s_wu(machInst);
                  break;
                
                case 0x2: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_s_l(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(i64_to_f32(Rs1_ud));\n                            Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_s_l(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x3: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_s_lu(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(ui64_to_f32(Rs1));\n                            Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_s_lu(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x69: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_d_w(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(i32_to_f64(Rs1_sw));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_d_w(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_d_wu(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(ui32_to_f64(Rs1_uw));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_d_wu(machInst);
                  break;
                
                case 0x2: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_d_l(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(i64_to_f64(Rs1_sd));\n                            Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_d_l(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x3: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_d_lu(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(ui64_to_f64(Rs1));\n                            Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_d_lu(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x6a: 
              switch (CONV_SGN) {
                
                case 0x0:   
                  // FPROp::fcvt_h_w(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(i32_to_f16((int32_t)Rs1_sw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_h_w(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fcvt_h_wu(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(ui32_to_f16((uint32_t)Rs1_uw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})
                  
                      return new Fcvt_h_wu(machInst);
                  break;
                
                case 0x2: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_h_l(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(i64_to_f16(Rs1_ud));\n                            Fd_bits = fd.v;\n                            ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_h_l(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x3: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fcvt_h_lu(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(ui64_to_f16(Rs1));\n                            Fd_bits = fd.v;\n                            ', 'FloatCvtOp'],{})
                      
                          return new Fcvt_h_lu(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x70: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fmv_x_w(['\n                        uint64_t result = (uint32_t)Fs1_bits;\n                        if ((result&0x80000000) != 0) {\n                            result |= (0xFFFFFFFFULL << 32);\n                        }\n                        Rd = result;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fmv_x_w(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fclass_s(['\n                        Rd = rvSext(f32_classify(f32(freg(Fs1_bits))));\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fclass_s(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x71: 
              switch (ROUND_MODE) {
                
                case 0x0: 
                  switch (RVTYPE) {
                    
                    case 0x1:   
                      // FPROp::fmv_x_d(['\n                            Rd = freg(Fs1_bits).v;\n                        ', 'FloatCvtOp'],{})
                      
                          return new Fmv_x_d(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x1:   
                  // FPROp::fclass_d(['\n                        Rd = f64_classify(f64(freg(Fs1_bits)));\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fclass_d(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x72: 
              switch (ROUND_MODE) {
                
                case 0x0:   
                  // FPROp::fmv_x_h(['\n                        uint64_t result = (uint16_t)Fs1_bits;\n                        if ((result&0x8000) != 0) {\n                            result |= (0xFFFFFFFFFFFFULL << 16);\n                        }\n                        Rd = result;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fmv_x_h(machInst);
                  break;
                
                case 0x1:   
                  // FPROp::fclass_h(['\n                        Rd = f16_classify(f16(freg(Fs1_bits)));\n                    ', 'FloatMiscOp'],{})
                  
                      return new Fclass_h(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x78:   
              // FPROp::fmv_w_x(['\n                    freg_t fd;\n                    fd = freg(f32(Rs1_uw));\n                    Fd_bits = fd.v;\n                ', 'FloatCvtOp'],{})
              
                  return new Fmv_w_x(machInst);
              break;
            
            case 0x79: 
              switch (RVTYPE) {
                
                case 0x1:   
                  // FPROp::fmv_d_x(['\n                        freg_t fd;\n                        fd = freg(f64(Rs1));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})
                  
                      return new Fmv_d_x(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x7a:   
              // FPROp::fmv_h_x(['\n                    freg_t fd;\n                    fd = freg(f16(Rs1_uh));\n                    Fd_bits = fd.v;\n                ', 'FloatCvtOp'],{})
              
                  return new Fmv_h_x(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x15: 
          switch (FUNCT3) {
            
            case 0x0: 
              switch (VFUNCT6) {
                
                case 0x0:   
                  // VectorIntFormat::vadd_vv(['\n                        Vd_vu[i] = Vs2_vu[i] + Vs1_vu[i];\n                    ', 'OPIVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vadd_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vadd_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vadd_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vadd_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VectorIntFormat::vsub_vv(['\n                        Vd_vu[i] = Vs2_vu[i] - Vs1_vu[i];\n                    ', 'OPIVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsub_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsub_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsub_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsub_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x4:   
                  // VectorIntFormat::vminu_vv(['\n                        Vd_vu[i] = Vs2_vu[i] < Vs1_vu[i] ?\n                                Vs2_vu[i] : Vs1_vu[i];\n                    ', 'OPIVV', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vminu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vminu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vminu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vminu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x5:   
                  // VectorIntFormat::vmin_vv(['\n                        Vd_vi[i] = Vs2_vi[i] < Vs1_vi[i] ?\n                                Vs2_vi[i] : Vs1_vi[i];\n                    ', 'OPIVV', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmin_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmin_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmin_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmin_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x6:   
                  // VectorIntFormat::vmaxu_vv(['\n                        Vd_vu[i] = Vs2_vu[i] > Vs1_vu[i] ?\n                                Vs2_vu[i] : Vs1_vu[i];\n                    ', 'OPIVV', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmaxu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmaxu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmaxu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmaxu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x7:   
                  // VectorIntFormat::vmax_vv(['\n                        Vd_vi[i] = Vs2_vi[i] > Vs1_vi[i] ?\n                                Vs2_vi[i] : Vs1_vi[i];\n                    ', 'OPIVV', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmax_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmax_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmax_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmax_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x9:   
                  // VectorIntFormat::vand_vv(['\n                        Vd_vu[i] = Vs2_vu[i] & Vs1_vu[i];\n                    ', 'OPIVV', 'SimdAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vand_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vand_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vand_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vand_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xa:   
                  // VectorIntFormat::vor_vv(['\n                        Vd_vu[i] = Vs2_vu[i] | Vs1_vu[i];\n                    ', 'OPIVV', 'SimdAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vor_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vor_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vor_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vor_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xb:   
                  // VectorIntFormat::vxor_vv(['\n                        Vd_vu[i] = Vs2_vu[i] ^ Vs1_vu[i];\n                    ', 'OPIVV', 'SimdAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vxor_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vxor_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vxor_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vxor_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xc:   
                  // VectorGatherFormat::vrgather_vv((['\n                    for (uint32_t i = 0; i < microVl; i++) {\n                        uint32_t ei = i + vs1_idx * vs1_elems + vs1_bias;\n                        if (this->vm || elem_mask(v0, ei)) {\n                            const uint64_t idx = Vs1_vu[i]\n                                - vs2_elems * vs2_idx;\n                            if (Vs1_vu[i] >= vlmax)\n                                Vd_vu[i] = 0;\n                            else if (idx < vs2_elems)\n                                Vd_vu[i] = Vs2_vu[idx];\n                        }\n                    }\n                ', 'OPIVV', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          using elem_type [[maybe_unused]] = uint8_t;
                          return new Vrgather_vv<uint8_t, elem_type>(machInst, vlen);
                      }
                      case 0b001: {
                          using elem_type [[maybe_unused]] = uint16_t;
                          return new Vrgather_vv<uint16_t, elem_type>(machInst, vlen);
                      }
                      case 0b010: {
                          using elem_type [[maybe_unused]] = uint32_t;
                          return new Vrgather_vv<uint32_t, elem_type>(machInst, vlen);
                      }
                      case 0b011: {
                          using elem_type [[maybe_unused]] = uint64_t;
                          return new Vrgather_vv<uint64_t, elem_type>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xe:   
                  // VectorGatherFormat::vrgatherei16_vv((['\n                    for (uint32_t i = 0; i < microVl; i++) {\n                        uint32_t ei = i + vs1_idx * vs1_elems + vs1_bias;\n                        if (this->vm || elem_mask(v0, ei)) {\n                            const uint32_t idx = Vs1_uh[i + vs1_bias]\n                                - vs2_elems * vs2_idx;\n                            if (Vs1_uh[i + vs1_bias] >= vlmax)\n                                Vd_vu[i + vd_bias] = 0;\n                            else if (idx < vs2_elems)\n                                Vd_vu[i + vd_bias] = Vs2_vu[idx];\n                        }\n                    }\n                ', 'OPIVV', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          using elem_type [[maybe_unused]] = uint8_t;
                          return new Vrgatherei16_vv<uint8_t, uint16_t>(machInst, vlen);
                      }
                      case 0b001: {
                          using elem_type [[maybe_unused]] = uint16_t;
                          return new Vrgatherei16_vv<uint16_t, uint16_t>(machInst, vlen);
                      }
                      case 0b010: {
                          using elem_type [[maybe_unused]] = uint32_t;
                          return new Vrgatherei16_vv<uint32_t, uint16_t>(machInst, vlen);
                      }
                      case 0b011: {
                          using elem_type [[maybe_unused]] = uint64_t;
                          return new Vrgatherei16_vv<uint64_t, uint16_t>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x10: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntFormat::vadc_vvm(['\n                            Vd_vi[i] = Vs2_vi[i] + Vs1_vi[i]\n                                    + elem_mask(v0, ei);\n                        ', 'OPIVV', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vadc_vvm<uint8_t>(machInst, vlen);
                      case 0b001: return new Vadc_vvm<uint16_t>(machInst, vlen);
                      case 0b010: return new Vadc_vvm<uint32_t>(machInst, vlen);
                      case 0b011: return new Vadc_vvm<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x12: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntFormat::vsbc_vvm(['\n                            Vd_vi[i] = Vs2_vi[i] - Vs1_vi[i]\n                                    - elem_mask(v0, ei);\n                        ', 'OPIVV', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vsbc_vvm<uint8_t>(machInst, vlen);
                      case 0b001: return new Vsbc_vvm<uint16_t>(machInst, vlen);
                      case 0b010: return new Vsbc_vvm<uint32_t>(machInst, vlen);
                      case 0b011: return new Vsbc_vvm<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x17: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntFormat::vmerge_vvm(['\n                            Vd_vu[i] = elem_mask(v0, ei)\n                                    ? Vs1_vu[i]\n                                    : Vs2_vu[i];\n                        ', 'OPIVV', 'SimdMiscOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmerge_vvm<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmerge_vvm<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmerge_vvm<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmerge_vvm<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x1: 
                      switch (VS2) {
                        
                        case 0x0:   
                          // VectorIntFormat::vmv_v_v(['\n                                Vd_vu[i] = Vs1_vu[i];\n                            ', 'OPIVV', 'SimdMiscOp'],{})
                          
                          
                          switch(machInst.vtype8.vsew) {
                          case 0b000: return new Vmv_v_v<uint8_t>(machInst, vlen);
                          case 0b001: return new Vmv_v_v<uint16_t>(machInst, vlen);
                          case 0b010: return new Vmv_v_v<uint32_t>(machInst, vlen);
                          case 0b011: return new Vmv_v_v<uint64_t>(machInst, vlen);
                          default: GEM5_UNREACHABLE;
                          }
                          
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x20:   
                  // VectorIntVxsatFormat::vsaddu_vv(['\n                        Vd_vu[i] = sat_addu<vu>(Vs2_vu[i], Vs1_vu[i],\n                            vxsatptr);\n                    ', 'OPIVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsaddu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsaddu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsaddu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsaddu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x21:   
                  // VectorIntVxsatFormat::vsadd_vv(['\n                        Vd_vu[i] = sat_add<vi>(Vs2_vu[i], Vs1_vu[i],\n                            vxsatptr);\n                    ', 'OPIVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsadd_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsadd_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsadd_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsadd_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x22:   
                  // VectorIntVxsatFormat::vssubu_vv(['\n                        Vd_vu[i] = sat_subu<vu>(Vs2_vu[i], Vs1_vu[i],\n                            vxsatptr);\n                    ', 'OPIVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vssubu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vssubu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vssubu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vssubu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x23:   
                  // VectorIntVxsatFormat::vssub_vv(['\n                        Vd_vu[i] = sat_sub<vi>(Vs2_vu[i], Vs1_vu[i],\n                            vxsatptr);\n                    ', 'OPIVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vssub_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vssub_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vssub_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vssub_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x27:   
                  // VectorIntVxsatFormat::vsmul_vv(['\n                        vi max = std::numeric_limits<vi>::max();\n                        vi min = std::numeric_limits<vi>::min();\n                        bool overflow = Vs1_vi[i] == Vs2_vi[i] &&\n                                        Vs1_vi[i] == min;\n                        __int128_t result = (__int128_t)Vs1_vi[i] *\n                                            (__int128_t)Vs2_vi[i];\n                        result = int_rounding<__int128_t>(\n                            result, 0 /* TODO */, sew - 1);\n                        result = result >> (sew - 1);\n                        if (overflow) {\n                            result = max;\n                            *vxsatptr = true;\n                        }\n\n                        Vd_vi[i] = (vi)result;\n                    ', 'OPIVV', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsmul_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsmul_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsmul_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsmul_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x25:   
                  // VectorIntFormat::vsll_vv(['\n                        Vd_vu[i] = Vs2_vu[i] << (Vs1_vu[i] & (sew - 1));\n                    ', 'OPIVV', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsll_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsll_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsll_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsll_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x28:   
                  // VectorIntFormat::vsrl_vv(['\n                        Vd_vu[i] = Vs2_vu[i] >> (Vs1_vu[i] & (sew - 1));\n                    ', 'OPIVV', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsrl_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsrl_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsrl_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsrl_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x29:   
                  // VectorIntFormat::vsra_vv(['\n                        Vd_vi[i] = Vs2_vi[i] >> (Vs1_vu[i] & (sew - 1));\n                    ', 'OPIVV', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsra_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsra_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsra_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsra_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2a:   
                  // VectorIntFormat::vssrl_vv(['\n                        int sh = Vs1_vu[i] & (sew - 1);\n                        __uint128_t val = Vs2_vu[i];\n\n                        val = int_rounding<__uint128_t>(val,\n                            xc->readMiscReg(MISCREG_VXRM), sh);\n                        Vd_vu[i] = val >> sh;\n                    ', 'OPIVV', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vssrl_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vssrl_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vssrl_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vssrl_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2b:   
                  // VectorIntFormat::vssra_vv(['\n                        int sh = Vs1_vi[i] & (sew - 1);\n                        __int128_t val = Vs2_vi[i];\n\n                        val = int_rounding<__int128_t>(val,\n                            xc->readMiscReg(MISCREG_VXRM), sh);\n                        Vd_vi[i] = val >> sh;\n                    ', 'OPIVV', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vssra_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vssra_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vssra_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vssra_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x30:   
                  // VectorReduceIntWideningFormat::vwredsumu_vs(['\n                        Vd_vwu[0] = reduce_loop(std::plus<vwu>(),\n                            Vs1_vwu, Vs2_vu);\n                    ', 'OPIVV', 'SimdReduceAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwredsumu_vs<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwredsumu_vs<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwredsumu_vs<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x31:   
                  // VectorReduceIntWideningFormat::vwredsum_vs(['\n                        Vd_vwu[0] = reduce_loop(std::plus<vwi>(),\n                            Vs1_vwi, Vs2_vi);\n                    ', 'OPIVV', 'SimdReduceAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwredsum_vs<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwredsum_vs<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwredsum_vs<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x11: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntMaskFormat::vmadc_vvm(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vu[i], Vs1_vu[i],\n                                    elem_mask(v0, ei)));\n                        ', 'OPIVV', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmadc_vvm<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmadc_vvm<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmadc_vvm<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmadc_vvm<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x1:   
                      // VectorIntMaskFormat::vmadc_vv(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vu[i], Vs1_vu[i]));\n                        ', 'OPIVV', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmadc_vv<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmadc_vv<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmadc_vv<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmadc_vv<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x13: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntMaskFormat::vmsbc_vvm(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                borrow_out(Vs2_vi[i], Vs1_vi[i],\n                                    elem_mask(v0, ei)));\n                        ', 'OPIVV', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmsbc_vvm<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmsbc_vvm<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmsbc_vvm<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmsbc_vvm<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x1:   
                      // VectorIntMaskFormat::vmsbc_vv(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                borrow_out(Vs2_vi[i], Vs1_vi[i]));\n                        ', 'OPIVV', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmsbc_vv<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmsbc_vv<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmsbc_vv<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmsbc_vv<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x18:   
                  // VectorIntMaskFormat::vmseq_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] == Vs1_vu[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmseq_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmseq_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmseq_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmseq_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x19:   
                  // VectorIntMaskFormat::vmsne_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] != Vs1_vu[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsne_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsne_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsne_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsne_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1a:   
                  // VectorIntMaskFormat::vmsltu_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] < Vs1_vu[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsltu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsltu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsltu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsltu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1b:   
                  // VectorIntMaskFormat::vmslt_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] < Vs1_vi[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmslt_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmslt_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmslt_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmslt_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1c:   
                  // VectorIntMaskFormat::vmsleu_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] <= Vs1_vu[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsleu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsleu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsleu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsleu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1d:   
                  // VectorIntMaskFormat::vmsle_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] <= Vs1_vi[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsle_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsle_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsle_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsle_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2c:   
                  // VectorIntNarrowingFormat::vnsrl_wv(['\n                        Vd_vu[i + offset] = (vu)(Vs2_vwu[i] >>\n                            ((vwu)Vs1_vu[i + offset] & (sew * 2 - 1)));\n                    ', 'OPIVV', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnsrl_wv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnsrl_wv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnsrl_wv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2d:   
                  // VectorIntNarrowingFormat::vnsra_wv(['\n                        Vd_vi[i + offset] = (vi)(Vs2_vwi[i] >>\n                            ((vwu)Vs1_vu[i + offset] & (sew * 2 - 1)));\n                    ', 'OPIVV', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnsra_wv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnsra_wv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnsra_wv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2e:   
                  // VectorIntNarrowingFormat::vnclipu_wv(['\n                        vu max = std::numeric_limits<vu>::max();\n                        uint64_t sign_mask =\n                            std::numeric_limits<uint64_t>::max() << sew;\n                        __uint128_t res = Vs2_vwu[i];\n                        unsigned shift = Vs1_vu[i + offset] & ((sew * 2) - 1);\n\n                        res = int_rounding<__uint128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res & sign_mask) {\n                            res = max;\n                            // TODO: vxsat\n                        }\n\n                        Vd_vu[i + offset] = (vu)res;\n                    ', 'OPIVV', 'SimdCvtOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnclipu_wv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnclipu_wv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnclipu_wv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2f:   
                  // VectorIntNarrowingFormat::vnclip_wv(['\n                        vi max = std::numeric_limits<vi>::max();\n                        vi min = std::numeric_limits<vi>::min();\n                        __int128_t res = Vs2_vwi[i];\n                        unsigned shift = Vs1_vi[i + offset] & ((sew * 2) - 1);\n\n                        res = int_rounding<__int128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res < min) {\n                            res = min;\n                            // TODO: vxsat\n                        } else if (res > max) {\n                            res = max;\n                            // TODO: vxsat\n                        }\n\n                        Vd_vi[i + offset] = (vi)res;\n                    ', 'OPIVV', 'SimdCvtOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnclip_wv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnclip_wv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnclip_wv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x1: 
              switch (VFUNCT6) {
                
                case 0x0:   
                  // VectorFloatFormat::vfadd_vv((['\n                    auto fd = fadd<et>(ftype<et>(Vs2_vu[i]),\n                                       ftype<et>(Vs1_vu[i]));\n                    Vd_vu[i] = fd.v;\n                ', 'OPFVV', 'SimdFloatAddOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfadd_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfadd_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfadd_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1:   
                  // VectorReduceFloatFormat::vfredusum_vs((['\n                    Vd_vu[0] = reduce_loop([](const vu& src1, const vu& src2) {\n                        return fadd<et>(ftype<et>(src1), ftype<et>(src2));\n                    }, Vs1_vu, Vs2_vu);\n                ', 'OPFVV', 'SimdFloatReduceAddOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfredusum_vs<float16_t>(machInst, vlen);
                  case 0b010: return new Vfredusum_vs<float32_t>(machInst, vlen);
                  case 0b011: return new Vfredusum_vs<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VectorFloatFormat::vfsub_vv((['\n                    auto fd = fsub<et>(ftype<et>(Vs2_vu[i]),\n                                       ftype<et>(Vs1_vu[i]));\n                    Vd_vu[i] = fd.v;\n                ', 'OPFVV', 'SimdFloatAddOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfsub_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfsub_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfsub_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3:   
                  // VectorReduceFloatFormat::vfredosum_vs((['\n                    Vd_vu[0] = reduce_loop([](const vu& src1, const vu& src2) {\n                        return fadd<et>(ftype<et>(src1), ftype<et>(src2));\n                    }, Vs1_vu, Vs2_vu);\n                ', 'OPFVV', 'SimdFloatReduceAddOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfredosum_vs<float16_t>(machInst, vlen);
                  case 0b010: return new Vfredosum_vs<float32_t>(machInst, vlen);
                  case 0b011: return new Vfredosum_vs<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x4:   
                  // VectorFloatFormat::vfmin_vv((['\n                    auto fd = fmin<et>(ftype<et>(Vs2_vu[i]),\n                                       ftype<et>(Vs1_vu[i]));\n                    Vd_vu[i] = fd.v;\n                ', 'OPFVV', 'SimdFloatCmpOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmin_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmin_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmin_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x5:   
                  // VectorReduceFloatFormat::vfredmin_vs((['\n                    Vd_vu[0] = reduce_loop([](const vu& src1, const vu& src2) {\n                        return fmin<et>(ftype<et>(src1), ftype<et>(src2));\n                    }, Vs1_vu, Vs2_vu);\n                ', 'OPFVV', 'SimdFloatReduceCmpOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfredmin_vs<float16_t>(machInst, vlen);
                  case 0b010: return new Vfredmin_vs<float32_t>(machInst, vlen);
                  case 0b011: return new Vfredmin_vs<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x6:   
                  // VectorFloatFormat::vfmax_vv((['\n                    auto fd = fmax<et>(ftype<et>(Vs2_vu[i]),\n                                       ftype<et>(Vs1_vu[i]));\n                    Vd_vu[i] = fd.v;\n                ', 'OPFVV', 'SimdFloatCmpOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmax_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmax_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmax_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x7:   
                  // VectorReduceFloatFormat::vfredmax_vs((['\n                    Vd_vu[0] = reduce_loop([](const vu& src1, const vu& src2) {\n                        return fmax<et>(ftype<et>(src1), ftype<et>(src2));\n                    }, Vs1_vu, Vs2_vu);\n                ', 'OPFVV', 'SimdFloatReduceCmpOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfredmax_vs<float16_t>(machInst, vlen);
                  case 0b010: return new Vfredmax_vs<float32_t>(machInst, vlen);
                  case 0b011: return new Vfredmax_vs<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x8:   
                  // VectorFloatFormat::vfsgnj_vv((['\n                    Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                         ftype<et>(Vs1_vu[i]),\n                                         false, false).v;\n                ', 'OPFVV', 'SimdFloatCvtOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfsgnj_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfsgnj_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfsgnj_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x9:   
                  // VectorFloatFormat::vfsgnjn_vv((['\n                    Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                         ftype<et>(Vs1_vu[i]),\n                                         true, false).v;\n                ', 'OPFVV', 'SimdFloatCvtOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfsgnjn_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfsgnjn_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfsgnjn_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xa:   
                  // VectorFloatFormat::vfsgnjx_vv((['\n                    Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                         ftype<et>(Vs1_vu[i]),\n                                         false, true).v;\n                ', 'OPFVV', 'SimdFloatCvtOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfsgnjx_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfsgnjx_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfsgnjx_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x10: 
                  switch (VS1) {
                    
                    case 0x0: 
                      switch (VM) {
                        
                        case 0x1:   
                          // VectorNonSplitFormat::vfmv_f_s((['\n                            freg_t fd = freg(ftype<et>(Vs2_vu[0]));\n                            Fd_bits = fd.v;\n                        ', 'OPFVV', 'SimdMiscOp'], {}))
                          
                          
                          switch(machInst.vtype8.vsew) {
                          case 0b001: return new Vfmv_f_s<float16_t>(machInst);
                          case 0b010: return new Vfmv_f_s<float32_t>(machInst);
                          case 0b011: return new Vfmv_f_s<float64_t>(machInst);
                          default: GEM5_UNREACHABLE;
                          }
                          
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x12: 
                  switch (VS1) {
                    
                    case 0x0:   
                      // VectorFloatCvtFormat::vfcvt_xu_f_v(['\n                            Vd_vu[i] = f_to_ui<et>(ftype<et>(Vs2_vu[i]),\n                                                   softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfcvt_xu_f_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfcvt_xu_f_v<float32_t>(machInst, vlen);
                      case 0b011: return new Vfcvt_xu_f_v<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x1:   
                      // VectorFloatCvtFormat::vfcvt_x_f_v(['\n                            Vd_vu[i] = f_to_i<et>(ftype<et>(Vs2_vu[i]),\n                                                  softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfcvt_x_f_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfcvt_x_f_v<float32_t>(machInst, vlen);
                      case 0b011: return new Vfcvt_x_f_v<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x2:   
                      // VectorFloatCvtFormat::vfcvt_f_xu_v(['\n                            auto fd = ui_to_f<et>(Vs2_vu[i]);\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfcvt_f_xu_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfcvt_f_xu_v<float32_t>(machInst, vlen);
                      case 0b011: return new Vfcvt_f_xu_v<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x3:   
                      // VectorFloatCvtFormat::vfcvt_f_x_v(['\n                            auto fd = i_to_f<et>(Vs2_vu[i]);\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfcvt_f_x_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfcvt_f_x_v<float32_t>(machInst, vlen);
                      case 0b011: return new Vfcvt_f_x_v<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x6:   
                      // VectorFloatCvtFormat::vfcvt_rtz_xu_f_v(['\n                            Vd_vu[i] = f_to_ui<et>(ftype<et>(Vs2_vu[i]),\n                                                   softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfcvt_rtz_xu_f_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfcvt_rtz_xu_f_v<float32_t>(machInst, vlen);
                      case 0b011: return new Vfcvt_rtz_xu_f_v<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x7:   
                      // VectorFloatCvtFormat::vfcvt_rtz_x_f_v(['\n                            Vd_vu[i] = f_to_i<et>(ftype<et>(Vs2_vu[i]),\n                                                  softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfcvt_rtz_x_f_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfcvt_rtz_x_f_v<float32_t>(machInst, vlen);
                      case 0b011: return new Vfcvt_rtz_x_f_v<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x8:   
                      // VectorFloatWideningCvtFormat::vfwcvt_xu_f_v(['\n                            Vd_vwu[i] = f_to_wui<et>(\n                                ftype<et>(Vs2_vu[i + offset]),\n                                softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfwcvt_xu_f_v<float8_t>(machInst, vlen);
                      case 0b001: return new Vfwcvt_xu_f_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfwcvt_xu_f_v<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x9:   
                      // VectorFloatWideningCvtFormat::vfwcvt_x_f_v(['\n                            Vd_vwu[i] = f_to_wi<et>(\n                                ftype<et>(Vs2_vu[i + offset]),\n                                softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfwcvt_x_f_v<float8_t>(machInst, vlen);
                      case 0b001: return new Vfwcvt_x_f_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfwcvt_x_f_v<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0xa:   
                      // VectorFloatWideningCvtFormat::vfwcvt_f_xu_v(['\n                            auto fd = ui_to_wf<vu>(Vs2_vu[i + offset]);\n                            Vd_vwu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfwcvt_f_xu_v<float8_t>(machInst, vlen);
                      case 0b001: return new Vfwcvt_f_xu_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfwcvt_f_xu_v<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0xb:   
                      // VectorFloatWideningCvtFormat::vfwcvt_f_x_v(['\n                            auto fd = i_to_wf<vu>(Vs2_vu[i + offset]);\n                            Vd_vwu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfwcvt_f_x_v<float8_t>(machInst, vlen);
                      case 0b001: return new Vfwcvt_f_x_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfwcvt_f_x_v<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0xc:   
                      // VectorFloatWideningCvtFormat::vfwcvt_f_f_v(['\n                            auto fd = f_to_wf<et>(\n                                ftype<et>(Vs2_vu[i + offset]));\n                            Vd_vwu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfwcvt_f_f_v<float8_t>(machInst, vlen);
                      case 0b001: return new Vfwcvt_f_f_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfwcvt_f_f_v<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0xe:   
                      // VectorFloatWideningCvtFormat::vfwcvt_rtz_xu_f_v(['\n                            Vd_vwu[i] = f_to_wui<et>(\n                                ftype<et>(Vs2_vu[i + offset]),\n                                softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfwcvt_rtz_xu_f_v<float8_t>(machInst, vlen);
                      case 0b001: return new Vfwcvt_rtz_xu_f_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfwcvt_rtz_xu_f_v<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0xf:   
                      // VectorFloatWideningCvtFormat::vfwcvt_rtz_x_f_v(['\n                            Vd_vwu[i] = f_to_wi<et>(\n                                ftype<et>(Vs2_vu[i + offset]),\n                                softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfwcvt_rtz_x_f_v<float8_t>(machInst, vlen);
                      case 0b001: return new Vfwcvt_rtz_x_f_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfwcvt_rtz_x_f_v<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x10:   
                      // VectorFloatNarrowingCvtFormat::vfncvt_xu_f_w(['\n                            Vd_vu[i + offset] = f_to_nui<vu>(\n                                ftype<ewt>(Vs2_vwu[i]),\n                                softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfncvt_xu_f_w<float8_t>(machInst, vlen);
                      case 0b001: return new Vfncvt_xu_f_w<float16_t>(machInst, vlen);
                      case 0b010: return new Vfncvt_xu_f_w<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x11:   
                      // VectorFloatNarrowingCvtFormat::vfncvt_x_f_w(['\n                            Vd_vu[i + offset] = f_to_ni<vu>(\n                                ftype<ewt>(Vs2_vwu[i]),\n                                softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfncvt_x_f_w<float8_t>(machInst, vlen);
                      case 0b001: return new Vfncvt_x_f_w<float16_t>(machInst, vlen);
                      case 0b010: return new Vfncvt_x_f_w<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x12:   
                      // VectorFloatNarrowingCvtFormat::vfncvt_f_xu_w(['\n                            auto fd = ui_to_nf<et>(Vs2_vwu[i]);\n                            Vd_vu[i + offset] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfncvt_f_xu_w<float8_t>(machInst, vlen);
                      case 0b001: return new Vfncvt_f_xu_w<float16_t>(machInst, vlen);
                      case 0b010: return new Vfncvt_f_xu_w<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x13:   
                      // VectorFloatNarrowingCvtFormat::vfncvt_f_x_w(['\n                            auto fd = i_to_nf<et>(Vs2_vwu[i]);\n                            Vd_vu[i + offset] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfncvt_f_x_w<float8_t>(machInst, vlen);
                      case 0b001: return new Vfncvt_f_x_w<float16_t>(machInst, vlen);
                      case 0b010: return new Vfncvt_f_x_w<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x14:   
                      // VectorFloatNarrowingCvtFormat::vfncvt_f_f_w(['\n                            auto fd = f_to_nf<et>(ftype<ewt>(Vs2_vwu[i]));\n                            Vd_vu[i + offset] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfncvt_f_f_w<float8_t>(machInst, vlen);
                      case 0b001: return new Vfncvt_f_f_w<float16_t>(machInst, vlen);
                      case 0b010: return new Vfncvt_f_f_w<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x15:   
                      // VectorFloatNarrowingCvtFormat::vfncvt_rod_f_f_w(['\n                            softfloat_roundingMode = softfloat_round_odd;\n                            auto fd = f_to_nf<et>(ftype<ewt>(Vs2_vwu[i]));\n                            Vd_vu[i + offset] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfncvt_rod_f_f_w<float8_t>(machInst, vlen);
                      case 0b001: return new Vfncvt_rod_f_f_w<float16_t>(machInst, vlen);
                      case 0b010: return new Vfncvt_rod_f_f_w<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x16:   
                      // VectorFloatNarrowingCvtFormat::vfncvt_rtz_xu_f_w(['\n                            Vd_vu[i + offset] = f_to_nui<vu>(\n                                ftype<ewt>(Vs2_vwu[i]),\n                                softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfncvt_rtz_xu_f_w<float8_t>(machInst, vlen);
                      case 0b001: return new Vfncvt_rtz_xu_f_w<float16_t>(machInst, vlen);
                      case 0b010: return new Vfncvt_rtz_xu_f_w<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x17:   
                      // VectorFloatNarrowingCvtFormat::vfncvt_rtz_x_f_w(['\n                            Vd_vu[i + offset] = f_to_ni<vu>(\n                                ftype<ewt>(Vs2_vwu[i]),\n                                softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vfncvt_rtz_x_f_w<float8_t>(machInst, vlen);
                      case 0b001: return new Vfncvt_rtz_x_f_w<float16_t>(machInst, vlen);
                      case 0b010: return new Vfncvt_rtz_x_f_w<float32_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x13: 
                  switch (VS1) {
                    
                    case 0x0:   
                      // VectorFloatCvtFormat::vfsqrt_v(['\n                            auto fd = fsqrt<et>(ftype<et>(Vs2_vu[i]));\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatSqrtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfsqrt_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfsqrt_v<float32_t>(machInst, vlen);
                      case 0b011: return new Vfsqrt_v<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x4:   
                      // VectorFloatCvtFormat::vfrsqrt7_v(['\n                            auto fd = frsqrte7<et>(ftype<et>(Vs2_vu[i]));\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatSqrtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfrsqrt7_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfrsqrt7_v<float32_t>(machInst, vlen);
                      case 0b011: return new Vfrsqrt7_v<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x5:   
                      // VectorFloatCvtFormat::vfrec7_v(['\n                            auto fd = frecip7<et>(ftype<et>(Vs2_vu[i]));\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatDivOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfrec7_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfrec7_v<float32_t>(machInst, vlen);
                      case 0b011: return new Vfrec7_v<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x10:   
                      // VectorFloatCvtFormat::vfclass_v(['\n                            auto fd = fclassify<et>(ftype<et>(Vs2_vu[i]));\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdMiscOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfclass_v<float16_t>(machInst, vlen);
                      case 0b010: return new Vfclass_v<float32_t>(machInst, vlen);
                      case 0b011: return new Vfclass_v<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x18:   
                  // VectorFloatMaskFormat::vmfeq_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            feq<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype<et>(Vs1_vu[i])));\n                    ', 'OPFVV', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vmfeq_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vmfeq_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vmfeq_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x19:   
                  // VectorFloatMaskFormat::vmfle_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            fle<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype<et>(Vs1_vu[i])));\n                    ', 'OPFVV', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vmfle_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vmfle_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vmfle_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1b:   
                  // VectorFloatMaskFormat::vmflt_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            flt<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype<et>(Vs1_vu[i])));\n                    ', 'OPFVV', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vmflt_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vmflt_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vmflt_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1c:   
                  // VectorFloatMaskFormat::vmfne_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            !feq<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype<et>(Vs1_vu[i])));\n                    ', 'OPFVV', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vmfne_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vmfne_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vmfne_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x20:   
                  // VectorFloatFormat::vfdiv_vv(['\n                        auto fd = fdiv<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype<et>(Vs1_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatDivOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfdiv_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfdiv_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfdiv_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x24:   
                  // VectorFloatFormat::vfmul_vv(['\n                        auto fd = fmul<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype<et>(Vs1_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmul_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmul_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmul_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x28:   
                  // VectorFloatFormat::vfmadd_vv(['\n                        auto fd = fmadd<et>(ftype<et>(Vs3_vu[i]),\n                                            ftype<et>(Vs1_vu[i]),\n                                            ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmadd_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmadd_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmadd_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x29:   
                  // VectorFloatFormat::vfnmadd_vv(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs3_vu[i])),\n                                            ftype<et>(Vs1_vu[i]),\n                                            fneg(ftype<et>(Vs2_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfnmadd_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfnmadd_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfnmadd_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2a:   
                  // VectorFloatFormat::vfmsub_vv(['\n                        auto fd = fmadd<et>(ftype<et>(Vs3_vu[i]),\n                                            ftype<et>(Vs1_vu[i]),\n                                            fneg(ftype<et>(Vs2_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmsub_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmsub_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmsub_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2b:   
                  // VectorFloatFormat::vfnmsub_vv(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs3_vu[i])),\n                                            ftype<et>(Vs1_vu[i]),\n                                            ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfnmsub_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfnmsub_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfnmsub_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2c:   
                  // VectorFloatFormat::vfmacc_vv(['\n                        auto fd = fmadd<et>(ftype<et>(Vs1_vu[i]),\n                                            ftype<et>(Vs2_vu[i]),\n                                            ftype<et>(Vs3_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmacc_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmacc_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmacc_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2d:   
                  // VectorFloatFormat::vfnmacc_vv(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs1_vu[i])),\n                                            ftype<et>(Vs2_vu[i]),\n                                            fneg(ftype<et>(Vs3_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfnmacc_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfnmacc_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfnmacc_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2e:   
                  // VectorFloatFormat::vfmsac_vv(['\n                        auto fd = fmadd<et>(ftype<et>(Vs1_vu[i]),\n                                            ftype<et>(Vs2_vu[i]),\n                                            fneg(ftype<et>(Vs3_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmsac_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmsac_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmsac_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2f:   
                  // VectorFloatFormat::vfnmsac_vv(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs1_vu[i])),\n                                            ftype<et>(Vs2_vu[i]),\n                                            ftype<et>(Vs3_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfnmsac_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfnmsac_vv<float32_t>(machInst, vlen);
                  case 0b011: return new Vfnmsac_vv<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x31:   
                  // VectorReduceFloatWideningFormat::vfwredusum_vs((['\n                        Vd_vwu[0] = reduce_loop(\n                            [](const vwu& src1, const vu& src2) {\n                                return fadd<ewt>(\n                                    ftype<ewt>(src1),\n                                    f_to_wf<et>(ftype<et>(src2))\n                                );\n                            }, Vs1_vwu, Vs2_vu);\n                    ', 'OPFVV', 'SimdFloatReduceAddOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwredusum_vs<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwredusum_vs<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x33:   
                  // VectorReduceFloatWideningFormat::vfwredosum_vs((['\n                        Vd_vwu[0] = reduce_loop(\n                            [](const vwu& src1, const vu& src2) {\n                                return fadd<ewt>(\n                                    ftype<ewt>(src1),\n                                    f_to_wf<et>(ftype<et>(src2))\n                                );\n                            }, Vs1_vwu, Vs2_vu);\n                    ', 'OPFVV', 'SimdFloatReduceAddOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwredosum_vs<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwredosum_vs<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x30:   
                  // VectorFloatWideningFormat::vfwadd_vv(['\n                        auto fd = fadd<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype<et>(Vs1_vu[i + offset])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwadd_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwadd_vv<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x32:   
                  // VectorFloatWideningFormat::vfwsub_vv(['\n                        auto fd = fsub<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype<et>(Vs1_vu[i + offset])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwsub_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwsub_vv<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x34:   
                  // VectorFloatWideningFormat::vfwadd_wv(['\n                        auto fd = fadd<ewt>(\n                            ftype<ewt>(Vs2_vwu[i]),\n                            fwiden(ftype<et>(Vs1_vu[i + offset])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwadd_wv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwadd_wv<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x36:   
                  // VectorFloatWideningFormat::vfwsub_wv(['\n                        auto fd = fsub<ewt>(\n                            ftype<ewt>(Vs2_vwu[i]),\n                            fwiden(ftype<et>(Vs1_vu[i + offset])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwsub_wv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwsub_wv<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x38:   
                  // VectorFloatWideningFormat::vfwmul_vv(['\n                        auto fd = fmul<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype<et>(Vs1_vu[i + offset])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwmul_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwmul_vv<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3c:   
                  // VectorFloatWideningFormat::vfwmacc_vv(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(ftype<et>(Vs1_vu[i + offset])),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            ftype<ewt>(Vs3_vwu[i]));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwmacc_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwmacc_vv<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3d:   
                  // VectorFloatWideningFormat::vfwnmacc_vv(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(fneg(ftype<et>(Vs1_vu[i + offset]))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fneg(ftype<ewt>(Vs3_vwu[i])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwnmacc_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwnmacc_vv<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3e:   
                  // VectorFloatWideningFormat::vfwmsac_vv(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(ftype<et>(Vs1_vu[i + offset])),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fneg(ftype<ewt>(Vs3_vwu[i])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwmsac_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwmsac_vv<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3f:   
                  // VectorFloatWideningFormat::vfwnmsac_vv(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(fneg(ftype<et>(Vs1_vu[i + offset]))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            ftype<ewt>(Vs3_vwu[i]));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwnmsac_vv<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwnmsac_vv<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x2: 
              switch (VFUNCT6) {
                
                case 0x0:   
                  // VectorReduceIntFormat::vredsum_vs(['\n                        Vd_vi[0] =\n                            reduce_loop(std::plus<vi>(), Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vredsum_vs<uint8_t>(machInst, vlen);
                  case 0b001: return new Vredsum_vs<uint16_t>(machInst, vlen);
                  case 0b010: return new Vredsum_vs<uint32_t>(machInst, vlen);
                  case 0b011: return new Vredsum_vs<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1:   
                  // VectorReduceIntFormat::vredand_vs(['\n                        Vd_vi[0] =\n                            reduce_loop(std::bit_and<vi>(), Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vredand_vs<uint8_t>(machInst, vlen);
                  case 0b001: return new Vredand_vs<uint16_t>(machInst, vlen);
                  case 0b010: return new Vredand_vs<uint32_t>(machInst, vlen);
                  case 0b011: return new Vredand_vs<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VectorReduceIntFormat::vredor_vs(['\n                        Vd_vi[0] =\n                            reduce_loop(std::bit_or<vi>(), Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vredor_vs<uint8_t>(machInst, vlen);
                  case 0b001: return new Vredor_vs<uint16_t>(machInst, vlen);
                  case 0b010: return new Vredor_vs<uint32_t>(machInst, vlen);
                  case 0b011: return new Vredor_vs<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3:   
                  // VectorReduceIntFormat::vredxor_vs(['\n                        Vd_vi[0] =\n                            reduce_loop(std::bit_xor<vi>(), Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vredxor_vs<uint8_t>(machInst, vlen);
                  case 0b001: return new Vredxor_vs<uint16_t>(machInst, vlen);
                  case 0b010: return new Vredxor_vs<uint32_t>(machInst, vlen);
                  case 0b011: return new Vredxor_vs<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x4:   
                  // VectorReduceIntFormat::vredminu_vs(['\n                        Vd_vu[0] =\n                            reduce_loop([](const vu& src1, const vu& src2) {\n                                return std::min<vu>(src1, src2);\n                            }, Vs1_vu, Vs2_vu);\n                    ', 'OPMVV', 'SimdReduceCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vredminu_vs<uint8_t>(machInst, vlen);
                  case 0b001: return new Vredminu_vs<uint16_t>(machInst, vlen);
                  case 0b010: return new Vredminu_vs<uint32_t>(machInst, vlen);
                  case 0b011: return new Vredminu_vs<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x5:   
                  // VectorReduceIntFormat::vredmin_vs(['\n                        Vd_vi[0] =\n                            reduce_loop([](const vi& src1, const vi& src2) {\n                                return std::min<vi>(src1, src2);\n                            }, Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vredmin_vs<uint8_t>(machInst, vlen);
                  case 0b001: return new Vredmin_vs<uint16_t>(machInst, vlen);
                  case 0b010: return new Vredmin_vs<uint32_t>(machInst, vlen);
                  case 0b011: return new Vredmin_vs<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x6:   
                  // VectorReduceIntFormat::vredmaxu_vs(['\n                        Vd_vu[0] =\n                            reduce_loop([](const vu& src1, const vu& src2) {\n                                return std::max<vu>(src1, src2);\n                            }, Vs1_vu, Vs2_vu);\n                    ', 'OPMVV', 'SimdReduceCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vredmaxu_vs<uint8_t>(machInst, vlen);
                  case 0b001: return new Vredmaxu_vs<uint16_t>(machInst, vlen);
                  case 0b010: return new Vredmaxu_vs<uint32_t>(machInst, vlen);
                  case 0b011: return new Vredmaxu_vs<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x7:   
                  // VectorReduceIntFormat::vredmax_vs(['\n                        Vd_vi[0] =\n                            reduce_loop([](const vi& src1, const vi& src2) {\n                                return std::max<vi>(src1, src2);\n                            }, Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vredmax_vs<uint8_t>(machInst, vlen);
                  case 0b001: return new Vredmax_vs<uint16_t>(machInst, vlen);
                  case 0b010: return new Vredmax_vs<uint32_t>(machInst, vlen);
                  case 0b011: return new Vredmax_vs<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x8:   
                  // VectorIntFormat::vaaddu_vv(['\n                        __uint128_t res = (__uint128_t)Vs2_vu[i] + Vs1_vu[i];\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vu[i] = res >> 1;\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vaaddu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vaaddu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vaaddu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vaaddu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x9:   
                  // VectorIntFormat::vaadd_vv(['\n                        __uint128_t res = (__uint128_t)Vs2_vi[i] + Vs1_vi[i];\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vi[i] = res >> 1;\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vaadd_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vaadd_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vaadd_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vaadd_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xa:   
                  // VectorIntFormat::vasubu_vv(['\n                        __uint128_t res = (__uint128_t)Vs2_vu[i] - Vs1_vu[i];\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vu[i] = res >> 1;\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vasubu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vasubu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vasubu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vasubu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xb:   
                  // VectorIntFormat::vasub_vv(['\n                        __uint128_t res = (__uint128_t)Vs2_vi[i] - Vs1_vi[i];\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vi[i] = res >> 1;\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vasub_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vasub_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vasub_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vasub_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x10: 
                  switch (VS1) {
                    
                    case 0x0: 
                      switch (VM) {
                        
                        case 0x1:   
                          // VectorNonSplitFormat::vmv_x_s((['\n                            Rd_ud = Vs2_vi[0];\n                        ', 'OPMVV', 'SimdMiscOp'], {}))
                          
                          
                          switch(machInst.vtype8.vsew) {
                          case 0b000: return new Vmv_x_s<uint8_t>(machInst);
                          case 0b001: return new Vmv_x_s<uint16_t>(machInst);
                          case 0b010: return new Vmv_x_s<uint32_t>(machInst);
                          case 0b011: return new Vmv_x_s<uint64_t>(machInst);
                          default: GEM5_UNREACHABLE;
                          }
                          
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    case 0x10:   
                      // Vector1Vs1RdMaskFormat::vcpop_m((['\n                        uint64_t popcount = 0;\n                        for (uint32_t i = 0; i < (uint32_t)machInst.vl; i++) {\n                            bool vs2_lsb = elem_mask(Vs2_vu, i);\n                            if(this->vm){\n                                popcount += vs2_lsb;\n                            }else{\n                                bool do_mask = elem_mask(v0, i);\n                                popcount += (vs2_lsb && do_mask);\n                            }\n                        }\n                        Rd_vu = popcount;\n                    ', 'OPMVV', 'SimdAluOp'], {}))
                      
                      
                      return new Vcpop_m<uint8_t>(machInst);
                      
                      break;
                    
                    case 0x11:   
                      // Vector1Vs1RdMaskFormat::vfirst_m((['\n                        int64_t pos = -1;\n                        for (uint32_t i = 0; i < (uint32_t)machInst.vl; i++) {\n                            if(this->vm == 0){\n                                if(elem_mask(v0, i)==0){\n                                    continue;\n                                }\n                            }\n                            bool vs2_lsb = elem_mask(Vs2_vu, i);\n                            if (vs2_lsb) {\n                                pos = i;\n                                break;\n                            }\n                        }\n                        Rd_vu = pos;\n                    ', 'OPMVV', 'SimdMiscOp'], {}))
                      
                      
                      return new Vfirst_m<uint8_t>(machInst);
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x12: 
                  switch (VS1) {
                    
                    case 0x2:   
                      // VectorIntExtFormat::vzext_vf8(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vu[i] = Vs2_vextu[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vzext_vf8<uint8_t>(machInst, vlen);
                      case 0b001: return new Vzext_vf8<uint16_t>(machInst, vlen);
                      case 0b010: return new Vzext_vf8<uint32_t>(machInst, vlen);
                      case 0b011: return new Vzext_vf8<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x3:   
                      // VectorIntExtFormat::vsext_vf8(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vi[i] = Vs2_vext[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vsext_vf8<uint8_t>(machInst, vlen);
                      case 0b001: return new Vsext_vf8<uint16_t>(machInst, vlen);
                      case 0b010: return new Vsext_vf8<uint32_t>(machInst, vlen);
                      case 0b011: return new Vsext_vf8<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x4:   
                      // VectorIntExtFormat::vzext_vf4(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vu[i] = Vs2_vextu[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vzext_vf4<uint8_t>(machInst, vlen);
                      case 0b001: return new Vzext_vf4<uint16_t>(machInst, vlen);
                      case 0b010: return new Vzext_vf4<uint32_t>(machInst, vlen);
                      case 0b011: return new Vzext_vf4<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x5:   
                      // VectorIntExtFormat::vsext_vf4(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vi[i] = Vs2_vext[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vsext_vf4<uint8_t>(machInst, vlen);
                      case 0b001: return new Vsext_vf4<uint16_t>(machInst, vlen);
                      case 0b010: return new Vsext_vf4<uint32_t>(machInst, vlen);
                      case 0b011: return new Vsext_vf4<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x6:   
                      // VectorIntExtFormat::vzext_vf2(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vu[i] = Vs2_vextu[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vzext_vf2<uint8_t>(machInst, vlen);
                      case 0b001: return new Vzext_vf2<uint16_t>(machInst, vlen);
                      case 0b010: return new Vzext_vf2<uint32_t>(machInst, vlen);
                      case 0b011: return new Vzext_vf2<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x7:   
                      // VectorIntExtFormat::vsext_vf2(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vi[i] = Vs2_vext[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vsext_vf2<uint8_t>(machInst, vlen);
                      case 0b001: return new Vsext_vf2<uint16_t>(machInst, vlen);
                      case 0b010: return new Vsext_vf2<uint32_t>(machInst, vlen);
                      case 0b011: return new Vsext_vf2<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x14: 
                  switch (VS1) {
                    
                    case 0x1:   
                      // Vector1Vs1VdMaskFormat::vmsbf_m((['\n                        bool has_one = false;\n                        for (uint32_t i = 0; i < (uint32_t)machInst.vl; i++) {\n                            bool vs2_lsb = elem_mask(Vs2_vu, i);\n                            if (this->vm || elem_mask(v0, i)){\n                                uint64_t res = 0;\n                                if (!has_one && !vs2_lsb) {\n                                    res = 1;\n                                } else if (!has_one && vs2_lsb) {\n                                    has_one = true;\n                                }\n                                Vd_ub[i/8] = ASSIGN_VD_BIT(i, res);\n                            }\n                        }\n                    ', 'OPMVV', 'SimdAluOp'], {}))
                      
                      
                      return new Vmsbf_m<uint8_t>(machInst);
                      
                      break;
                    
                    case 0x2:   
                      // Vector1Vs1VdMaskFormat::vmsof_m((['\n                        bool has_one = false;\n                        for (uint32_t i = 0; i < (uint32_t)machInst.vl; i++) {\n                            bool vs2_lsb = elem_mask(Vs2_vu, i);\n                            if (this->vm || elem_mask(v0, i)){\n                                uint64_t res = 0;\n                                if (!has_one && vs2_lsb) {\n                                    has_one = true;\n                                    res = 1;\n                                }\n                                Vd_ub[i/8] = ASSIGN_VD_BIT(i, res);\n                            }\n                        }\n                    ', 'OPMVV', 'SimdAluOp'], {}))
                      
                      
                      return new Vmsof_m<uint8_t>(machInst);
                      
                      break;
                    
                    case 0x3:   
                      // Vector1Vs1VdMaskFormat::vmsif_m((['\n                        bool has_one = false;\n                        for (uint32_t i = 0; i < (uint32_t)machInst.vl; i++) {\n                            bool vs2_lsb = elem_mask(Vs2_vu, i);\n                            if (this->vm || elem_mask(v0, i)){\n                                uint64_t res = 0;\n                                if (!has_one && !vs2_lsb) {\n                                    res = 1;\n                                } else if (!has_one && vs2_lsb) {\n                                    has_one = true;\n                                    res = 1;\n                                }\n                                Vd_ub[i/8] = ASSIGN_VD_BIT(i, res);\n                            }\n                        }\n                    ', 'OPMVV', 'SimdAluOp'], {}))
                      
                      
                      return new Vmsif_m<uint8_t>(machInst);
                      
                      break;
                    
                    case 0x10:   
                      // ViotaFormat::viota_m((['\n                        if (this->vm || elem_mask(v0, ei)) {\n                            Vd_vu[i] = *cnt;\n                            if (elem_mask(Vs2_vu, ei)) {\n                                *cnt = *cnt+1;\n                            }\n                        }\n                    ', 'OPMVV', 'SimdAluOp'], {}))
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Viota_m<uint8_t>(machInst, vlen);
                      case 0b001: return new Viota_m<uint16_t>(machInst, vlen);
                      case 0b010: return new Viota_m<uint32_t>(machInst, vlen);
                      case 0b011: return new Viota_m<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x11:   
                      // VectorIntFormat::vid_v((['\n                        Vd_vu[i] = ei;\n                    ', 'OPMVV', 'SimdMiscOp'], {}))
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vid_v<uint8_t>(machInst, vlen);
                      case 0b001: return new Vid_v<uint16_t>(machInst, vlen);
                      case 0b010: return new Vid_v<uint32_t>(machInst, vlen);
                      case 0b011: return new Vid_v<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x18:   
                  // VectorMaskFormat::vmandn_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            elem_mask(Vs2_vu, i) & !elem_mask(Vs1_vu, i));\n                    ', 'OPMVV', 'SimdAluOp'],{})
                  
                  
                  return new Vmandn_mm<uint8_t>(machInst);
                  
                  break;
                
                case 0x19:   
                  // VectorMaskFormat::vmand_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            elem_mask(Vs2_vu, i) & elem_mask(Vs1_vu, i));\n                    ', 'OPMVV', 'SimdAluOp'],{})
                  
                  
                  return new Vmand_mm<uint8_t>(machInst);
                  
                  break;
                
                case 0x1a:   
                  // VectorMaskFormat::vmor_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            elem_mask(Vs2_vu, i) | elem_mask(Vs1_vu, i));\n                    ', 'OPMVV', 'SimdAluOp'],{})
                  
                  
                  return new Vmor_mm<uint8_t>(machInst);
                  
                  break;
                
                case 0x1b:   
                  // VectorMaskFormat::vmxor_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            elem_mask(Vs2_vu, i) ^ elem_mask(Vs1_vu, i));\n                    ', 'OPMVV', 'SimdAluOp'],{})
                  
                  
                  return new Vmxor_mm<uint8_t>(machInst);
                  
                  break;
                
                case 0x1c:   
                  // VectorMaskFormat::vmorn_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            elem_mask(Vs2_vu, i) | !elem_mask(Vs1_vu, i));\n                    ', 'OPMVV', 'SimdAluOp'],{})
                  
                  
                  return new Vmorn_mm<uint8_t>(machInst);
                  
                  break;
                
                case 0x1d:   
                  // VectorMaskFormat::vmnand_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            !(elem_mask(Vs2_vu, i) & elem_mask(Vs1_vu, i)));\n                    ', 'OPMVV', 'SimdAluOp'],{})
                  
                  
                  return new Vmnand_mm<uint8_t>(machInst);
                  
                  break;
                
                case 0x1e:   
                  // VectorMaskFormat::vmnor_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            !(elem_mask(Vs2_vu, i) | elem_mask(Vs1_vu, i)));\n                    ', 'OPMVV', 'SimdAluOp'],{})
                  
                  
                  return new Vmnor_mm<uint8_t>(machInst);
                  
                  break;
                
                case 0x1f:   
                  // VectorMaskFormat::vmxnor_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            !(elem_mask(Vs2_vu, i) ^ elem_mask(Vs1_vu, i)));\n                    ', 'OPMVV', 'SimdAluOp'],{})
                  
                  
                  return new Vmxnor_mm<uint8_t>(machInst);
                  
                  break;
                
                case 0x20:   
                  // VectorIntFormat::vdivu_vv(['\n                        Vd_vu[i] = divu<vu>(Vs2_vu[i], Vs1_vu[i]);\n                    ', 'OPMVV', 'SimdDivOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vdivu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vdivu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vdivu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vdivu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x21:   
                  // VectorIntFormat::vdiv_vv(['\n                        Vd_vi[i] = div<vi>(Vs2_vi[i], Vs1_vi[i]);\n                    ', 'OPMVV', 'SimdDivOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vdiv_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vdiv_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vdiv_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vdiv_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x22:   
                  // VectorIntFormat::vremu_vv(['\n                        Vd_vu[i] = remu<vu>(Vs2_vu[i], Vs1_vu[i]);\n                    ', 'OPMVV', 'SimdDivOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vremu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vremu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vremu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vremu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x23:   
                  // VectorIntFormat::vrem_vv(['\n                        Vd_vi[i] = rem<vi>(Vs2_vi[i], Vs1_vi[i]);\n                    ', 'OPMVV', 'SimdDivOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vrem_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vrem_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vrem_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vrem_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x24:   
                  // VectorIntFormat::vmulhu_vv(['\n                        Vd_vu[i] = mulhu<vu>(Vs2_vu[i], Vs1_vu[i]);\n                    ', 'OPMVV', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmulhu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmulhu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmulhu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmulhu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x25:   
                  // VectorIntFormat::vmul_vv(['\n                        Vd_vi[i] = Vs2_vi[i] * Vs1_vi[i];\n                    ', 'OPMVV', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmul_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmul_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmul_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmul_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x26:   
                  // VectorIntFormat::vmulhsu_vv(['\n                        Vd_vi[i] = mulhsu<vi>(Vs2_vi[i], Vs1_vu[i]);\n                    ', 'OPMVV', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmulhsu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmulhsu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmulhsu_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmulhsu_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x27:   
                  // VectorIntFormat::vmulh_vv(['\n                        Vd_vi[i] = mulh<vi>(Vs2_vi[i], Vs1_vi[i]);\n                    ', 'OPMVV', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmulh_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmulh_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmulh_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmulh_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x29:   
                  // VectorIntFormat::vmadd_vv(['\n                        Vd_vi[i] = Vs3_vi[i] * Vs1_vi[i] + Vs2_vi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmadd_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmadd_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmadd_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmadd_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2b:   
                  // VectorIntFormat::vnmsub_vv(['\n                        Vd_vi[i] = -(Vs3_vi[i] * Vs1_vi[i]) + Vs2_vi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnmsub_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnmsub_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnmsub_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vnmsub_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2d:   
                  // VectorIntFormat::vmacc_vv(['\n                        Vd_vi[i] = Vs2_vi[i] * Vs1_vi[i] + Vs3_vi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmacc_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmacc_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmacc_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmacc_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2f:   
                  // VectorIntFormat::vnmsac_vv(['\n                        Vd_vi[i] = -(Vs2_vi[i] * Vs1_vi[i]) + Vs3_vi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnmsac_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnmsac_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnmsac_vv<uint32_t>(machInst, vlen);
                  case 0b011: return new Vnmsac_vv<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x30:   
                  // VectorIntWideningFormat::vwaddu_vv(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset])\n                                + vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwaddu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwaddu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwaddu_vv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x31:   
                  // VectorIntWideningFormat::vwadd_vv(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset])\n                                + vwi(Vs1_vi[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwadd_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwadd_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwadd_vv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x32:   
                  // VectorIntWideningFormat::vwsubu_vv(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset])\n                                - vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwsubu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwsubu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwsubu_vv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x33:   
                  // VectorIntWideningFormat::vwsub_vv(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset])\n                                - vwi(Vs1_vi[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwsub_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwsub_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwsub_vv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x34:   
                  // VectorIntWideningFormat::vwaddu_wv(['\n                        Vd_vwu[i] = Vs2_vwu[i] + vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwaddu_wv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwaddu_wv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwaddu_wv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x35:   
                  // VectorIntWideningFormat::vwadd_wv(['\n                        Vd_vwi[i] = Vs2_vwi[i] + vwi(Vs1_vi[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwadd_wv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwadd_wv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwadd_wv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x36:   
                  // VectorIntWideningFormat::vwsubu_wv(['\n                        Vd_vwu[i] = Vs2_vwu[i] - vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwsubu_wv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwsubu_wv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwsubu_wv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x37:   
                  // VectorIntWideningFormat::vwsub_wv(['\n                        Vd_vwi[i] = Vs2_vwi[i] - vwi(Vs1_vi[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwsub_wv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwsub_wv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwsub_wv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x38:   
                  // VectorIntWideningFormat::vwmulu_vv(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset])\n                                * vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmulu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmulu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmulu_vv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3a:   
                  // VectorIntWideningFormat::vwmulsu_vv(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset])\n                                * vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmulsu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmulsu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmulsu_vv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3b:   
                  // VectorIntWideningFormat::vwmul_vv(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset])\n                                * vwi(Vs1_vi[i + offset]);\n                    ', 'OPMVV', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmul_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmul_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmul_vv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3c:   
                  // VectorIntWideningFormat::vwmaccu_vv(['\n                        Vd_vwu[i] = vwu(Vs1_vu[i + offset])\n                                * vwu(Vs2_vu[i + offset])\n                                + Vs3_vwu[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmaccu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmaccu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmaccu_vv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3d:   
                  // VectorIntWideningFormat::vwmacc_vv(['\n                        Vd_vwi[i] = vwi(Vs1_vi[i + offset])\n                                * vwi(Vs2_vi[i + offset])\n                                + Vs3_vwi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmacc_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmacc_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmacc_vv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3f:   
                  // VectorIntWideningFormat::vwmaccsu_vv(['\n                        Vd_vwi[i] = vwi(Vs1_vi[i + offset])\n                                * vwu(Vs2_vu[i + offset])\n                                + Vs3_vwi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmaccsu_vv<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmaccsu_vv<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmaccsu_vv<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x3: 
              switch (VFUNCT6) {
                
                case 0x0:   
                  // VectorIntFormat::vadd_vi(['\n                        Vd_vi[i] = Vs2_vi[i] + (vi)sext<5>(SIMM5);\n                    ', 'OPIVI', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vadd_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vadd_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vadd_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vadd_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3:   
                  // VectorIntFormat::vrsub_vi(['\n                        Vd_vi[i] = (vi)sext<5>(SIMM5) - Vs2_vi[i];\n                    ', 'OPIVI', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vrsub_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vrsub_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vrsub_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vrsub_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x9:   
                  // VectorIntFormat::vand_vi(['\n                        Vd_vi[i] = Vs2_vi[i] & (vi)sext<5>(SIMM5);\n                    ', 'OPIVI', 'SimdAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vand_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vand_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vand_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vand_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xa:   
                  // VectorIntFormat::vor_vi(['\n                        Vd_vi[i] = Vs2_vi[i] | (vi)sext<5>(SIMM5);\n                    ', 'OPIVI', 'SimdAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vor_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vor_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vor_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vor_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xb:   
                  // VectorIntFormat::vxor_vi(['\n                        Vd_vi[i] = Vs2_vi[i] ^ (vi)sext<5>(SIMM5);\n                    ', 'OPIVI', 'SimdAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vxor_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vxor_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vxor_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vxor_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xc:   
                  // VectorGatherFormat::vrgather_vi((['\n                    for (uint32_t i = 0; i < microVl; i++) {\n                        uint32_t ei = i + vs1_idx * vs1_elems + vs1_bias;\n                        uint64_t zextImm = rvZext(SIMM5);\n                        if (this->vm || elem_mask(v0, ei)) {\n                            const uint64_t idx = zextImm - vs2_elems * vs2_idx;\n                            if (zextImm >= vlmax)\n                                Vd_vu[i] = 0;\n                            else if (idx < vs2_elems)\n                                Vd_vu[i] = Vs2_vu[idx];\n                        }\n                    }\n                ', 'OPIVI', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          using elem_type [[maybe_unused]] = uint8_t;
                          return new Vrgather_vi<uint8_t, elem_type>(machInst, vlen);
                      }
                      case 0b001: {
                          using elem_type [[maybe_unused]] = uint16_t;
                          return new Vrgather_vi<uint16_t, elem_type>(machInst, vlen);
                      }
                      case 0b010: {
                          using elem_type [[maybe_unused]] = uint32_t;
                          return new Vrgather_vi<uint32_t, elem_type>(machInst, vlen);
                      }
                      case 0b011: {
                          using elem_type [[maybe_unused]] = uint64_t;
                          return new Vrgather_vi<uint64_t, elem_type>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xe:   
                  // VectorSlideUpFormat::vslideup_vi((['\n                    const int offset = (int)(uint64_t)(SIMM5);\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vdIdx - vs2Idx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int elemOffset = vdOffset + vdIdx * microVlmax;\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            if (this->vm || elem_mask(v0, i + elemOffset)) {\n                                Vd_vu[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                            }\n                        }\n                    }\n                ', 'OPIVI', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vslideup_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vslideup_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vslideup_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vslideup_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xf:   
                  // VectorSlideDownFormat::vslidedown_vi((['\n                    const int offset = (int)(uint64_t)(SIMM5);\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vs2Idx - vdIdx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    const int numVs2s = vtype_regs_per_group(vtype);\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const bool needZeroTail = numVs2s == vs2Idx + 1;\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int elemIdxBase = vdIdx * microVlmax;\n                        vreg_t resVreg;\n                        auto res = resVreg.as<vu>();\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            res[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                        }\n                        if (needZeroTail) {\n                            for (int i = upperBound + vdOffset;\n                                i < microVlmax; i++) {\n                                res[i] = 0;\n                            }\n                        }\n                        for (int i = vdOffset; i < microVl ; i++) {\n                            if (vm || elem_mask(v0, i + elemIdxBase)) {\n                                Vd_vu[i] = res[i];\n                            }\n                        }\n                    }\n                ', 'OPIVI', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vslidedown_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vslidedown_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vslidedown_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vslidedown_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x10: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntFormat::vadc_vim(['\n                            Vd_vi[i] = Vs2_vi[i] +\n                                (vi)sext<5>(SIMM5) + elem_mask(v0, ei);\n                        ', 'OPIVI', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vadc_vim<uint8_t>(machInst, vlen);
                      case 0b001: return new Vadc_vim<uint16_t>(machInst, vlen);
                      case 0b010: return new Vadc_vim<uint32_t>(machInst, vlen);
                      case 0b011: return new Vadc_vim<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x17: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntFormat::vmerge_vim(['\n                            Vd_vi[i] = elem_mask(v0, ei)\n                                    ? (vi)sext<5>(SIMM5)\n                                    : Vs2_vi[i];\n                        ', 'OPIVI', 'SimdMiscOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmerge_vim<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmerge_vim<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmerge_vim<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmerge_vim<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x1:   
                      // VectorIntFormat::vmv_v_i(['\n                            Vd_vi[i] = (vi)sext<5>(SIMM5);\n                        ', 'OPIVI', 'SimdMiscOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmv_v_i<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmv_v_i<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmv_v_i<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmv_v_i<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x20:   
                  // VectorIntVxsatFormat::vsaddu_vi(['\n                        Vd_vu[i] = sat_addu<vu>(Vs2_vu[i], (vu)sext<5>(SIMM5),\n                            vxsatptr);\n                    ', 'OPIVI', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsaddu_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsaddu_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsaddu_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsaddu_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x21:   
                  // VectorIntVxsatFormat::vsadd_vi(['\n                        Vd_vi[i] = sat_add<vi>(Vs2_vi[i], (vi)sext<5>(SIMM5),\n                            vxsatptr);\n                    ', 'OPIVI', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsadd_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsadd_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsadd_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsadd_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x25:   
                  // VectorIntFormat::vsll_vi(['\n                        Vd_vu[i] = Vs2_vu[i] << ((vu)SIMM5 & (sew - 1) & 0x1f);\n                    ', 'OPIVI', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsll_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsll_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsll_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsll_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x28:   
                  // VectorIntFormat::vsrl_vi(['\n                        Vd_vu[i] = Vs2_vu[i] >> ((vu)SIMM5 & (sew - 1) & 0x1f);\n                    ', 'OPIVI', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsrl_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsrl_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsrl_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsrl_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2a:   
                  // VectorIntFormat::vssrl_vi(['\n                        int sh = SIMM5 & (vtype_SEW(vtype) - 1);\n                        __uint128_t res = Vs2_vu[i];\n\n                        res = int_rounding<__uint128_t>(\n                            res, 0 /* TODO */, sh) >> sh;\n\n                        Vd_vu[i] = res;\n                    ', 'OPIVI', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vssrl_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vssrl_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vssrl_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vssrl_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x29:   
                  // VectorIntFormat::vsra_vi(['\n                        Vd_vi[i] = Vs2_vi[i] >> ((vu)SIMM5 & (sew - 1) & 0x1f);\n                    ', 'OPIVI', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsra_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsra_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsra_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsra_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2b:   
                  // VectorIntFormat::vssra_vi(['\n                        int sh = SIMM5 & (sew - 1);\n                        __int128_t val = Vs2_vi[i];\n\n                        val = int_rounding<__int128_t>(val,\n                            xc->readMiscReg(MISCREG_VXRM), sh);\n                        Vd_vi[i] = val >> sh;\n                    ', 'OPIVI', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vssra_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vssra_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vssra_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vssra_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x27: 
                  switch (VM) {
                    
                    case 0x1: 
                      switch (SIMM3) {
                        
                        case 0x0:   
                          // VMvWholeFormat::vmv1r_v(['\n                            Vd_ud[i] = Vs2_ud[i];\n                        ', 'OPIVI', 'SimdMiscOp'],{})
                          
                              return new Vmv1r_v(machInst);
                          break;
                        
                        case 0x1:   
                          // VMvWholeFormat::vmv2r_v(['\n                            Vd_ud[i] = Vs2_ud[i];\n                        ', 'OPIVI', 'SimdMiscOp'],{})
                          
                              return new Vmv2r_v(machInst);
                          break;
                        
                        case 0x3:   
                          // VMvWholeFormat::vmv4r_v(['\n                            Vd_ud[i] = Vs2_ud[i];\n                        ', 'OPIVI', 'SimdMiscOp'],{})
                          
                              return new Vmv4r_v(machInst);
                          break;
                        
                        case 0x7:   
                          // VMvWholeFormat::vmv8r_v(['\n                            Vd_ud[i] = Vs2_ud[i];\n                        ', 'OPIVI', 'SimdMiscOp'],{})
                          
                              return new Vmv8r_v(machInst);
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x11: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntMaskFormat::vmadc_vim(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vi[i], (vi)sext<5>(SIMM5),\n                                    elem_mask(v0, ei)));\n                        ', 'OPIVI', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmadc_vim<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmadc_vim<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmadc_vim<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmadc_vim<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x1:   
                      // VectorIntMaskFormat::vmadc_vi(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vi[i], (vi)sext<5>(SIMM5)));\n                        ', 'OPIVI', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmadc_vi<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmadc_vi<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmadc_vi<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmadc_vi<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x18:   
                  // VectorIntMaskFormat::vmseq_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] == (vi)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmseq_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmseq_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmseq_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmseq_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x19:   
                  // VectorIntMaskFormat::vmsne_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] != (vi)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsne_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsne_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsne_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsne_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1c:   
                  // VectorIntMaskFormat::vmsleu_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] <= (vu)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsleu_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsleu_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsleu_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsleu_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1d:   
                  // VectorIntMaskFormat::vmsle_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] <= (vi)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsle_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsle_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsle_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsle_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1e:   
                  // VectorIntMaskFormat::vmsgtu_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] > (vu)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsgtu_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsgtu_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsgtu_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsgtu_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1f:   
                  // VectorIntMaskFormat::vmsgt_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] > (vi)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsgt_vi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsgt_vi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsgt_vi<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsgt_vi<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2c:   
                  // VectorIntNarrowingFormat::vnsrl_wi(['\n                        Vd_vu[i + offset] = (vu)(Vs2_vwu[i] >>\n                                            ((vwu)SIMM5 & (sew * 2 - 1)));\n                    ', 'OPIVI', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnsrl_wi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnsrl_wi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnsrl_wi<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2d:   
                  // VectorIntNarrowingFormat::vnsra_wi(['\n                        Vd_vi[i + offset] = (vi)(Vs2_vwi[i] >>\n                                            ((vwu)SIMM5 & (sew * 2 - 1)));\n                    ', 'OPIVI', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnsra_wi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnsra_wi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnsra_wi<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2e:   
                  // VectorIntNarrowingFormat::vnclipu_wi(['\n                        vu max = std::numeric_limits<vu>::max();\n                        uint64_t sign_mask =\n                            std::numeric_limits<uint64_t>::max() << sew;\n                        __uint128_t res = Vs2_vwu[i];\n                        unsigned shift = VS1 & ((sew * 2) - 1);\n\n                        res = int_rounding<__uint128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res & sign_mask) {\n                            // TODO: vxsat\n                            res = max;\n                        }\n\n                        Vd_vu[i + offset] = (vu)res;\n                    ', 'OPIVI', 'SimdCvtOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnclipu_wi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnclipu_wi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnclipu_wi<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2f:   
                  // VectorIntNarrowingFormat::vnclip_wi(['\n                        vi max = std::numeric_limits<vi>::max();\n                        vi min = std::numeric_limits<vi>::min();\n                        __int128_t res = Vs2_vwi[i];\n                        unsigned shift = VS1 & ((sew * 2) - 1);\n\n                        res = int_rounding<__int128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res < min) {\n                            res = min;\n                            // TODO: vxsat\n                        } else if (res > max) {\n                            res = max;\n                            // TODO: vxsat\n                        }\n\n                        Vd_vi[i + offset] = (vi)res;\n                    ', 'OPIVI', 'SimdCvtOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnclip_wi<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnclip_wi<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnclip_wi<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x4: 
              switch (VFUNCT6) {
                
                case 0x0:   
                  // VectorIntFormat::vadd_vx(['\n                        Vd_vu[i] = Vs2_vu[i] + Rs1_vu;\n                    ', 'OPIVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vadd_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vadd_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vadd_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vadd_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VectorIntFormat::vsub_vx(['\n                        Vd_vu[i] = Vs2_vu[i] - Rs1_vu;\n                    ', 'OPIVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsub_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsub_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsub_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsub_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3:   
                  // VectorIntFormat::vrsub_vx(['\n                        Vd_vu[i] = Rs1_vu - Vs2_vu[i];\n                    ', 'OPIVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vrsub_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vrsub_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vrsub_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vrsub_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x4:   
                  // VectorIntFormat::vminu_vx(['\n                        Vd_vu[i] = std::min(Vs2_vu[i], Rs1_vu);\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vminu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vminu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vminu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vminu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x5:   
                  // VectorIntFormat::vmin_vx(['\n                        Vd_vi[i] = std::min(Vs2_vi[i], Rs1_vi);\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmin_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmin_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmin_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmin_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x6:   
                  // VectorIntFormat::vmaxu_vx(['\n                        Vd_vu[i] = std::max(Vs2_vu[i], Rs1_vu);\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmaxu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmaxu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmaxu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmaxu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x7:   
                  // VectorIntFormat::vmax_vx(['\n                        Vd_vi[i] = std::max(Vs2_vi[i], Rs1_vi);\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmax_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmax_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmax_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmax_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x9:   
                  // VectorIntFormat::vand_vx(['\n                        Vd_vu[i] = Vs2_vu[i] & Rs1_vu;\n                    ', 'OPIVX', 'SimdAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vand_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vand_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vand_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vand_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xa:   
                  // VectorIntFormat::vor_vx(['\n                        Vd_vu[i] = Vs2_vu[i] | Rs1_vu;\n                    ', 'OPIVX', 'SimdAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vor_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vor_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vor_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vor_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xb:   
                  // VectorIntFormat::vxor_vx(['\n                        Vd_vu[i] = Vs2_vu[i] ^ Rs1_vu;\n                    ', 'OPIVX', 'SimdAluOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vxor_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vxor_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vxor_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vxor_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xe:   
                  // VectorSlideUpFormat::vslideup_vx((['\n                    const int offset = (int)Rs1_vu;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vdIdx - vs2Idx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int elemOffset = vdOffset + vdIdx * microVlmax;\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            if (this->vm || elem_mask(v0, i + elemOffset)) {\n                                Vd_vu[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                            }\n                        }\n                    }\n                ', 'OPIVX', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vslideup_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vslideup_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vslideup_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vslideup_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xf:   
                  // VectorSlideDownFormat::vslidedown_vx((['\n                    const int offset = (int)Rs1_vu;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vs2Idx - vdIdx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    const int numVs2s = vtype_regs_per_group(vtype);\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const bool needZeroTail = numVs2s == vs2Idx + 1;\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int elemIdxBase = vdIdx * microVlmax;\n                        vreg_t resVreg;\n                        auto res = resVreg.as<vu>();\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            res[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                        }\n                        if (needZeroTail) {\n                            for (int i = upperBound + vdOffset;\n                                i < microVlmax; i++) {\n                                res[i] = 0;\n                            }\n                        }\n                        for (int i = vdOffset; i < microVl ; i++) {\n                            if (vm || elem_mask(v0, i + elemIdxBase)) {\n                                Vd_vu[i] = res[i];\n                            }\n                        }\n                    }\n                ', 'OPIVX', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vslidedown_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vslidedown_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vslidedown_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vslidedown_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xc:   
                  // VectorGatherFormat::vrgather_vx((['\n                    for (uint32_t i = 0; i < microVl; i++) {\n                        uint32_t ei = i + vs1_idx * vs1_elems + vs1_bias;\n                        uint64_t zextRs1 = rvZext(Rs1);\n                        if (this->vm || elem_mask(v0, ei)) {\n                            const uint64_t idx = zextRs1 - vs2_elems * vs2_idx;\n                            if (zextRs1 >= vlmax)\n                                Vd_vu[i] = 0;\n                            else if (idx < vs2_elems)\n                                Vd_vu[i] = Vs2_vu[idx];\n                        }\n                    }\n                ', 'OPIVX', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                      case 0b000: {
                          using elem_type [[maybe_unused]] = uint8_t;
                          return new Vrgather_vx<uint8_t, elem_type>(machInst, vlen);
                      }
                      case 0b001: {
                          using elem_type [[maybe_unused]] = uint16_t;
                          return new Vrgather_vx<uint16_t, elem_type>(machInst, vlen);
                      }
                      case 0b010: {
                          using elem_type [[maybe_unused]] = uint32_t;
                          return new Vrgather_vx<uint32_t, elem_type>(machInst, vlen);
                      }
                      case 0b011: {
                          using elem_type [[maybe_unused]] = uint64_t;
                          return new Vrgather_vx<uint64_t, elem_type>(machInst, vlen);
                      }
                      default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x10: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntFormat::vadc_vxm(['\n                            Vd_vi[i] = Vs2_vi[i] + Rs1_vi + elem_mask(v0, ei);\n                        ', 'OPIVX', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vadc_vxm<uint8_t>(machInst, vlen);
                      case 0b001: return new Vadc_vxm<uint16_t>(machInst, vlen);
                      case 0b010: return new Vadc_vxm<uint32_t>(machInst, vlen);
                      case 0b011: return new Vadc_vxm<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x12: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntFormat::vsbc_vxm(['\n                            Vd_vi[i] = Vs2_vi[i] - Rs1_vi - elem_mask(v0, ei);\n                        ', 'OPIVX', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vsbc_vxm<uint8_t>(machInst, vlen);
                      case 0b001: return new Vsbc_vxm<uint16_t>(machInst, vlen);
                      case 0b010: return new Vsbc_vxm<uint32_t>(machInst, vlen);
                      case 0b011: return new Vsbc_vxm<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x17: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntFormat::vmerge_vxm(['\n                            Vd_vu[i] = elem_mask(v0, ei) ? Rs1_vu : Vs2_vu[i];\n                        ', 'OPIVX', 'SimdMiscOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmerge_vxm<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmerge_vxm<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmerge_vxm<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmerge_vxm<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x1: 
                      switch (VS2) {
                        
                        case 0x0:   
                          // VectorIntFormat::vmv_v_x(['\n                                Vd_vu[i] = Rs1_vu;\n                            ', 'OPIVX', 'SimdMiscOp'],{})
                          
                          
                          switch(machInst.vtype8.vsew) {
                          case 0b000: return new Vmv_v_x<uint8_t>(machInst, vlen);
                          case 0b001: return new Vmv_v_x<uint16_t>(machInst, vlen);
                          case 0b010: return new Vmv_v_x<uint32_t>(machInst, vlen);
                          case 0b011: return new Vmv_v_x<uint64_t>(machInst, vlen);
                          default: GEM5_UNREACHABLE;
                          }
                          
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x20:   
                  // VectorIntVxsatFormat::vsaddu_vx(['\n                        Vd_vu[i] = sat_addu<vu>(Vs2_vu[i], Rs1_vu,\n                            vxsatptr);\n                    ', 'OPIVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsaddu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsaddu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsaddu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsaddu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x21:   
                  // VectorIntVxsatFormat::vsadd_vx(['\n                        Vd_vu[i] = sat_add<vi>(Vs2_vu[i], Rs1_vu,\n                            vxsatptr);\n                    ', 'OPIVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsadd_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsadd_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsadd_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsadd_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x22:   
                  // VectorIntVxsatFormat::vssubu_vx(['\n                        Vd_vu[i] = sat_subu<vu>(Vs2_vu[i], Rs1_vu,\n                            vxsatptr);\n                    ', 'OPIVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vssubu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vssubu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vssubu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vssubu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x23:   
                  // VectorIntVxsatFormat::vssub_vx(['\n                        Vd_vu[i] = sat_sub<vi>(Vs2_vu[i], Rs1_vu,\n                            vxsatptr);\n                    ', 'OPIVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vssub_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vssub_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vssub_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vssub_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x27:   
                  // VectorIntVxsatFormat::vsmul_vx(['\n                        vi max = std::numeric_limits<vi>::max();\n                        vi min = std::numeric_limits<vi>::min();\n                        bool overflow = Rs1_vi == Vs2_vi[i] && Rs1_vi == min;\n                        __int128_t result =\n                            (__int128_t)Rs1_vi * (__int128_t)Vs2_vi[i];\n                        result = int_rounding<__uint128_t>(\n                            result, 0 /* TODO */, sew - 1);\n                        result = result >> (sew - 1);\n                        if (overflow) {\n                            result = max;\n                            *vxsatptr = true;\n                        }\n\n                        Vd_vi[i] = (vi)result;\n                    ', 'OPIVX', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsmul_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsmul_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsmul_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsmul_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x25:   
                  // VectorIntFormat::vsll_vx(['\n                        Vd_vu[i] = Vs2_vu[i] << (Rs1_vu & (sew - 1));\n                    ', 'OPIVX', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsll_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsll_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsll_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsll_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x28:   
                  // VectorIntFormat::vsrl_vx(['\n                        Vd_vu[i] = Vs2_vu[i] >> (Rs1_vu & (sew - 1));\n                    ', 'OPIVX', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsrl_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsrl_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsrl_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsrl_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x29:   
                  // VectorIntFormat::vsra_vx(['\n                        Vd_vi[i] = Vs2_vi[i] >> (Rs1_vu & (sew - 1));\n                    ', 'OPIVX', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vsra_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vsra_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vsra_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vsra_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2a:   
                  // VectorIntFormat::vssrl_vx(['\n                        int sh = Rs1_vu & (sew - 1);\n                        __uint128_t val = Vs2_vu[i];\n\n                        val = int_rounding<__uint128_t>(val,\n                            xc->readMiscReg(MISCREG_VXRM), sh);\n                        Vd_vu[i] = val >> sh;\n                    ', 'OPIVX', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vssrl_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vssrl_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vssrl_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vssrl_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2b:   
                  // VectorIntFormat::vssra_vx(['\n                        int sh = Rs1_vu & (sew - 1);\n                        __int128_t val = Vs2_vi[i];\n\n                        val = int_rounding<__int128_t>(val,\n                            xc->readMiscReg(MISCREG_VXRM), sh);\n                        Vd_vi[i] = val >> sh;\n                    ', 'OPIVX', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vssra_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vssra_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vssra_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vssra_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2c:   
                  // VectorIntNarrowingFormat::vnsrl_wx(['\n                        Vd_vu[i + offset] = (vu)(Vs2_vwu[i] >>\n                                            ((vwu)Rs1_vu & (sew * 2 - 1)));\n                    ', 'OPIVX', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnsrl_wx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnsrl_wx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnsrl_wx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2d:   
                  // VectorIntNarrowingFormat::vnsra_wx(['\n                        Vd_vi[i + offset] = (vi)(Vs2_vwi[i] >>\n                                            ((vwu)Rs1_vu & (sew * 2 - 1)));\n                    ', 'OPIVX', 'SimdShiftOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnsra_wx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnsra_wx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnsra_wx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2e:   
                  // VectorIntNarrowingFormat::vnclipu_wx(['\n                        vu max = std::numeric_limits<vu>::max();\n                        uint64_t sign_mask =\n                            std::numeric_limits<uint64_t>::max() << sew;\n                        __uint128_t res = Vs2_vwu[i];\n                        unsigned shift = Rs1_vu & ((sew * 2) - 1);\n\n                        res = int_rounding<__uint128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res & sign_mask) {\n                            // TODO: vxsat\n                            res = max;\n                        }\n\n                        Vd_vu[i + offset] = (vu)res;\n                    ', 'OPIVX', 'SimdCvtOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnclipu_wx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnclipu_wx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnclipu_wx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2f:   
                  // VectorIntNarrowingFormat::vnclip_wx(['\n                        vi max = std::numeric_limits<vi>::max();\n                        vi min = std::numeric_limits<vi>::min();\n                        __int128_t res = Vs2_vwi[i];\n                        unsigned shift = Rs1_vi & ((sew * 2) - 1);\n\n                        res = int_rounding<__int128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res < min) {\n                            res = min;\n                            // TODO: vxsat\n                        } else if (res > max) {\n                            res = max;\n                            // TODO: vxsat\n                        }\n\n                        Vd_vi[i + offset] = (vi)res;\n                    ', 'OPIVX', 'SimdCvtOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnclip_wx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnclip_wx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnclip_wx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x11: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntMaskFormat::vmadc_vxm(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vi[i], Rs1_vi,\n                                    elem_mask(v0, ei)));\n                        ', 'OPIVX', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmadc_vxm<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmadc_vxm<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmadc_vxm<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmadc_vxm<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x1:   
                      // VectorIntMaskFormat::vmadc_vx(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vi[i], Rs1_vi));\n                        ', 'OPIVX', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmadc_vx<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmadc_vx<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmadc_vx<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmadc_vx<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x13: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorIntMaskFormat::vmsbc_vxm(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                borrow_out(Vs2_vi[i], Rs1_vi,\n                                    elem_mask(v0, ei)));\n                        ', 'OPIVX', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmsbc_vxm<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmsbc_vxm<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmsbc_vxm<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmsbc_vxm<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x1:   
                      // VectorIntMaskFormat::vmsbc_vx(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                borrow_out(Vs2_vi[i], Rs1_vi));\n                        ', 'OPIVX', 'SimdAddOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b000: return new Vmsbc_vx<uint8_t>(machInst, vlen);
                      case 0b001: return new Vmsbc_vx<uint16_t>(machInst, vlen);
                      case 0b010: return new Vmsbc_vx<uint32_t>(machInst, vlen);
                      case 0b011: return new Vmsbc_vx<uint64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x18:   
                  // VectorIntMaskFormat::vmseq_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] == Rs1_vu));\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmseq_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmseq_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmseq_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmseq_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x19:   
                  // VectorIntMaskFormat::vmsne_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] != Rs1_vu));\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsne_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsne_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsne_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsne_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1a:   
                  // VectorIntMaskFormat::vmsltu_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] < Rs1_vu));\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsltu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsltu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsltu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsltu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1b:   
                  // VectorIntMaskFormat::vmslt_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] < Rs1_vi));\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmslt_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmslt_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmslt_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmslt_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1c:   
                  // VectorIntMaskFormat::vmsleu_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] <= Rs1_vu));\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsleu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsleu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsleu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsleu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1d:   
                  // VectorIntMaskFormat::vmsle_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] <= Rs1_vi));\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsle_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsle_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsle_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsle_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1e:   
                  // VectorIntMaskFormat::vmsgtu_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] > Rs1_vu));\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsgtu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsgtu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsgtu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsgtu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1f:   
                  // VectorIntMaskFormat::vmsgt_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] > Rs1_vi));\n                    ', 'OPIVX', 'SimdCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmsgt_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmsgt_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmsgt_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmsgt_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x5: 
              switch (VFUNCT6) {
                
                case 0x0:   
                  // VectorFloatFormat::vfadd_vf(['\n                        auto fd = fadd<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfadd_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfadd_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfadd_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2:   
                  // VectorFloatFormat::vfsub_vf(['\n                        auto fd = fsub<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfsub_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfsub_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfsub_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x4:   
                  // VectorFloatFormat::vfmin_vf(['\n                        auto fd = fmin<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmin_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmin_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmin_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x6:   
                  // VectorFloatFormat::vfmax_vf(['\n                        auto fd = fmax<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                            Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmax_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmax_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmax_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x8:   
                  // VectorFloatFormat::vfsgnj_vf(['\n                        Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                             ftype_freg<et>(freg(Fs1_bits)),\n                                             false, false).v;\n                    ', 'OPFVF', 'SimdFloatExtOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfsgnj_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfsgnj_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfsgnj_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x9:   
                  // VectorFloatFormat::vfsgnjn_vf(['\n                        Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                             ftype_freg<et>(freg(Fs1_bits)),\n                                             true, false).v;\n                    ', 'OPFVF', 'SimdFloatExtOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfsgnjn_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfsgnjn_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfsgnjn_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xa:   
                  // VectorFloatFormat::vfsgnjx_vf(['\n                        Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                             ftype_freg<et>(freg(Fs1_bits)),\n                                             false, true).v;\n                    ', 'OPFVF', 'SimdFloatExtOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfsgnjx_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfsgnjx_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfsgnjx_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xe:   
                  // VectorFloatSlideUpFormat::vfslide1up_vf((['\n                    const int offset = 1;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vdIdx - vs2Idx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int elemOffset = vdOffset + vdIdx * microVlmax;\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            if (this->vm || elem_mask(v0, i + elemOffset)) {\n                                Vd_vu[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                            }\n                        }\n                        // TODO: dirty code\n                        if (vdIdx == 0 && vs2Idx == 0 &&\n                                (this->vm || elem_mask(v0, 0))) {\n                            tmp_d0.as<vu>()[0] = Rs1_vu;\n                        }\n                    }\n                ', 'OPFVF', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfslide1up_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfslide1up_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfslide1up_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xf:   
                  // VectorFloatSlideDownFormat::vfslide1down_vf((['\n                    const int offset = 1;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vs2Idx - vdIdx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    const int numVs2s = vtype_regs_per_group(vtype);\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const bool needZeroTail = numVs2s == vs2Idx + 1;\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int elemIdxBase = vdIdx * microVlmax;\n                        vreg_t resVreg;\n                        auto res = resVreg.as<vu>();\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            res[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                        }\n                        if (needZeroTail) {\n                            for (int i = upperBound + vdOffset;\n                                i < microVlmax; i++) {\n                                res[i] = 0;\n                            }\n                        }\n                        for (int i = vdOffset; i < microVl ; i++) {\n                            if (vm || elem_mask(v0, i + elemIdxBase)) {\n                                Vd_vu[i] = (i + elemIdxBase != machInst.vl - 1)\n                                    ? res[i]\n                                    : Rs1_vu;\n                            }\n                        }\n                    }\n                ', 'OPFVF', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfslide1down_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfslide1down_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfslide1down_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x10: 
                  switch (VS2) {
                    
                    case 0x0: 
                      switch (VM) {
                        
                        case 0x1:   
                          // VectorNonSplitFormat::vfmv_s_f((['\n                            if (this->vl) {\n                                auto fd = ftype_freg<et>(freg(Fs1_bits));\n                                Vd_vu[0] = fd.v;\n                            }\n                        ', 'OPFVV', 'SimdMiscOp'], {}))
                          
                          
                          switch(machInst.vtype8.vsew) {
                          case 0b001: return new Vfmv_s_f<float16_t>(machInst);
                          case 0b010: return new Vfmv_s_f<float32_t>(machInst);
                          case 0b011: return new Vfmv_s_f<float64_t>(machInst);
                          default: GEM5_UNREACHABLE;
                          }
                          
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x17: 
                  switch (VM) {
                    
                    case 0x0:   
                      // VectorFloatFormat::vfmerge_vfm(['\n                            Vd_vu[i] = elem_mask(v0, ei)\n                                    ? ftype_freg<et>(freg(Fs1_bits)).v\n                                    : Vs2_vu[i];\n                        ', 'OPFVF', 'SimdMiscOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfmerge_vfm<float16_t>(machInst, vlen);
                      case 0b010: return new Vfmerge_vfm<float32_t>(machInst, vlen);
                      case 0b011: return new Vfmerge_vfm<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    case 0x1:   
                      // VectorFloatFormat::vfmv_v_f(['\n                            auto fd = ftype_freg<et>(freg(Fs1_bits));\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVF', 'SimdMiscOp'],{})
                      
                      
                      switch(machInst.vtype8.vsew) {
                      case 0b001: return new Vfmv_v_f<float16_t>(machInst, vlen);
                      case 0b010: return new Vfmv_v_f<float32_t>(machInst, vlen);
                      case 0b011: return new Vfmv_v_f<float64_t>(machInst, vlen);
                      default: GEM5_UNREACHABLE;
                      }
                      
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x18:   
                  // VectorFloatMaskFormat::vmfeq_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            feq<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype_freg<et>(freg(Fs1_bits))));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vmfeq_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vmfeq_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vmfeq_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x19:   
                  // VectorFloatMaskFormat::vmfle_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            fle<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype_freg<et>(freg(Fs1_bits))));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vmfle_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vmfle_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vmfle_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1b:   
                  // VectorFloatMaskFormat::vmflt_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            flt<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype_freg<et>(freg(Fs1_bits))));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vmflt_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vmflt_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vmflt_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1c:   
                  // VectorFloatMaskFormat::vmfne_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            !feq<et>(ftype<et>(Vs2_vu[i]),\n                                     ftype_freg<et>(freg(Fs1_bits))));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vmfne_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vmfne_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vmfne_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1d:   
                  // VectorFloatMaskFormat::vmfgt_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            flt<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                    ftype<et>(Vs2_vu[i])));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vmfgt_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vmfgt_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vmfgt_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x1f:   
                  // VectorFloatMaskFormat::vmfge_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            fle<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                    ftype<et>(Vs2_vu[i])));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vmfge_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vmfge_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vmfge_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x20:   
                  // VectorFloatFormat::vfdiv_vf(['\n                        auto fd = fdiv<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatDivOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfdiv_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfdiv_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfdiv_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x21:   
                  // VectorFloatFormat::vfrdiv_vf(['\n                        auto fd = fdiv<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                           ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatDivOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfrdiv_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfrdiv_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfrdiv_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x24:   
                  // VectorFloatFormat::vfmul_vf(['\n                        auto fd = fmul<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmul_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmul_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmul_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x27:   
                  // VectorFloatFormat::vfrsub_vf(['\n                        auto fd = fsub<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                           ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfrsub_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfrsub_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfrsub_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x28:   
                  // VectorFloatFormat::vfmadd_vf(['\n                        auto fd = fmadd<et>(ftype<et>(Vs3_vu[i]),\n                                            ftype_freg<et>(freg(Fs1_bits)),\n                                            ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmadd_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmadd_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmadd_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x29:   
                  // VectorFloatFormat::vfnmadd_vf(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs3_vu[i])),\n                                            ftype_freg<et>(freg(Fs1_bits)),\n                                            fneg(ftype<et>(Vs2_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfnmadd_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfnmadd_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfnmadd_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2a:   
                  // VectorFloatFormat::vfmsub_vf(['\n                        auto fd = fmadd<et>(ftype<et>(Vs3_vu[i]),\n                                            ftype_freg<et>(freg(Fs1_bits)),\n                                            fneg(ftype<et>(Vs2_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmsub_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmsub_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmsub_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2b:   
                  // VectorFloatFormat::vfnmsub_vf(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs3_vu[i])),\n                                            ftype_freg<et>(freg(Fs1_bits)),\n                                            ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfnmsub_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfnmsub_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfnmsub_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2c:   
                  // VectorFloatFormat::vfmacc_vf(['\n                        auto fd = fmadd<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                            ftype<et>(Vs2_vu[i]),\n                                            ftype<et>(Vs3_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmacc_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmacc_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmacc_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2d:   
                  // VectorFloatFormat::vfnmacc_vf(['\n                        auto fd = fmadd<et>(\n                            fneg(ftype_freg<et>(freg(Fs1_bits))),\n                            ftype<et>(Vs2_vu[i]),\n                            fneg(ftype<et>(Vs3_vu[i]))\n                        );\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfnmacc_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfnmacc_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfnmacc_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2e:   
                  // VectorFloatFormat::vfmsac_vf(['\n                        auto fd = fmadd<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                            ftype<et>(Vs2_vu[i]),\n                                            fneg(ftype<et>(Vs3_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfmsac_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfmsac_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfmsac_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2f:   
                  // VectorFloatFormat::vfnmsac_vf(['\n                        auto fd = fmadd<et>(\n                            fneg(ftype_freg<et>(freg(Fs1_bits))),\n                            ftype<et>(Vs2_vu[i]),\n                            ftype<et>(Vs3_vu[i])\n                        );\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfnmsac_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfnmsac_vf<float32_t>(machInst, vlen);
                  case 0b011: return new Vfnmsac_vf<float64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x30:   
                  // VectorFloatWideningFormat::vfwadd_vf(['\n                        auto fd = fadd<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwadd_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwadd_vf<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x32:   
                  // VectorFloatWideningFormat::vfwsub_vf(['\n                        auto fd = fsub<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwsub_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwsub_vf<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x34:   
                  // VectorFloatWideningFormat::vfwadd_wf(['\n                        auto fd = fadd<ewt>(\n                            ftype<ewt>(Vs2_vwu[i]),\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwadd_wf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwadd_wf<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x36:   
                  // VectorFloatWideningFormat::vfwsub_wf(['\n                        auto fd = fsub<ewt>(\n                            ftype<ewt>(Vs2_vwu[i]),\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwsub_wf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwsub_wf<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x38:   
                  // VectorFloatWideningFormat::vfwmul_vf(['\n                        auto fd = fmul<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwmul_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwmul_vf<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3c:   
                  // VectorFloatWideningFormat::vfwmacc_vf(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            ftype<ewt>(Vs3_vwu[i]));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwmacc_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwmacc_vf<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3d:   
                  // VectorFloatWideningFormat::vfwnmacc_vf(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(fneg(ftype_freg<et>(freg(Fs1_bits)))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fneg(ftype<ewt>(Vs3_vwu[i])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwnmacc_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwnmacc_vf<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3e:   
                  // VectorFloatWideningFormat::vfwmsac_vf(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fneg(ftype<ewt>(Vs3_vwu[i])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwmsac_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwmsac_vf<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3f:   
                  // VectorFloatWideningFormat::vfwnmsac_vf(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(fneg(ftype_freg<et>(freg(Fs1_bits)))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            ftype<ewt>(Vs3_vwu[i]));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b001: return new Vfwnmsac_vf<float16_t>(machInst, vlen);
                  case 0b010: return new Vfwnmsac_vf<float32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x6: 
              switch (VFUNCT6) {
                
                case 0x8:   
                  // VectorIntFormat::vaaddu_vx(['\n                        __uint128_t res = (__uint128_t)Vs2_vu[i] + Rs1_vu;\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vu[i] = res >> 1;\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vaaddu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vaaddu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vaaddu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vaaddu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x9:   
                  // VectorIntFormat::vaadd_vx(['\n                        __uint128_t res = (__uint128_t)Vs2_vi[i] + Rs1_vi;\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vi[i] = res >> 1;\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vaadd_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vaadd_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vaadd_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vaadd_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xe:   
                  // VectorSlideUpFormat::vslide1up_vx((['\n                    const int offset = 1;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vdIdx - vs2Idx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int elemOffset = vdOffset + vdIdx * microVlmax;\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            if (this->vm || elem_mask(v0, i + elemOffset)) {\n                                Vd_vu[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                            }\n                        }\n                        // TODO: dirty code\n                        if (vdIdx == 0 && vs2Idx == 0 &&\n                                (this->vm || elem_mask(v0, 0))) {\n                            tmp_d0.as<vu>()[0] = Rs1_vu;\n                        }\n                    }\n                ', 'OPIVX', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vslide1up_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vslide1up_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vslide1up_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vslide1up_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xf:   
                  // VectorSlideDownFormat::vslide1down_vx((['\n                    const int offset = 1;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vs2Idx - vdIdx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    const int numVs2s = vtype_regs_per_group(vtype);\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const bool needZeroTail = numVs2s == vs2Idx + 1;\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int elemIdxBase = vdIdx * microVlmax;\n                        vreg_t resVreg;\n                        auto res = resVreg.as<vu>();\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            res[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                        }\n                        if (needZeroTail) {\n                            for (int i = upperBound + vdOffset;\n                                i < microVlmax; i++) {\n                                res[i] = 0;\n                            }\n                        }\n                        for (int i = vdOffset; i < microVl ; i++) {\n                            if (vm || elem_mask(v0, i + elemIdxBase)) {\n                                Vd_vu[i] = (i + elemIdxBase != machInst.vl - 1)\n                                    ? res[i]\n                                    : Rs1_vu;\n                            }\n                        }\n                    }\n                ', 'OPIVX', 'SimdMiscOp'], {}))
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vslide1down_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vslide1down_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vslide1down_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vslide1down_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x10: 
                  switch (VS2) {
                    
                    case 0x0: 
                      switch (VM) {
                        
                        case 0x1:   
                          // VectorNonSplitFormat::vmv_s_x((['\n                            if (this->vl) {\n                                Vd_vu[0] = Rs1_vu;\n                            }\n                        ', 'OPMVX', 'SimdMiscOp'], {}))
                          
                          
                          switch(machInst.vtype8.vsew) {
                          case 0b000: return new Vmv_s_x<uint8_t>(machInst);
                          case 0b001: return new Vmv_s_x<uint16_t>(machInst);
                          case 0b010: return new Vmv_s_x<uint32_t>(machInst);
                          case 0b011: return new Vmv_s_x<uint64_t>(machInst);
                          default: GEM5_UNREACHABLE;
                          }
                          
                          break;
                        
                        default:
                          
                          // Unknown::unknown(([], {}))
                          return new Unknown(machInst);
                          break;
                        }
                      GEM5_UNREACHABLE;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0xa:   
                  // VectorIntFormat::vasubu_vx(['\n                        __uint128_t res = (__uint128_t)Vs2_vu[i] - Rs1_vu;\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vu[i] = res >> 1;\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vasubu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vasubu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vasubu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vasubu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0xb:   
                  // VectorIntFormat::vasub_vx(['\n                        __uint128_t res = (__uint128_t)Vs2_vi[i] - Rs1_vi;\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vi[i] = res >> 1;\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vasub_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vasub_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vasub_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vasub_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x20:   
                  // VectorIntFormat::vdivu_vx(['\n                        Vd_vu[i] = divu<vu>(Vs2_vu[i], Rs1_vu);\n                    ', 'OPMVX', 'SimdDivOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vdivu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vdivu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vdivu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vdivu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x21:   
                  // VectorIntFormat::vdiv_vx(['\n                        Vd_vi[i] = div<vi>(Vs2_vi[i], Rs1_vi);\n                    ', 'OPMVX', 'SimdDivOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vdiv_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vdiv_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vdiv_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vdiv_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x22:   
                  // VectorIntFormat::vremu_vx(['\n                        Vd_vu[i] = remu<vu>(Vs2_vu[i], Rs1_vu);\n                    ', 'OPMVX', 'SimdDivOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vremu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vremu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vremu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vremu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x23:   
                  // VectorIntFormat::vrem_vx(['\n                        Vd_vi[i] = rem<vi>(Vs2_vi[i], Rs1_vi);\n                    ', 'OPMVX', 'SimdDivOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vrem_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vrem_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vrem_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vrem_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x24:   
                  // VectorIntFormat::vmulhu_vx(['\n                        Vd_vu[i] = mulhu<vu>(Vs2_vu[i], Rs1_vu);\n                    ', 'OPMVX', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmulhu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmulhu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmulhu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmulhu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x25:   
                  // VectorIntFormat::vmul_vx(['\n                        Vd_vi[i] = Vs2_vi[i] * Rs1_vi;\n                    ', 'OPMVX', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmul_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmul_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmul_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmul_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x26:   
                  // VectorIntFormat::vmulhsu_vx(['\n                        Vd_vi[i] = mulhsu<vi>(Vs2_vi[i], Rs1_vu);\n                    ', 'OPMVX', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmulhsu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmulhsu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmulhsu_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmulhsu_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x27:   
                  // VectorIntFormat::vmulh_vx(['\n                        Vd_vi[i] = mulh<vi>(Vs2_vi[i], Rs1_vi);\n                    ', 'OPMVX', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmulh_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmulh_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmulh_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmulh_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x29:   
                  // VectorIntFormat::vmadd_vx(['\n                        Vd_vi[i] = Vs3_vi[i] * Rs1_vi + Vs2_vi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmadd_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmadd_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmadd_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmadd_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2b:   
                  // VectorIntFormat::vnmsub_vx(['\n                        Vd_vi[i] = -(Vs3_vi[i] * Rs1_vi) + Vs2_vi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnmsub_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnmsub_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnmsub_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vnmsub_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2d:   
                  // VectorIntFormat::vmacc_vx(['\n                        Vd_vi[i] = Vs2_vi[i] * Rs1_vi + Vs3_vi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vmacc_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vmacc_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vmacc_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vmacc_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x2f:   
                  // VectorIntFormat::vnmsac_vx(['\n                        Vd_vi[i] = -(Vs2_vi[i] * Rs1_vi) + Vs3_vi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vnmsac_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vnmsac_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vnmsac_vx<uint32_t>(machInst, vlen);
                  case 0b011: return new Vnmsac_vx<uint64_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x30:   
                  // VectorIntWideningFormat::vwaddu_vx(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset]) + vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwaddu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwaddu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwaddu_vx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x31:   
                  // VectorIntWideningFormat::vwadd_vx(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset]) + vwi(Rs1_vi);\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwadd_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwadd_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwadd_vx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x32:   
                  // VectorIntWideningFormat::vwsubu_vx(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset]) - vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwsubu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwsubu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwsubu_vx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x33:   
                  // VectorIntWideningFormat::vwsub_vx(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset]) - vwi(Rs1_vi);\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwsub_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwsub_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwsub_vx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x34:   
                  // VectorIntWideningFormat::vwaddu_wx(['\n                        Vd_vwu[i] = Vs2_vwu[i] + vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwaddu_wx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwaddu_wx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwaddu_wx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x35:   
                  // VectorIntWideningFormat::vwadd_wx(['\n                        Vd_vwi[i] = Vs2_vwi[i] + vwi(Rs1_vi);\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwadd_wx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwadd_wx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwadd_wx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x36:   
                  // VectorIntWideningFormat::vwsubu_wx(['\n                        Vd_vwu[i] = Vs2_vwu[i] - vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwsubu_wx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwsubu_wx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwsubu_wx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x37:   
                  // VectorIntWideningFormat::vwsub_wx(['\n                        Vd_vwi[i] = Vs2_vwi[i] - vwi(Rs1_vi);\n                    ', 'OPMVX', 'SimdAddOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwsub_wx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwsub_wx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwsub_wx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x38:   
                  // VectorIntWideningFormat::vwmulu_vx(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset]) * vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmulu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmulu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmulu_vx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3a:   
                  // VectorIntWideningFormat::vwmulsu_vx(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset]) * vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmulsu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmulsu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmulsu_vx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3b:   
                  // VectorIntWideningFormat::vwmul_vx(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset]) * vwi(Rs1_vi);\n                    ', 'OPMVX', 'SimdMultOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmul_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmul_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmul_vx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3c:   
                  // VectorIntWideningFormat::vwmaccu_vx(['\n                        Vd_vwu[i] = vwu(Rs1_vu) * vwu(Vs2_vu[i + offset])\n                                + Vs3_vwu[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmaccu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmaccu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmaccu_vx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3d:   
                  // VectorIntWideningFormat::vwmacc_vx(['\n                        Vd_vwi[i] = vwi(Rs1_vi) * vwi(Vs2_vi[i + offset])\n                                + Vs3_vwi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmacc_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmacc_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmacc_vx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3e:   
                  // VectorIntWideningFormat::vwmaccus_vx(['\n                        Vd_vwi[i] = vwu(Rs1_vu) * vwi(Vs2_vi[i + offset])\n                                + Vs3_vwi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmaccus_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmaccus_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmaccus_vx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                case 0x3f:   
                  // VectorIntWideningFormat::vwmaccsu_vx(['\n                        Vd_vwi[i] = vwi(Rs1_vi) * vwu(Vs2_vu[i + offset])\n                                + Vs3_vwi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})
                  
                  
                  switch(machInst.vtype8.vsew) {
                  case 0b000: return new Vwmaccsu_vx<uint8_t>(machInst, vlen);
                  case 0b001: return new Vwmaccsu_vx<uint16_t>(machInst, vlen);
                  case 0b010: return new Vwmaccsu_vx<uint32_t>(machInst, vlen);
                  default: GEM5_UNREACHABLE;
                  }
                  
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x7: 
              switch (BIT31) {
                
                case 0x0:   
                  // VConfOp::vsetvli(['\n                        uint64_t rd_bits = RD;\n                        uint64_t rs1_bits = RS1;\n                        uint64_t requested_vl = Rs1_ud;\n                        uint64_t requested_vtype = zimm11;\n                        uint32_t vlen = VlenbBits * 8;\n                        uint32_t vlmax = getVlmax(Vtype, vlen);\n                        uint32_t current_vl = VL;\n                    ', '\n                        Rd_ud = new_vl;\n                        VL = new_vl;\n                        Vtype = new_vtype;\n                    ', 'VSetVlDeclare', 'VSetVliBranchTarget', 'SimdConfigOp', 'IsUncondControl', 'IsIndirectControl'],{})
                  
                      return new Vsetvli(machInst,elen);
                  break;
                
                case 0x1: 
                  switch (BIT30) {
                    
                    case 0x0:   
                      // VConfOp::vsetvl(['\n                            uint64_t rd_bits = RD;\n                            uint64_t rs1_bits = RS1;\n                            uint64_t requested_vl = Rs1_ud;\n                            uint64_t requested_vtype = Rs2_ud;\n                            uint32_t vlen = VlenbBits * 8;\n                            uint32_t vlmax = getVlmax(Vtype, vlen);\n                            uint32_t current_vl = VL;\n                        ', '\n                            Rd_ud = new_vl;\n                            VL = new_vl;\n                            Vtype = new_vtype;\n                        ', 'VSetVlDeclare', 'VSetVlBranchTarget', 'SimdConfigOp', 'IsUncondControl', 'IsIndirectControl'],{})
                      
                          return new Vsetvl(machInst,elen);
                      break;
                    
                    case 0x1:   
                      // VConfOp::vsetivli(['\n                            uint64_t rd_bits = RD;\n                            uint64_t rs1_bits = -1;\n                            uint64_t requested_vl = uimm;\n                            uint64_t requested_vtype = zimm10;\n                            uint32_t vlen = VlenbBits * 8;\n                            uint32_t vlmax = getVlmax(Vtype, vlen);\n                            uint32_t current_vl = VL;\n                        ', '\n                            Rd_ud = new_vl;\n                            VL = new_vl;\n                            Vtype = new_vtype;\n                        ', 'VSetiVliDeclare', 'VSetiVliBranchTarget', 'SimdConfigOp', 'IsUncondControl', 'IsDirectControl'],{})
                      
                          return new Vsetivli(machInst,elen);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x18: 
          switch (FUNCT3) {
            
            case 0x0:   
              // BOp::beq(['\n                    if (rvSext(Rs1) == rvSext(Rs2)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Beq(machInst);
              break;
            
            case 0x1:   
              // BOp::bne(['\n                    if (rvSext(Rs1) != rvSext(Rs2)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Bne(machInst);
              break;
            
            case 0x4:   
              // BOp::blt(['\n                    if (rvSext(Rs1_sd) < rvSext(Rs2_sd)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Blt(machInst);
              break;
            
            case 0x5:   
              // BOp::bge(['\n                    if (rvSext(Rs1_sd) >= rvSext(Rs2_sd)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Bge(machInst);
              break;
            
            case 0x6:   
              // BOp::bltu(['\n                    if (rvZext(Rs1) < rvZext(Rs2)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Bltu(machInst);
              break;
            
            case 0x7:   
              // BOp::bgeu(['\n                    if (rvZext(Rs1) >= rvZext(Rs2)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})
              
                  return new Bgeu(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x19: 
          switch (FUNCT3) {
            
            case 0x0:   
              // Jump::jalr((['\n                Rd = rvSext(NPC);\n                NPC = rvZext((imm + Rs1) & (~0x1));\n            ', 'IsIndirectControl', 'IsUncondControl'], {}))
              
                  return new Jalr(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x1b:   
          // JOp::jal((['\n            Rd = rvSext(NPC);\n            NPC = rvZext(PC + imm);\n        ', 'IsDirectControl', 'IsUncondControl'], {}))
          
              return new Jal(machInst);
          break;
        
        case 0x1c: 
          switch (FUNCT3) {
            
            case 0x0: 
              switch (FUNCT7) {
                
                case 0x0: 
                  switch (RS2) {
                    
                    case 0x0:   
                      // SystemOp::ecall(['\n                            return std::make_shared<SyscallFault>(\n                                (PrivilegeMode)xc->readMiscReg(MISCREG_PRV));\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsSyscall', 'No_OpClass'],{})
                      
                          return new Ecall(machInst);
                      break;
                    
                    case 0x1:   
                      // SystemOp::ebreak(['\n                            return executeEBreakOrSemihosting(xc);\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
                      
                          return new Ebreak(machInst);
                      break;
                    
                    case 0x2:   
                      // SystemOp::uret(['\n                           MISA misa = xc->readMiscReg(MISCREG_ISA);\n                            if (!misa.rvn) {\n                                return std::make_shared<IllegalInstFault>(\n                                    "sret can\'t execute without N systems",\n                                    machInst);\n                            }\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            status.uie = status.upie;\n                            status.upie = 1;\n                            xc->setMiscReg(MISCREG_STATUS, status);\n                            NPC = xc->readMiscReg(MISCREG_UEPC);\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsReturn'],{})
                      
                          return new Uret(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x8: 
                  switch (RS2) {
                    
                    case 0x2:   
                      // SystemOp::sret(['\n                            MISA misa = xc->readMiscReg(MISCREG_ISA);\n                            if (!misa.rvs) {\n                                return std::make_shared<IllegalInstFault>(\n                                            "sret can\'t execute without RVS",\n                                            machInst);\n                            }\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            auto pm = (PrivilegeMode)xc->readMiscReg(\n                                MISCREG_PRV);\n                            if (pm == PRV_U ||\n                                (pm == PRV_S && status.tsr == 1)) {\n                                return std::make_shared<IllegalInstFault>(\n                                            "sret in user mode or TSR enabled",\n                                            machInst);\n                                NPC = NPC;\n                            } else {\n                                xc->setMiscReg(MISCREG_PRV, status.spp);\n                                status.sie = status.spie;\n                                status.spie = 1;\n                                status.spp = PRV_U;\n                                xc->setMiscReg(MISCREG_STATUS, status);\n                                NPC = xc->readMiscReg(MISCREG_SEPC);\n                            }\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsReturn'],{})
                      
                          return new Sret(machInst);
                      break;
                    
                    case 0x5:   
                      // SystemOp::wfi(['\n                            MISA misa = xc->readMiscReg(MISCREG_ISA);\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            auto pm = (PrivilegeMode)xc->readMiscReg(\n                                MISCREG_PRV);\n                            if (misa.rvs && (pm == PRV_U ||\n                                (pm == PRV_S && status.tw == 1))) {\n                                return std::make_shared<IllegalInstFault>(\n                                            "wfi in user mode or TW enabled",\n                                            machInst);\n                            }\n                            // Go to sleep only if there\'s no pending interrupt\n                            // at all, including masked interrupts.\n                            auto tc = xc->tcBase();\n                            auto cpu = tc->getCpuPtr();\n                            auto ic = dynamic_cast<RiscvISA::Interrupts*>(\n                                cpu->getInterruptController(tc->threadId()));\n                            panic_if(!ic, "Invalid Interrupt Controller.");\n                            if (ic->readIP() == 0\n                                && xc->readMiscReg(MISCREG_NMIP) == 0) {\n                                tc->quiesce();\n                            }\n                        ', 'IsNonSpeculative', 'IsQuiesce', 'IsSerializeAfter', 'No_OpClass', 'IsSquashAfter'],{})
                      
                          return new Wfi(machInst);
                      break;
                    
                    default:
                      
                      // Unknown::unknown(([], {}))
                      return new Unknown(machInst);
                      break;
                    }
                  GEM5_UNREACHABLE;
                
                case 0x9:   
                  // SystemOp::sfence_vma(['\n                        MISA misa = xc->readMiscReg(MISCREG_ISA);\n                        if (!misa.rvs) {\n                            return std::make_shared<IllegalInstFault>(\n                                "sfence_vma can\'t execute without RVS",\n                                machInst);\n                        }\n                        STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                        auto pm = (PrivilegeMode)xc->readMiscReg(MISCREG_PRV);\n                        if (pm == PRV_U || (pm == PRV_S && status.tvm == 1)) {\n                            return std::make_shared<IllegalInstFault>(\n                                        "sfence in user mode or TVM enabled",\n                                        machInst);\n                        }\n                        xc->tcBase()->getMMUPtr()->demapPage(Rs1, Rs2);\n                    ', 'IsNonSpeculative', 'IsSerializeAfter', 'No_OpClass'],{})
                  
                      return new Sfence_vma(machInst);
                  break;
                
                case 0x18:   
                  // SystemOp::mret(['\n                        if (xc->readMiscReg(MISCREG_PRV) != PRV_M) {\n                            return std::make_shared<IllegalInstFault>(\n                                        "mret at lower privilege", machInst);\n                            NPC = NPC;\n                        } else {\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            xc->setMiscReg(MISCREG_PRV, status.mpp);\n                            xc->setMiscReg(MISCREG_NMIE, 1);\n                            status.mie = status.mpie;\n                            status.mpie = 1;\n                            status.mpp = PRV_U;\n                            xc->setMiscReg(MISCREG_STATUS, status);\n                            NPC = xc->readMiscReg(MISCREG_MEPC);\n                        }\n                    ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsReturn'],{})
                  
                      return new Mret(machInst);
                  break;
                
                default:
                  
                  // Unknown::unknown(([], {}))
                  return new Unknown(machInst);
                  break;
                }
              GEM5_UNREACHABLE;
            
            case 0x1:   
              // CSROp::csrrw(['\n                    Rd = rvSext(data);\n                    data = rvZext(Rs1);\n                ', 'RD != 0', 'true', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrw(machInst);
              break;
            
            case 0x2:   
              // CSROp::csrrs(['\n                    Rd = rvSext(data);\n                    data = rvZext(data | Rs1);\n                ', 'true', 'RS1 != 0', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrs(machInst);
              break;
            
            case 0x3:   
              // CSROp::csrrc(['\n                    Rd = rvSext(data);\n                    data = rvZext(data & ~Rs1);\n                ', 'true', 'RS1 != 0', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrc(machInst);
              break;
            
            case 0x5:   
              // CSROp::csrrwi(['\n                    Rd = rvSext(data);\n                    data = rvZext(uimm);\n                ', 'RD != 0', 'true', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrwi(machInst);
              break;
            
            case 0x6:   
              // CSROp::csrrsi(['\n                    Rd = rvSext(data);\n                    data = rvZext(data | uimm);\n                ', 'true', 'uimm != 0', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrsi(machInst);
              break;
            
            case 0x7:   
              // CSROp::csrrci(['\n                    Rd = rvSext(data);\n                    data = rvZext(data & ~uimm);\n                ', 'true', 'uimm != 0', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})
              
                  return new Csrrci(machInst);
              break;
            
            default:
              
              // Unknown::unknown(([], {}))
              return new Unknown(machInst);
              break;
            }
          GEM5_UNREACHABLE;
        
        case 0x1e:   
          // M5Op::M5Op(([], {}))
          
              return new M5Op(machInst);
          break;
        
        default:
          
          // Unknown::unknown(([], {}))
          return new Unknown(machInst);
          break;
        }
      GEM5_UNREACHABLE;
    
    default:
      
      // Unknown::unknown(([], {}))
      return new Unknown(machInst);
      break;
    }
  }