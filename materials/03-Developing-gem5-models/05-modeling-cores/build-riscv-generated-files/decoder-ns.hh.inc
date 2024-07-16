// DO NOT EDIT
// This file was automatically generated from an ISA description:
//   riscv/isa/main.isa

#undef RVTYPE
#define RVTYPE	machInst.rv_type
#undef QUADRANT
#define QUADRANT	bits(machInst,  1,  0)
#undef OPCODE5
#define OPCODE5	bits(machInst,  6,  2)
#undef ALL
#define ALL	bits(machInst, 31,  0)
#undef RD
#define RD	bits(machInst, 11,  7)
#undef FUNCT3
#define FUNCT3	bits(machInst, 14, 12)
#undef RS1
#define RS1	bits(machInst, 19, 15)
#undef RS2
#define RS2	bits(machInst, 24, 20)
#undef FUNCT7
#define FUNCT7	bits(machInst, 31, 25)
#undef SRTYPE
#define SRTYPE	bits(machInst, 30, 30)
#undef SHAMT5
#define SHAMT5	bits(machInst, 24, 20)
#undef SHAMT6
#define SHAMT6	bits(machInst, 25, 20)
#undef SHAMT6BIT5
#define SHAMT6BIT5	bits(machInst, 25, 25)
#undef IMM12
#define IMM12	bits(machInst, 31, 20)
#undef SUCC
#define SUCC	bits(machInst, 23, 20)
#undef PRED
#define PRED	bits(machInst, 27, 24)
#undef IMM5
#define IMM5	bits(machInst, 11,  7)
#undef IMM7
#define IMM7	bits(machInst, 31, 25)
#undef IMM20
#define IMM20	bits(machInst, 31, 12)
#undef BIMM12BIT11
#define BIMM12BIT11	bits(machInst,  7,  7)
#undef BIMM12BITS4TO1
#define BIMM12BITS4TO1	bits(machInst, 11,  8)
#undef BIMM12BITS10TO5
#define BIMM12BITS10TO5	bits(machInst, 30, 25)
#undef IMMSIGN
#define IMMSIGN	bits(machInst, 31, 31)
#undef UJIMMBITS10TO1
#define UJIMMBITS10TO1	bits(machInst, 30, 21)
#undef UJIMMBIT11
#define UJIMMBIT11	bits(machInst, 20, 20)
#undef UJIMMBITS19TO12
#define UJIMMBITS19TO12	bits(machInst, 19, 12)
#undef FUNCT12
#define FUNCT12	bits(machInst, 31, 20)
#undef CSRIMM
#define CSRIMM	bits(machInst, 19, 15)
#undef FD
#define FD	bits(machInst, 11,  7)
#undef FS1
#define FS1	bits(machInst, 19, 15)
#undef FS2
#define FS2	bits(machInst, 24, 20)
#undef FS3
#define FS3	bits(machInst, 31, 27)
#undef ROUND_MODE
#define ROUND_MODE	bits(machInst, 14, 12)
#undef CONV_SGN
#define CONV_SGN	bits(machInst, 24, 20)
#undef FUNCT2
#define FUNCT2	bits(machInst, 26, 25)
#undef AMOFUNCT
#define AMOFUNCT	bits(machInst, 31, 27)
#undef AQ
#define AQ	bits(machInst, 26, 26)
#undef RL
#define RL	bits(machInst, 25, 25)
#undef COPCODE
#define COPCODE	bits(machInst, 15, 13)
#undef CFUNCT6LOW3
#define CFUNCT6LOW3	bits(machInst, 12, 10)
#undef CFUNCT1
#define CFUNCT1	bits(machInst, 12, 12)
#undef CFUNCT1BIT6
#define CFUNCT1BIT6	bits(machInst,  6,  6)
#undef CFUNCT2HIGH
#define CFUNCT2HIGH	bits(machInst, 11, 10)
#undef CFUNCT2LOW
#define CFUNCT2LOW	bits(machInst,  6,  5)
#undef RC1
#define RC1	bits(machInst, 11,  7)
#undef RC2
#define RC2	bits(machInst,  6,  2)
#undef RP1
#define RP1	bits(machInst,  9,  7)
#undef RP2
#define RP2	bits(machInst,  4,  2)
#undef FC1
#define FC1	bits(machInst, 11,  7)
#undef FC2
#define FC2	bits(machInst,  6,  2)
#undef FP2
#define FP2	bits(machInst,  4,  2)
#undef CJUMPIMM
#define CJUMPIMM	bits(machInst, 12,  2)
#undef CJUMPIMM3TO1
#define CJUMPIMM3TO1	bits(machInst,  5,  3)
#undef CJUMPIMM4TO4
#define CJUMPIMM4TO4	bits(machInst, 11, 11)
#undef CJUMPIMM5TO5
#define CJUMPIMM5TO5	bits(machInst,  2,  2)
#undef CJUMPIMM6TO6
#define CJUMPIMM6TO6	bits(machInst,  7,  7)
#undef CJUMPIMM7TO7
#define CJUMPIMM7TO7	bits(machInst,  6,  6)
#undef CJUMPIMM9TO8
#define CJUMPIMM9TO8	bits(machInst, 10,  9)
#undef CJUMPIMM10TO10
#define CJUMPIMM10TO10	bits(machInst,  8,  8)
#undef CJUMPIMMSIGN
#define CJUMPIMMSIGN	bits(machInst, 12, 12)
#undef CIMM8
#define CIMM8	bits(machInst, 12,  5)
#undef CIMM6
#define CIMM6	bits(machInst, 12,  7)
#undef CIMM5
#define CIMM5	bits(machInst,  6,  2)
#undef CIMM3
#define CIMM3	bits(machInst, 12, 10)
#undef CIMM2
#define CIMM2	bits(machInst,  6,  5)
#undef CIMM1
#define CIMM1	bits(machInst, 12, 12)
#undef M5FUNC
#define M5FUNC	bits(machInst, 31, 25)
#undef BIT24
#define BIT24	bits(machInst, 24, 24)
#undef BIT25
#define BIT25	bits(machInst, 25, 25)
#undef RNUM
#define RNUM	bits(machInst, 23, 20)
#undef KFUNCT5
#define KFUNCT5	bits(machInst, 29, 25)
#undef BS
#define BS	bits(machInst, 31, 30)
#undef VFUNCT6
#define VFUNCT6	machInst.vfunct6
#undef VFUNCT5
#define VFUNCT5	machInst.vfunct5
#undef VFUNCT3
#define VFUNCT3	machInst.vfunct3
#undef VFUNCT2
#define VFUNCT2	machInst.vfunct2
#undef VS3
#define VS3	machInst.vs3
#undef VS2
#define VS2	machInst.vs2
#undef VS1
#define VS1	machInst.vs1
#undef VD
#define VD	machInst.vd
#undef NF
#define NF	machInst.nf
#undef MEW
#define MEW	machInst.mew
#undef MOP
#define MOP	machInst.mop
#undef VM
#define VM	machInst.vm
#undef LUMOP
#define LUMOP	machInst.lumop
#undef SUMOP
#define SUMOP	machInst.sumop
#undef WIDTH
#define WIDTH	machInst.width
#undef BIT31
#define BIT31	machInst.bit31
#undef BIT30
#define BIT30	machInst.bit30
#undef SIMM5
#define SIMM5	machInst.uimm_vsetivli
#undef SIMM3
#define SIMM3	machInst.simm3


#define ASSIGN_VD_BIT(idx, bit) \
    ((Vd[(idx)/8] & ~(1 << (idx)%8)) | ((bit) << (idx)%8))

#define COPY_OLD_VD(idx)                                                  \
    if (!machInst.vtype8.vta || (!machInst.vm && !machInst.vtype8.vma)) { \
        RiscvISA::vreg_t old_vd;                                          \
        xc->getRegOperand(this, idx, &old_vd);                            \
        tmp_d0 = old_vd;                                                  \
    } else {                                                              \
        tmp_d0.set(0xff);                                                 \
    }                                                                     \

#define VRM_REQUIRED                                                         \
        uint_fast8_t frm = xc->readMiscReg(MISCREG_FRM);                     \
        if (frm > 4)                                                         \
            return std::make_shared<IllegalInstFault>("RM fault", machInst); \
        softfloat_roundingMode = frm;

template<typename Type>
bool inline
carry_out(Type a, Type b, bool carry_in = false) {
    using TypeU = std::make_unsigned_t<Type>;
    TypeU s = *reinterpret_cast<TypeU*>(&a)
            + *reinterpret_cast<TypeU*>(&b) + carry_in;
    return carry_in
        ? (s <= *reinterpret_cast<TypeU*>(&a))
        : (s <  *reinterpret_cast<TypeU*>(&a));
}

template<typename Type>
bool inline
borrow_out(Type a, Type b, bool borrow_in = false) {
    using TypeU = std::make_unsigned_t<Type>;
    return borrow_in
        ? (*reinterpret_cast<TypeU*>(&a) <= *reinterpret_cast<TypeU*>(&b))
        : (*reinterpret_cast<TypeU*>(&a) <  *reinterpret_cast<TypeU*>(&b));
}


// CIAddi4spnOp::c_addi4spn((['\n            imm = CIMM8<1:1> << 2 |\n                  CIMM8<0:0> << 3 |\n                  CIMM8<7:6> << 4 |\n                  CIMM8<5:2> << 6;\n        ', '\n            if (imm == 0)\n                return std::make_shared<IllegalInstFault>("immediate = 0",\n                                                           machInst);\n            Rp2 = rvSext(sp + imm);\n        ', 'uint64_t'], {}))

    //
    // Static instruction class for "c_addi4spn".
    //
    class C_addi4spn : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_addi4spn(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// CompressedLoad::c_fld(['\n                offset = CIMM3 << 3 | CIMM2 << 6;\n            ', '\n                STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                if (status.fs == FPUStatus::OFF)\n                    return std::make_shared<IllegalInstFault>("FPU is off",\n                                                               machInst);\n\n                // Mutating any floating point register changes the FS bit\n                // of the STATUS CSR.\n                status.fs = FPUStatus::DIRTY;\n                xc->setMiscReg(MISCREG_STATUS, status);\n\n                Fp2_bits = Mem;\n            ', '\n                EA = rvZext(Rp1 + offset);\n            '],{})

    /**
     * Static instruction class for "c_fld".
     */
    class C_fld : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_fld(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedLoad::c_lw(['\n                offset = CIMM2<1:1> << 2 |\n                         CIMM3 << 3 |\n                         CIMM2<0:0> << 6;\n            ', '\n                Rp2_sd = Mem_sw;\n            ', '\n                EA = rvZext(Rp1 + offset);\n            '],{})

    /**
     * Static instruction class for "c_lw".
     */
    class C_lw : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_lw(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedLoad::c_flw(['\n                    offset = CIMM2<1:1> << 2 |\n                             CIMM3 << 3 |\n                             CIMM2<0:0> << 6;\n                ', '\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>("FPU is off",\n                                                                   machInst);\n\n                    status.fs = FPUStatus::DIRTY;\n                    xc->setMiscReg(MISCREG_STATUS, status);\n\n                    freg_t fd = freg(f32(Mem_uw));\n                    Fp2_bits = fd.v;\n                ', '\n                    EA = (uint32_t)(Rp1_uw + offset);\n                '],{})

    /**
     * Static instruction class for "c_flw".
     */
    class C_flw : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_flw(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedLoad::c_ld(['\n                    offset = CIMM3 << 3 | CIMM2 << 6;\n                ', '\n                    Rp2_sd = Mem_sd;\n                ', '\n                    EA = Rp1 + offset;\n                '],{})

    /**
     * Static instruction class for "c_ld".
     */
    class C_ld : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_ld(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// CompressedLoad::c_lbu(['\n                    offset = (CIMM2<0:0> << 1) | CIMM2<1:1>;\n                ', '\n                    Rp2 = Mem_ub;\n                ', '\n                    EA = rvZext(Rp1 + offset);\n                '],{})

    /**
     * Static instruction class for "c_lbu".
     */
    class C_lbu : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_lbu(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedLoad::c_lhu(['\n                        offset = CIMM2<0:0> << 1;\n                    ', '\n                        Rp2 = Mem_uh;\n                    ', '\n                        EA = rvZext(Rp1 + offset);\n                    '],{})

    /**
     * Static instruction class for "c_lhu".
     */
    class C_lhu : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_lhu(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedLoad::c_lh(['\n                        offset = CIMM2<0:0> << 1;\n                    ', '\n                        Rp2_sd = Mem_sh;\n                    ', '\n                        EA = rvZext(Rp1 + offset);\n                    '],{})

    /**
     * Static instruction class for "c_lh".
     */
    class C_lh : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_lh(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// CompressedStore::c_sb(['\n                    offset = (CIMM2<0:0> << 1) | CIMM2<1:1>;\n                ', '\n                    Mem_ub = Rp2_ub;\n                '],{'ea_code': '\n                    EA = rvZext(Rp1 + offset);\n                '})

    /**
     * Static instruction class for "c_sb".
     */
    class C_sb : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_sb(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedStore::c_sh(['\n                    offset = (CIMM2<0:0> << 1);\n                ', '\n                    Mem_uh = Rp2_uh;\n                '],{'ea_code': '\n                    EA = rvZext(Rp1 + offset);\n                '})

    /**
     * Static instruction class for "c_sh".
     */
    class C_sh : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_sh(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// CompressedStore::c_fsd(['\n                offset = CIMM3 << 3 | CIMM2 << 6;\n            ', '\n                STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                if (status.fs == FPUStatus::OFF)\n                    return std::make_shared<IllegalInstFault>("FPU is off",\n                                                               machInst);\n\n                Mem = Fp2_bits;\n            ', '\n                EA = rvZext(Rp1 + offset);\n            '],{})

    /**
     * Static instruction class for "c_fsd".
     */
    class C_fsd : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_fsd(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedStore::c_sw(['\n                offset = CIMM2<1:1> << 2 |\n                         CIMM3 << 3 |\n                         CIMM2<0:0> << 6;\n            ', '\n                Mem_uw = Rp2_uw;\n            '],{'ea_code': '\n                EA = rvZext(Rp1 + offset);\n            '})

    /**
     * Static instruction class for "c_sw".
     */
    class C_sw : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_sw(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedStore::c_fsw(['\n                    offset = CIMM2<1:1> << 2 |\n                             CIMM3 << 3 |\n                             CIMM2<0:0> << 6;\n                ', '\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>("FPU is off",\n                                                                   machInst);\n\n                    Mem_uw = unboxF32(boxF32(Fp2_bits));\n                ', '\n                    EA = (uint32_t)(Rp1_uw + offset);\n                '],{})

    /**
     * Static instruction class for "c_fsw".
     */
    class C_fsw : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_fsw(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedStore::c_sd(['\n                    offset = CIMM3 << 3 | CIMM2 << 6;\n                ', '\n                    Mem_ud = Rp2_ud;\n                ', '\n                    EA = Rp1 + offset;\n                '],{})

    /**
     * Static instruction class for "c_sd".
     */
    class C_sd : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_sd(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// CIOp::c_addi((['\n            imm = sext<6>(CIMM5 | (CIMM1 << 5));\n        ', '\n            if ((RC1 == 0) != (imm == 0)) {\n                if (RC1 == 0) {\n                    // imm != 0 is HINT\n                } else {\n                    // imm == 0 is HINT\n                }\n            }\n            Rc1_sd = rvSext(Rc1_sd + imm);\n        '], {}))

    //
    // Static instruction class for "c_addi".
    //
    class C_addi : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_addi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// CJOp::c_jal((['\n                ra_sw = NPC_uw;\n                NPC_uw = PC_uw + imm;\n            ', 'IsDirectControl', 'IsUncondControl', 'IsCall'], {}))

    //
    // Static instruction class for "c_jal".
    //
    class C_jal : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_jal(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
    };

// CIOp::c_addiw((['\n                imm = sext<6>(CIMM5 | (CIMM1 << 5));\n            ', '\n                if (RC1 == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "source reg x0", machInst);\n                }\n                Rc1_sw = (int32_t)(Rc1_sw + imm);\n            '], {}))

    //
    // Static instruction class for "c_addiw".
    //
    class C_addiw : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_addiw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// CIOp::c_li((['\n            imm = sext<6>(CIMM5 | (CIMM1 << 5));\n        ', '\n            // RC1 == 0 is HINT\n            Rc1_sd = imm;\n        '], {}))

    //
    // Static instruction class for "c_li".
    //
    class C_li : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_li(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// CIOp::c_addi16sp((['\n                imm = sext<10>((CIMM5<4:4> << 4) |\n                               (CIMM5<0:0> << 5) |\n                               (CIMM5<3:3> << 6) |\n                               (CIMM5<2:1> << 7) |\n                               (CIMM1 << 9));\n            ', '\n                if (imm == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "immediate = 0", machInst);\n                }\n                sp_sd = rvSext(sp_sd + imm);\n            '], {}))

    //
    // Static instruction class for "c_addi16sp".
    //
    class C_addi16sp : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_addi16sp(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// CIOp::c_lui((['\n                imm = sext<6>(CIMM5 | (CIMM1 << 5)) << 12;\n            ', '\n                // RC1 == 0 is HINT\n                if (imm == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "immediate = 0", machInst);\n                }\n                Rc1_sd = imm;\n            '], {}))

    //
    // Static instruction class for "c_lui".
    //
    class C_lui : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_lui(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// CIOp::c_srli(['\n                    imm = CIMM5 | (CIMM1 << 5);\n                ', '\n                    if (rvSelect((bool)CIMM1, false)) {\n                        return std::make_shared<IllegalInstFault>(\n                                "shmat[5] != 0", machInst);\n                    }\n                    if (imm == 0) {\n                        // C.SRLI64, HINT for RV32/RV64\n                    }\n                    // The MSB can never be 1, hence no need to sign ext.\n                    Rp1 = rvZext(Rp1) >> imm;\n                ', 'uint64_t'],{})

    //
    // Static instruction class for "c_srli".
    //
    class C_srli : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_srli(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// CIOp::c_srai(['\n                    imm = CIMM5 | (CIMM1 << 5);\n                ', '\n                    if (rvSelect((bool)CIMM1, false)) {\n                        return std::make_shared<IllegalInstFault>(\n                                "shmat[5] != 0", machInst);\n                    }\n                    if (imm == 0) {\n                        // C.SRAI64, HINT for RV32/RV64\n                    }\n                    Rp1_sd = rvSext(Rp1_sd) >> imm;\n                ', 'uint64_t'],{})

    //
    // Static instruction class for "c_srai".
    //
    class C_srai : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_srai(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// CIOp::c_andi(['\n                    imm = CIMM5;\n                    if (CIMM1 > 0)\n                        imm |= ~((uint64_t)0x1F);\n                ', '\n                    Rp1 = rvSext(Rp1 & imm);\n                ', 'uint64_t'],{})

    //
    // Static instruction class for "c_andi".
    //
    class C_andi : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_andi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// CompressedROp::c_sub(['\n                            Rp1 = rvSext(Rp1 - Rp2);\n                        '],{})

    //
    // Static instruction class for "c_sub".
    //
    class C_sub : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_sub(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// CompressedROp::c_xor(['\n                            Rp1 = rvSext(Rp1 ^ Rp2);\n                        '],{})

    //
    // Static instruction class for "c_xor".
    //
    class C_xor : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_xor(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// CompressedROp::c_or(['\n                            Rp1 = rvSext(Rp1 | Rp2);\n                        '],{})

    //
    // Static instruction class for "c_or".
    //
    class C_or : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_or(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// CompressedROp::c_and(['\n                            Rp1 = rvSext(Rp1 & Rp2);\n                        '],{})

    //
    // Static instruction class for "c_and".
    //
    class C_and : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_and(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// CompressedROp::c_subw(['\n                                Rp1_sd = (int32_t)Rp1_sd - Rp2_sw;\n                            '],{})

    //
    // Static instruction class for "c_subw".
    //
    class C_subw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_subw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// CompressedROp::c_addw(['\n                                Rp1_sd = (int32_t)Rp1_sd + Rp2_sw;\n                            '],{})

    //
    // Static instruction class for "c_addw".
    //
    class C_addw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_addw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// CompressedROp::c_mul(['\n                            Rp1_sd = rvSext(Rp1_sd * Rp2_sd);\n                        ', 'IntMultOp'],{})

    //
    // Static instruction class for "c_mul".
    //
    class C_mul : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_mul(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// CompressedROp::c_zext_b(['\n                                Rp1 = Rp1 & 0xFFULL;\n                            '],{})

    //
    // Static instruction class for "c_zext_b".
    //
    class C_zext_b : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_zext_b(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// CompressedROp::c_sext_b(['\n                                Rp1 = sext<8>(Rp1 & 0xFFULL);\n                            '],{})

    //
    // Static instruction class for "c_sext_b".
    //
    class C_sext_b : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_sext_b(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// CompressedROp::c_zext_h(['\n                                Rp1 = Rp1 & 0xFFFFULL;\n                            '],{})

    //
    // Static instruction class for "c_zext_h".
    //
    class C_zext_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_zext_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// CompressedROp::c_sext_h(['\n                                Rp1 = sext<16>(Rp1 & 0xFFFFULL);\n                            '],{})

    //
    // Static instruction class for "c_sext_h".
    //
    class C_sext_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_sext_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// CompressedROp::c_zext_w(['\n                                    Rp1 = bits(Rp1, 31, 0);\n                                '],{})

    //
    // Static instruction class for "c_zext_w".
    //
    class C_zext_w : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_zext_w(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// CompressedROp::c_not(['\n                                Rp1 = ~Rp1;\n                            '],{})

    //
    // Static instruction class for "c_not".
    //
    class C_not : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_not(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// CJOp::c_j((['\n            NPC = rvZext(PC + imm);\n        ', 'IsDirectControl', 'IsUncondControl'], {}))

    //
    // Static instruction class for "c_j".
    //
    class C_j : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_j(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
    };

// CBOp::c_beqz(['\n                if (rvSext(Rp1) == 0)\n                    NPC = rvZext(PC + imm);\n                else\n                    NPC = NPC;\n            ', 'IsDirectControl', 'IsCondControl'],{})

    //
    // Static instruction class for "c_beqz".
    //
    class C_beqz : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_beqz(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
    };

// CBOp::c_bnez(['\n                if (rvSext(Rp1) != 0)\n                    NPC = rvZext(PC + imm);\n                else\n                    NPC = NPC;\n            ', 'IsDirectControl', 'IsCondControl'],{})

    //
    // Static instruction class for "c_bnez".
    //
    class C_bnez : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_bnez(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
    };

// Unknown::unknown(([], {}))

// CIOp::c_slli((['\n            imm = CIMM5 | (CIMM1 << 5);\n        ', '\n            if (rvSelect((bool)CIMM1, false)) {\n                return std::make_shared<IllegalInstFault>(\n                        "shmat[5] != 0", machInst);\n            }\n            if (imm == 0) {\n                // C.SLLI64, HINT for RV32/RV64\n            }\n            // RC1 == 0 is HINT\n            Rc1 = rvSext(Rc1 << imm);\n        ', 'uint64_t'], {}))

    //
    // Static instruction class for "c_slli".
    //
    class C_slli : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_slli(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// CompressedLoad::c_fldsp(['\n                offset = CIMM5<4:3> << 3 |\n                         CIMM1 << 5 |\n                         CIMM5<2:0> << 6;\n            ', '\n                STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                if (status.fs == FPUStatus::OFF)\n                    return std::make_shared<IllegalInstFault>("FPU is off",\n                                                               machInst);\n\n                status.fs = FPUStatus::DIRTY;\n                xc->setMiscReg(MISCREG_STATUS, status);\n\n                Fc1_bits = Mem;\n            ', '\n                EA = rvZext(sp + offset);\n            '],{})

    /**
     * Static instruction class for "c_fldsp".
     */
    class C_fldsp : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_fldsp(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedLoad::c_lwsp(['\n                offset = CIMM5<4:2> << 2 |\n                         CIMM1 << 5 |\n                         CIMM5<1:0> << 6;\n            ', '\n                if (RC1 == 0) {\n                    return std::make_shared<IllegalInstFault>(\n                            "source reg x0", machInst);\n                }\n                Rc1_sw = Mem_sw;\n            ', '\n                EA = rvZext(sp + offset);\n            '],{})

    /**
     * Static instruction class for "c_lwsp".
     */
    class C_lwsp : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_lwsp(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedLoad::c_flwsp(['\n                    offset = CIMM5<4:2> << 2 |\n                             CIMM1 << 5 |\n                             CIMM5<1:0> << 6;\n                ', '\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>("FPU is off",\n                                                                   machInst);\n\n                    status.fs = FPUStatus::DIRTY;\n                    xc->setMiscReg(MISCREG_STATUS, status);\n\n                    freg_t fd;\n                    fd = freg(f32(Mem_uw));\n                    Fc1_bits = fd.v;\n                ', '\n                    EA = (uint32_t)(sp_uw + offset);\n                '],{})

    /**
     * Static instruction class for "c_flwsp".
     */
    class C_flwsp : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_flwsp(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedLoad::c_ldsp(['\n                    offset = CIMM5<4:3> << 3 |\n                             CIMM1 << 5 |\n                             CIMM5<2:0> << 6;\n                ', '\n                    if (RC1 == 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x0", machInst);\n                    }\n                    Rc1_sd = Mem_sd;\n                ', '\n                    EA = sp + offset;\n                '],{})

    /**
     * Static instruction class for "c_ldsp".
     */
    class C_ldsp : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_ldsp(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// CJump::c_jr((['\n                    if (RC1 == 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x0", machInst);\n                    }\n                    NPC = rvZext(Rc1 & (~0x1));\n                ', 'IsIndirectControl', 'IsUncondControl'], {}))

    //
    // Static instruction class for "c_jr".
    //
    class C_jr : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_jr(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                ThreadContext *tc) const override;

        using StaticInst::branchTarget;
    };

// CROp::c_mv((['\n                    // RC1 == 0 is HINT\n                    Rc1 = rvSext(Rc2);\n                '], {}))

    //
    // Static instruction class for "c_mv".
    //
    class C_mv : public CompRegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_mv(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using CompRegOp::generateDisassembly;
    };

// SystemOp::c_ebreak((['\n                        // NB: Semihosting spec requires uncompressed ebreak,\n                        // so this instruction does not check for semihosting.\n                        return std::make_shared<BreakpointFault>(\n                            xc->pcState());\n                    ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'], {}))

    //
    // Static instruction class for "c_ebreak".
    //
    class C_ebreak : public SystemOp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_ebreak(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using SystemOp::generateDisassembly;
    };

// CJump::c_jalr((['\n                        ra = rvSext(NPC);\n                        NPC = rvZext(Rc1 & (~0x1));\n                    ', 'IsIndirectControl', 'IsUncondControl', 'IsCall'], {}))

    //
    // Static instruction class for "c_jalr".
    //
    class C_jalr : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_jalr(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                ThreadContext *tc) const override;

        using StaticInst::branchTarget;
    };

// CompressedROp::c_add((['\n                    // RC1 == 0 is HINT\n                    Rc1_sd = rvSext(Rc1_sd + Rc2_sd);\n                '], {}))

    //
    // Static instruction class for "c_add".
    //
    class C_add : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        C_add(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// CompressedStore::c_fsdsp(['\n                offset = CIMM6<5:3> << 3 |\n                         CIMM6<2:0> << 6;\n            ', '\n                STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                if (status.fs == FPUStatus::OFF)\n                    return std::make_shared<IllegalInstFault>("FPU is off",\n                                                               machInst);\n\n                Mem_ud = Fc2_bits;\n            ', '\n                EA = rvZext(sp + offset);\n            '],{})

    /**
     * Static instruction class for "c_fsdsp".
     */
    class C_fsdsp : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_fsdsp(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedStore::c_swsp(['\n                offset = CIMM6<5:2> << 2 |\n                         CIMM6<1:0> << 6;\n            ', '\n                Mem_uw = Rc2_uw;\n            ', '\n                EA = rvZext(sp + offset);\n            '],{})

    /**
     * Static instruction class for "c_swsp".
     */
    class C_swsp : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_swsp(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedStore::c_fswsp(['\n                    offset = CIMM6<5:2> << 2 |\n                             CIMM6<1:0> << 6;\n                ', '\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>("FPU is off",\n                                                                   machInst);\n\n                    Mem_uw = unboxF32(boxF32(Fc2_bits));\n                ', '\n                    EA = (uint32_t)(sp_uw + offset);\n                '],{})

    /**
     * Static instruction class for "c_fswsp".
     */
    class C_fswsp : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_fswsp(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CompressedStore::c_sdsp(['\n                    offset = CIMM6<5:3> << 3 |\n                             CIMM6<2:0> << 6;\n                ', '\n                    Mem = Rc2;\n                ', '\n                    EA = sp + offset;\n                '],{})

    /**
     * Static instruction class for "c_sdsp".
     */
    class C_sdsp : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        C_sdsp(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// Load::lb(['\n                    Rd_sd = Mem_sb;\n                '],{})

    /**
     * Static instruction class for "lb".
     */
    class Lb : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Lb(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Load::lh(['\n                    Rd_sd = Mem_sh;\n                '],{})

    /**
     * Static instruction class for "lh".
     */
    class Lh : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Lh(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Load::lw(['\n                    Rd_sd = Mem_sw;\n                '],{})

    /**
     * Static instruction class for "lw".
     */
    class Lw : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Lw(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Load::ld(['\n                        Rd_sd = Mem_sd;\n                    '],{})

    /**
     * Static instruction class for "ld".
     */
    class Ld : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Ld(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// Load::lbu(['\n                    Rd = Mem_ub;\n                '],{})

    /**
     * Static instruction class for "lbu".
     */
    class Lbu : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Lbu(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Load::lhu(['\n                    Rd = Mem_uh;\n                '],{})

    /**
     * Static instruction class for "lhu".
     */
    class Lhu : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Lhu(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Load::lwu(['\n                        Rd = Mem_uw;\n                    '],{})

    /**
     * Static instruction class for "lwu".
     */
    class Lwu : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Lwu(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// Load::flh(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                    "FPU is off", machInst);\n\n                    status.fs = FPUStatus::DIRTY;\n                    xc->setMiscReg(MISCREG_STATUS, status);\n\n                    freg_t fd;\n                    fd = freg(f16(Mem_uh));\n                    Fd_bits = fd.v;\n                '],{'inst_flags': 'FloatMemReadOp'})

    /**
     * Static instruction class for "flh".
     */
    class Flh : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Flh(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Load::flw(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                    "FPU is off", machInst);\n\n                    status.fs = FPUStatus::DIRTY;\n                    xc->setMiscReg(MISCREG_STATUS, status);\n\n                    freg_t fd;\n                    fd = freg(f32(Mem_uw));\n                    Fd_bits = fd.v;\n                '],{'inst_flags': 'FloatMemReadOp'})

    /**
     * Static instruction class for "flw".
     */
    class Flw : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Flw(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Load::fld(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                    "FPU is off", machInst);\n\n                    status.fs = FPUStatus::DIRTY;\n                    xc->setMiscReg(MISCREG_STATUS, status);\n\n                    freg_t fd;\n                    fd = freg(f64(Mem));\n                    Fd_bits = fd.v;\n                '],{'inst_flags': 'FloatMemReadOp'})

    /**
     * Static instruction class for "fld".
     */
    class Fld : public Load
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fld(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// VleOp::vle8_v((['\n                            if ((machInst.vm || elem_mask(v0, ei)) &&\n                                i < this->microVl) {\n                                Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                            }\n                        '], {'inst_flags': 'SimdUnitStrideLoadOp'}))


class Vle8_vMicro : public VleMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vle8_vMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VleMicroInst::generateDisassembly;

};



class Vle8_v : public VleMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vle8_v(ExtMachInst _machInst);
    Vle8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VleMacroInst::generateDisassembly;
};


// VlSegOp::vlseg2e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 2)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg2e8_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg2e8_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg2e8_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg2e8_v(ExtMachInst _machInst);
    Vlseg2e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg3e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 3)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg3e8_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg3e8_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg3e8_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg3e8_v(ExtMachInst _machInst);
    Vlseg3e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg4e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 4)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg4e8_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg4e8_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg4e8_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg4e8_v(ExtMachInst _machInst);
    Vlseg4e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg5e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 5)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg5e8_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg5e8_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg5e8_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg5e8_v(ExtMachInst _machInst);
    Vlseg5e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg6e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 6)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg6e8_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg6e8_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg6e8_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg6e8_v(ExtMachInst _machInst);
    Vlseg6e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg7e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 7)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg7e8_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg7e8_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg7e8_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg7e8_v(ExtMachInst _machInst);
    Vlseg7e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg8e8_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 8)) &&\n                                    i < this->microVl) {\n                                    Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg8e8_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg8e8_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg8e8_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg8e8_v(ExtMachInst _machInst);
    Vlseg8e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VlWholeOp::vl1re8_v(['\n                                Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl1re8_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl1re8_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl1re8_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl1re8_v(ExtMachInst _machInst);
    Vl1re8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl2re8_v(['\n                                Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl2re8_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl2re8_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl2re8_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl2re8_v(ExtMachInst _machInst);
    Vl2re8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl4re8_v(['\n                                Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl4re8_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl4re8_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl4re8_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl4re8_v(ExtMachInst _machInst);
    Vl4re8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl8re8_v(['\n                                Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl8re8_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl8re8_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl8re8_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl8re8_v(ExtMachInst _machInst);
    Vl8re8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VlmOp::vlm_v((['\n                        Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                    '], {'inst_flags': 'SimdUnitStrideMaskLoadOp'}))


class Vlm_v : public VleMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlm_v(ExtMachInst _machInst);
    Vlm_v(ExtMachInst _machInst, uint32_t _vlen);
    using VleMacroInst::generateDisassembly;
};


// VleOp::vle8ff_v((['\n                        if ((machInst.vm || elem_mask(v0, ei)) &&\n                            i < this->microVl && i < this->faultIdx) {\n                            Vd_ub[i] = Mem_vc.as<uint8_t>()[i];\n                        }\n                    '], {'inst_flags': 'SimdUnitStrideFaultOnlyFirstLoadOp'}))


class Vle8ff_vMicro : public VleMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vle8ff_vMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VleMicroInst::generateDisassembly;

};



class Vle8ff_v : public VleMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vle8ff_v(ExtMachInst _machInst);
    Vle8ff_v(ExtMachInst _machInst, uint32_t _vlen);
    using VleMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VlIndexOp::vluxei8_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_ub[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))


template<typename ElemType>
class Vluxei8_vMicro : public VlIndexMicroInst
{
private:
    // rs1, vs2, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vluxei8_vMicro(ExtMachInst _machInst,
        uint32_t _vdRegIdx, uint32_t _vdElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vluxei8_v : public VlIndexMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vluxei8_v(ExtMachInst _machInst);
    Vluxei8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlIndexMacroInst::generateDisassembly;
};


// VlStrideOp::vlse8_v((['\n                    Vd_ub[microIdx] = Mem_vc.as<uint8_t>()[0];\n                '], {'inst_flags': 'SimdStridedLoadOp'}))


class Vlse8_vMicro : public VlStrideMicroInst
{
private:
    // rs1, rs2, vtmp0, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
public:
    Vlse8_vMicro(ExtMachInst _machInst, uint32_t _regIdx, uint32_t _microIdx,
        uint32_t _microVl);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlStrideMicroInst::generateDisassembly;
};



class Vlse8_v : public VlStrideMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vlse8_v(ExtMachInst _machInst);
    Vlse8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlStrideMacroInst::generateDisassembly;
};


// VlIndexOp::vloxei8_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_ub[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))


template<typename ElemType>
class Vloxei8_vMicro : public VlIndexMicroInst
{
private:
    // rs1, vs2, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vloxei8_vMicro(ExtMachInst _machInst,
        uint32_t _vdRegIdx, uint32_t _vdElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vloxei8_v : public VlIndexMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vloxei8_v(ExtMachInst _machInst);
    Vloxei8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlIndexMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VleOp::vle16_v((['\n                            if ((machInst.vm || elem_mask(v0, ei)) &&\n                                i < this->microVl) {\n                                Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                            }\n                        '], {'inst_flags': 'SimdUnitStrideLoadOp'}))


class Vle16_vMicro : public VleMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vle16_vMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VleMicroInst::generateDisassembly;

};



class Vle16_v : public VleMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vle16_v(ExtMachInst _machInst);
    Vle16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VleMacroInst::generateDisassembly;
};


// VlSegOp::vlseg2e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 2)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg2e16_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg2e16_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg2e16_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg2e16_v(ExtMachInst _machInst);
    Vlseg2e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg3e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 3)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg3e16_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg3e16_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg3e16_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg3e16_v(ExtMachInst _machInst);
    Vlseg3e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg4e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 4)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg4e16_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg4e16_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg4e16_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg4e16_v(ExtMachInst _machInst);
    Vlseg4e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg5e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 5)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg5e16_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg5e16_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg5e16_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg5e16_v(ExtMachInst _machInst);
    Vlseg5e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg6e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 6)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg6e16_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg6e16_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg6e16_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg6e16_v(ExtMachInst _machInst);
    Vlseg6e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg7e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 7)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg7e16_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg7e16_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg7e16_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg7e16_v(ExtMachInst _machInst);
    Vlseg7e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg8e16_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 8)) &&\n                                    i < this->microVl) {\n                                    Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg8e16_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg8e16_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg8e16_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg8e16_v(ExtMachInst _machInst);
    Vlseg8e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VlWholeOp::vl1re16_v(['\n                                Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl1re16_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl1re16_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl1re16_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl1re16_v(ExtMachInst _machInst);
    Vl1re16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl2re16_v(['\n                                Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl2re16_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl2re16_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl2re16_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl2re16_v(ExtMachInst _machInst);
    Vl2re16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl4re16_v(['\n                                Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl4re16_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl4re16_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl4re16_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl4re16_v(ExtMachInst _machInst);
    Vl4re16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl8re16_v(['\n                                Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl8re16_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl8re16_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl8re16_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl8re16_v(ExtMachInst _machInst);
    Vl8re16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VleOp::vle16ff_v((['\n                        if ((machInst.vm || elem_mask(v0, ei)) &&\n                            i < this->microVl && i < this->faultIdx) {\n                            Vd_uh[i] = Mem_vc.as<uint16_t>()[i];\n                        }\n                    '], {'inst_flags': 'SimdUnitStrideFaultOnlyFirstLoadOp'}))


class Vle16ff_vMicro : public VleMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vle16ff_vMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VleMicroInst::generateDisassembly;

};



class Vle16ff_v : public VleMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vle16ff_v(ExtMachInst _machInst);
    Vle16ff_v(ExtMachInst _machInst, uint32_t _vlen);
    using VleMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VlIndexOp::vluxei16_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_uh[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))


template<typename ElemType>
class Vluxei16_vMicro : public VlIndexMicroInst
{
private:
    // rs1, vs2, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vluxei16_vMicro(ExtMachInst _machInst,
        uint32_t _vdRegIdx, uint32_t _vdElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vluxei16_v : public VlIndexMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vluxei16_v(ExtMachInst _machInst);
    Vluxei16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlIndexMacroInst::generateDisassembly;
};


// VlStrideOp::vlse16_v((['\n                    Vd_uh[microIdx] = Mem_vc.as<uint16_t>()[0];\n                '], {'inst_flags': 'SimdStridedLoadOp'}))


class Vlse16_vMicro : public VlStrideMicroInst
{
private:
    // rs1, rs2, vtmp0, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
public:
    Vlse16_vMicro(ExtMachInst _machInst, uint32_t _regIdx, uint32_t _microIdx,
        uint32_t _microVl);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlStrideMicroInst::generateDisassembly;
};



class Vlse16_v : public VlStrideMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vlse16_v(ExtMachInst _machInst);
    Vlse16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlStrideMacroInst::generateDisassembly;
};


// VlIndexOp::vloxei16_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_uh[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))


template<typename ElemType>
class Vloxei16_vMicro : public VlIndexMicroInst
{
private:
    // rs1, vs2, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vloxei16_vMicro(ExtMachInst _machInst,
        uint32_t _vdRegIdx, uint32_t _vdElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vloxei16_v : public VlIndexMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vloxei16_v(ExtMachInst _machInst);
    Vloxei16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlIndexMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VleOp::vle32_v((['\n                            if ((machInst.vm || elem_mask(v0, ei)) &&\n                                i < this->microVl) {\n                                Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                            }\n                        '], {'inst_flags': 'SimdUnitStrideLoadOp'}))


class Vle32_vMicro : public VleMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vle32_vMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VleMicroInst::generateDisassembly;

};



class Vle32_v : public VleMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vle32_v(ExtMachInst _machInst);
    Vle32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VleMacroInst::generateDisassembly;
};


// VlSegOp::vlseg2e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 2)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg2e32_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg2e32_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg2e32_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg2e32_v(ExtMachInst _machInst);
    Vlseg2e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg3e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 3)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg3e32_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg3e32_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg3e32_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg3e32_v(ExtMachInst _machInst);
    Vlseg3e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg4e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 4)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg4e32_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg4e32_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg4e32_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg4e32_v(ExtMachInst _machInst);
    Vlseg4e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg5e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 5)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg5e32_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg5e32_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg5e32_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg5e32_v(ExtMachInst _machInst);
    Vlseg5e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg6e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 6)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg6e32_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg6e32_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg6e32_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg6e32_v(ExtMachInst _machInst);
    Vlseg6e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg7e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 7)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg7e32_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg7e32_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg7e32_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg7e32_v(ExtMachInst _machInst);
    Vlseg7e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg8e32_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 8)) &&\n                                    i < this->microVl) {\n                                    Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg8e32_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg8e32_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg8e32_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg8e32_v(ExtMachInst _machInst);
    Vlseg8e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VlWholeOp::vl1re32_v(['\n                                Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl1re32_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl1re32_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl1re32_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl1re32_v(ExtMachInst _machInst);
    Vl1re32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl2re32_v(['\n                                Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl2re32_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl2re32_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl2re32_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl2re32_v(ExtMachInst _machInst);
    Vl2re32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl4re32_v(['\n                                Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl4re32_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl4re32_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl4re32_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl4re32_v(ExtMachInst _machInst);
    Vl4re32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl8re32_v(['\n                                Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl8re32_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl8re32_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl8re32_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl8re32_v(ExtMachInst _machInst);
    Vl8re32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VleOp::vle32ff_v((['\n                        if ((machInst.vm || elem_mask(v0, ei)) &&\n                            i < this->microVl && i < this->faultIdx) {\n                            Vd_uw[i] = Mem_vc.as<uint32_t>()[i];\n                        }\n                    '], {'inst_flags': 'SimdUnitStrideFaultOnlyFirstLoadOp'}))


class Vle32ff_vMicro : public VleMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vle32ff_vMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VleMicroInst::generateDisassembly;

};



class Vle32ff_v : public VleMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vle32ff_v(ExtMachInst _machInst);
    Vle32ff_v(ExtMachInst _machInst, uint32_t _vlen);
    using VleMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VlIndexOp::vluxei32_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_uw[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))


template<typename ElemType>
class Vluxei32_vMicro : public VlIndexMicroInst
{
private:
    // rs1, vs2, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vluxei32_vMicro(ExtMachInst _machInst,
        uint32_t _vdRegIdx, uint32_t _vdElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vluxei32_v : public VlIndexMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vluxei32_v(ExtMachInst _machInst);
    Vluxei32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlIndexMacroInst::generateDisassembly;
};


// VlStrideOp::vlse32_v((['\n                    Vd_uw[microIdx] = Mem_vc.as<uint32_t>()[0];\n                '], {'inst_flags': 'SimdStridedLoadOp'}))


class Vlse32_vMicro : public VlStrideMicroInst
{
private:
    // rs1, rs2, vtmp0, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
public:
    Vlse32_vMicro(ExtMachInst _machInst, uint32_t _regIdx, uint32_t _microIdx,
        uint32_t _microVl);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlStrideMicroInst::generateDisassembly;
};



class Vlse32_v : public VlStrideMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vlse32_v(ExtMachInst _machInst);
    Vlse32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlStrideMacroInst::generateDisassembly;
};


// VlIndexOp::vloxei32_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_uw[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))


template<typename ElemType>
class Vloxei32_vMicro : public VlIndexMicroInst
{
private:
    // rs1, vs2, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vloxei32_vMicro(ExtMachInst _machInst,
        uint32_t _vdRegIdx, uint32_t _vdElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vloxei32_v : public VlIndexMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vloxei32_v(ExtMachInst _machInst);
    Vloxei32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlIndexMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VleOp::vle64_v((['\n                            if ((machInst.vm || elem_mask(v0, ei)) &&\n                                i < this->microVl) {\n                                Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                            }\n                        '], {'inst_flags': 'SimdUnitStrideLoadOp'}))


class Vle64_vMicro : public VleMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vle64_vMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VleMicroInst::generateDisassembly;

};



class Vle64_v : public VleMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vle64_v(ExtMachInst _machInst);
    Vle64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VleMacroInst::generateDisassembly;
};


// VlSegOp::vlseg2e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 2)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg2e64_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg2e64_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg2e64_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg2e64_v(ExtMachInst _machInst);
    Vlseg2e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg3e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 3)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg3e64_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg3e64_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg3e64_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg3e64_v(ExtMachInst _machInst);
    Vlseg3e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg4e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 4)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg4e64_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg4e64_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg4e64_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg4e64_v(ExtMachInst _machInst);
    Vlseg4e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg5e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 5)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg5e64_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg5e64_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg5e64_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg5e64_v(ExtMachInst _machInst);
    Vlseg5e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg6e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 6)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg6e64_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg6e64_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg6e64_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg6e64_v(ExtMachInst _machInst);
    Vlseg6e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg7e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 7)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg7e64_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg7e64_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg7e64_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg7e64_v(ExtMachInst _machInst);
    Vlseg7e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// VlSegOp::vlseg8e64_v(['\n                                if ((machInst.vm || elem_mask_vseg(v0, ei + (field * micro_elems), 8)) &&\n                                    i < this->microVl) {\n                                    Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                                }\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedLoadOp'})


class Vlseg8e64_vMicro : public VlSegMicroInst
{
private:
    // rs1, vd, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vlseg8e64_vMicro(ExtMachInst _machInst, uint32_t _microVl, uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field, uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlSegMicroInst::generateDisassembly;
};



class Vlseg8e64_v : public VlSegMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vlseg8e64_v(ExtMachInst _machInst);
    Vlseg8e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlSegMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VlWholeOp::vl1re64_v(['\n                                Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl1re64_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl1re64_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl1re64_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl1re64_v(ExtMachInst _machInst);
    Vl1re64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl2re64_v(['\n                                Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl2re64_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl2re64_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl2re64_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl2re64_v(ExtMachInst _machInst);
    Vl2re64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl4re64_v(['\n                                Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl4re64_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl4re64_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl4re64_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl4re64_v(ExtMachInst _machInst);
    Vl4re64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// VlWholeOp::vl8re64_v(['\n                                Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                            '],{'inst_flags': 'SimdWholeRegisterLoadOp'})


class Vl8re64_vMicro: public VlWholeMicroInst
{
private:
    RegId destRegIdxArr[1];
    RegId srcRegIdxArr[1];
public:
    Vl8re64_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VlWholeMicroInst::generateDisassembly;
};



class Vl8re64_v : public VlWholeMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vl8re64_v(ExtMachInst _machInst);
    Vl8re64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlWholeMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VleOp::vle64ff_v((['\n                        if ((machInst.vm || elem_mask(v0, ei)) &&\n                            i < this->microVl && i < this->faultIdx) {\n                            Vd_ud[i] = Mem_vc.as<uint64_t>()[i];\n                        }\n                    '], {'inst_flags': 'SimdUnitStrideFaultOnlyFirstLoadOp'}))


class Vle64ff_vMicro : public VleMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vle64ff_vMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VleMicroInst::generateDisassembly;

};



class Vle64ff_v : public VleMacroInst
{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vle64ff_v(ExtMachInst _machInst);
    Vle64ff_v(ExtMachInst _machInst, uint32_t _vlen);
    using VleMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VlIndexOp::vluxei64_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_ud[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))


template<typename ElemType>
class Vluxei64_vMicro : public VlIndexMicroInst
{
private:
    // rs1, vs2, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vluxei64_vMicro(ExtMachInst _machInst,
        uint32_t _vdRegIdx, uint32_t _vdElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vluxei64_v : public VlIndexMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vluxei64_v(ExtMachInst _machInst);
    Vluxei64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlIndexMacroInst::generateDisassembly;
};


// VlStrideOp::vlse64_v((['\n                    Vd_ud[microIdx] = Mem_vc.as<uint64_t>()[0];\n                '], {'inst_flags': 'SimdStridedLoadOp'}))


class Vlse64_vMicro : public VlStrideMicroInst
{
private:
    // rs1, rs2, vtmp0, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
public:
    Vlse64_vMicro(ExtMachInst _machInst, uint32_t _regIdx, uint32_t _microIdx,
        uint32_t _microVl);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlStrideMicroInst::generateDisassembly;
};



class Vlse64_v : public VlStrideMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vlse64_v(ExtMachInst _machInst);
    Vlse64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlStrideMacroInst::generateDisassembly;
};


// VlIndexOp::vloxei64_v((['\n                    Vd_vu[vdElemIdx] = Mem_vc.as<vu>()[0];\n                ', '\n                    EA = Rs1 + Vs2_ud[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedLoadOp'}))


template<typename ElemType>
class Vloxei64_vMicro : public VlIndexMicroInst
{
private:
    // rs1, vs2, vm
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
public:
    Vloxei64_vMicro(ExtMachInst _machInst,
        uint32_t _vdRegIdx, uint32_t _vdElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VlIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vloxei64_v : public VlIndexMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vloxei64_v(ExtMachInst _machInst);
    Vloxei64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VlIndexMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// FenceOp::fence(['\n                ', 'uint64_t', 'IsReadBarrier', 'IsWriteBarrier', 'No_OpClass'],{})

    //
    // Static instruction class for "fence".
    //
    class Fence : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Fence(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// FenceOp::fence_i(['\n                ', 'uint64_t', 'IsNonSpeculative', 'IsSerializeAfter', 'IsSquashAfter', 'No_OpClass'],{})

    //
    // Static instruction class for "fence_i".
    //
    class Fence_i : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Fence_i(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// CBMOp::cbo_inval(['\n                        Mem = 0;\n                    '],{'mem_flags': ['INVALIDATE', 'DST_POC']})

    /**
     * Static instruction class for "cbo_inval".
     */
    class Cbo_inval : public Store
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Cbo_inval(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CBMOp::cbo_clean(['\n                        Mem = 0;\n                    '],{'mem_flags': ['CLEAN', 'DST_POC']})

    /**
     * Static instruction class for "cbo_clean".
     */
    class Cbo_clean : public Store
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Cbo_clean(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CBMOp::cbo_flush(['\n                        Mem = 0;\n                    '],{'mem_flags': ['CLEAN', 'INVALIDATE', 'DST_POC']})

    /**
     * Static instruction class for "cbo_flush".
     */
    class Cbo_flush : public Store
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Cbo_flush(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// CBMOp::cbo_zero(['\n                        Mem = 0;\n                    '],{'mem_flags': ['CACHE_BLOCK_ZERO']})

    /**
     * Static instruction class for "cbo_zero".
     */
    class Cbo_zero : public Store
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Cbo_zero(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// IOp::slli(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        Rd = rvSext(Rs1 << imm);\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})

    //
    // Static instruction class for "slli".
    //
    class Slli : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Slli(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::zip(['\n                            Rd_sw = _rvk_emu_zip_32(Rs1_sw);\n                        '],{'imm_code': ' imm = SHAMT5; '})

    //
    // Static instruction class for "zip".
    //
    class Zip : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Zip(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// IOp::sha256sum0(['\n                            Rd_sw = _rvk_emu_sha256sum0(Rs1_sw);\n                        '],{})

    //
    // Static instruction class for "sha256sum0".
    //
    class Sha256sum0 : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha256sum0(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::sha256sum1(['\n                            Rd_sw = _rvk_emu_sha256sum1(Rs1_sw);\n                        '],{})

    //
    // Static instruction class for "sha256sum1".
    //
    class Sha256sum1 : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha256sum1(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::sha256sig0(['\n                            Rd_sw = _rvk_emu_sha256sig0(Rs1_sw);\n                        '],{})

    //
    // Static instruction class for "sha256sig0".
    //
    class Sha256sig0 : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha256sig0(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::sha256sig1(['\n                            Rd_sw = _rvk_emu_sha256sig1(Rs1_sw);\n                        '],{})

    //
    // Static instruction class for "sha256sig1".
    //
    class Sha256sig1 : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha256sig1(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::sha512sum0(['\n                                Rd_sd = _rvk_emu_sha512sum0(Rs1_sd);\n                            '],{})

    //
    // Static instruction class for "sha512sum0".
    //
    class Sha512sum0 : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha512sum0(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// IOp::sha512sum1(['\n                                Rd_sd = _rvk_emu_sha512sum1(Rs1_sd);\n                            '],{})

    //
    // Static instruction class for "sha512sum1".
    //
    class Sha512sum1 : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha512sum1(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// IOp::sha512sig0(['\n                                Rd_sd = _rvk_emu_sha512sig0(Rs1_sd);\n                            '],{})

    //
    // Static instruction class for "sha512sig0".
    //
    class Sha512sig0 : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha512sig0(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// IOp::sha512sig1(['\n                                Rd_sd = _rvk_emu_sha512sig1(Rs1_sd);\n                            '],{})

    //
    // Static instruction class for "sha512sig1".
    //
    class Sha512sig1 : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha512sig1(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// IOp::sm3p0(['\n                            Rd_sw = _rvk_emu_sm3p0(Rs1_sw);\n                        '],{})

    //
    // Static instruction class for "sm3p0".
    //
    class Sm3p0 : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sm3p0(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::sm3p1(['\n                            Rd_sw = _rvk_emu_sm3p1(Rs1_sw);\n                        '],{})

    //
    // Static instruction class for "sm3p1".
    //
    class Sm3p1 : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sm3p1(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// IOp::bseti(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        uint64_t index = imm & rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 | (UINT64_C(1) << index));\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})

    //
    // Static instruction class for "bseti".
    //
    class Bseti : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Bseti(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::aes64im(['\n                                Rd_sd = _rvk_emu_aes64im(Rs1_sd);\n                            '],{})

    //
    // Static instruction class for "aes64im".
    //
    class Aes64im : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Aes64im(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// IOp::aes64ks1i(['\n                                Rd_sd = _rvk_emu_aes64ks1i(Rs1_sd, imm);\n                            '],{'imm_type': 'int32_t', 'imm_code': ' imm = RNUM; '})

    //
    // Static instruction class for "aes64ks1i".
    //
    class Aes64ks1i : public ImmOp<int32_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Aes64ks1i(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// IOp::bclri(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        uint64_t index = imm & rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 & (~(UINT64_C(1) << index)));\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})

    //
    // Static instruction class for "bclri".
    //
    class Bclri : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Bclri(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::binvi(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        uint64_t index = imm & rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 ^ (UINT64_C(1) << index));\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})

    //
    // Static instruction class for "binvi".
    //
    class Binvi : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Binvi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// ROp::clz(['\n                            Rd = (machInst.rv_type == RV32) ? clz32(Rs1) : clz64(Rs1);\n                        '],{})

    //
    // Static instruction class for "clz".
    //
    class Clz : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Clz(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::ctz(['\n                            Rd = (machInst.rv_type == RV32) ? ctz32(Rs1) : ctz64(Rs1);\n                        '],{})

    //
    // Static instruction class for "ctz".
    //
    class Ctz : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Ctz(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::cpop(['\n                            Rd = (machInst.rv_type == RV32) ? popCount(Rs1<31:0>) : popCount(Rs1);\n                        '],{})

    //
    // Static instruction class for "cpop".
    //
    class Cpop : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Cpop(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::sext_b(['\n                            Rd = sext<8>(Rs1_ub);\n                        '],{})

    //
    // Static instruction class for "sext_b".
    //
    class Sext_b : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sext_b(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::sext_h(['\n                            Rd = sext<16>(Rs1_uh);\n                        '],{})

    //
    // Static instruction class for "sext_h".
    //
    class Sext_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sext_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// IOp::addi(['\n                    Rd_sd = rvSext(Rs1_sd + imm);\n                '],{})

    //
    // Static instruction class for "addi".
    //
    class Addi : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Addi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::slti(['\n                    Rd = (rvSext(Rs1_sd) < imm) ? 1 : 0;\n                '],{})

    //
    // Static instruction class for "slti".
    //
    class Slti : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Slti(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::sltiu(['\n                    Rd = (rvZext(Rs1) < imm) ? 1 : 0;\n                ', 'uint64_t'],{'imm_code': ' imm = rvZext(sext<12>(IMM12)); '})

    //
    // Static instruction class for "sltiu".
    //
    class Sltiu : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sltiu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::xori(['\n                    Rd = rvSext(Rs1 ^ imm);\n                ', 'uint64_t'],{})

    //
    // Static instruction class for "xori".
    //
    class Xori : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Xori(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::srli(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        Rd = rvSext(rvZext(Rs1) >> imm);\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})

    //
    // Static instruction class for "srli".
    //
    class Srli : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Srli(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::unzip(['\n                            Rd_sw = _rvk_emu_unzip_32(Rs1_sw);\n                        '],{'imm_code': ' imm = SHAMT5; '})

    //
    // Static instruction class for "unzip".
    //
    class Unzip : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Unzip(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// IOp::orc_b(['\n                        uint64_t result = 0;\n                        result |= (Rs1<7:0> ? UINT64_C(0xff) : 0x0);\n                        result |= (Rs1<15:8> ? UINT64_C(0xff) : 0x0) << 8;\n                        result |= (Rs1<23:16> ? UINT64_C(0xff) : 0x0) << 16;\n                        result |= (Rs1<31:24> ? UINT64_C(0xff) : 0x0) << 24;\n                        result |= (Rs1<39:32> ? UINT64_C(0xff) : 0x0) << 32;\n                        result |= (Rs1<47:40> ? UINT64_C(0xff) : 0x0) << 40;\n                        result |= (Rs1<55:48> ? UINT64_C(0xff) : 0x0) << 48;\n                        result |= (Rs1<63:56> ? UINT64_C(0xff) : 0x0) << 56;\n                        Rd = rvSext(result);\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})

    //
    // Static instruction class for "orc_b".
    //
    class Orc_b : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Orc_b(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::srai(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        Rd_sd = rvSext(Rs1_sd) >> imm;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})

    //
    // Static instruction class for "srai".
    //
    class Srai : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Srai(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::bexti(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        uint64_t index = imm & rvSelect(32 - 1, 64 - 1);\n                        Rd = (Rs1 >> index) & 0x1;\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})

    //
    // Static instruction class for "bexti".
    //
    class Bexti : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Bexti(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::rori(['\n                        if (rvSelect((bool)SHAMT6BIT5, false)) {\n                            return std::make_shared<IllegalInstFault>(\n                                    "shmat[5] != 0", machInst);\n                        }\n                        uint64_t xlen = rvSelect(32, 64);\n                        Rd = rvSext((rvZext(Rs1) >> imm)\n                            | (Rs1 << ((xlen - imm) & (xlen - 1))));\n                    '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})

    //
    // Static instruction class for "rori".
    //
    class Rori : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Rori(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// ROp::rev8((['\n                            if (rvSelect((bool)SHAMT6BIT5, false)) {\n                                return std::make_shared<IllegalInstFault>(\n                                        "shmat[5] != 0", machInst);\n                            }\n                            if (machInst.rv_type == RV32) {\n                                Rd_sd = _rvk_emu_grev_32(Rs1_sd, 0x18);\n                            } else {\n                                Rd_sd = _rvk_emu_grev_64(Rs1_sd, 0x38);\n                            }\n                        '], {}))

    //
    // Static instruction class for "rev8".
    //
    class Rev8 : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Rev8(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::brev8((['\n                            if (machInst.rv_type == RV32) {\n                                Rd_sd = _rvk_emu_brev8_32(Rs1_sd);\n                            } else {\n                                Rd_sd = _rvk_emu_brev8_64(Rs1_sd);\n                            }\n                        '], {}))

    //
    // Static instruction class for "brev8".
    //
    class Brev8 : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Brev8(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// IOp::ori(['\n                    Rd = rvSext(Rs1 | imm);\n                ', 'uint64_t'],{})

    //
    // Static instruction class for "ori".
    //
    class Ori : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Ori(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::andi(['\n                    Rd = rvSext(Rs1 & imm);\n                ', 'uint64_t'],{})

    //
    // Static instruction class for "andi".
    //
    class Andi : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Andi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// UOp::auipc((['\n            Rd = rvSext(PC + (sext<20>(imm) << 12));\n        '], {}))

    //
    // Static instruction class for "auipc".
    //
    class Auipc : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Auipc(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::addiw(['\n                        Rd_sw = (int32_t)(Rs1_sw + imm);\n                    ', 'int32_t'],{})

    //
    // Static instruction class for "addiw".
    //
    class Addiw : public ImmOp<int32_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Addiw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::slliw(['\n                            Rd_sd = Rs1_sw << imm;\n                        '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})

    //
    // Static instruction class for "slliw".
    //
    class Slliw : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Slliw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::slli_uw(['\n                            Rd = ((uint64_t)(Rs1_uw)) << imm;\n                        '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT6; '})

    //
    // Static instruction class for "slli_uw".
    //
    class Slli_uw : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Slli_uw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::clzw(['\n                                Rd = clz32(Rs1);\n                            '],{})

    //
    // Static instruction class for "clzw".
    //
    class Clzw : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Clzw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::ctzw(['\n                                Rd = ctz32(Rs1);\n                            '],{})

    //
    // Static instruction class for "ctzw".
    //
    class Ctzw : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Ctzw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::cpopw(['\n                                Rd = popCount(Rs1<31:0>);\n                            '],{})

    //
    // Static instruction class for "cpopw".
    //
    class Cpopw : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Cpopw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// IOp::srliw(['\n                            Rd_sd = (int32_t)(Rs1_uw >> imm);\n                        '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})

    //
    // Static instruction class for "srliw".
    //
    class Srliw : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Srliw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::sraiw(['\n                            Rd_sd = Rs1_sw >> imm;\n                        '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})

    //
    // Static instruction class for "sraiw".
    //
    class Sraiw : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sraiw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// IOp::roriw(['\n                            Rd = (int32_t) ((Rs1_uw >> imm) | (Rs1_uw << ((32 - imm) & (32 - 1))));\n                        '],{'imm_type': 'uint64_t', 'imm_code': ' imm = SHAMT5; '})

    //
    // Static instruction class for "roriw".
    //
    class Roriw : public ImmOp<uint64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Roriw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// Store::sb(['\n                    Mem_ub = Rs2_ub;\n                '],{})

    /**
     * Static instruction class for "sb".
     */
    class Sb : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Sb(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Store::sh(['\n                    Mem_uh = Rs2_uh;\n                '],{})

    /**
     * Static instruction class for "sh".
     */
    class Sh : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Sh(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Store::sw(['\n                    Mem_uw = Rs2_uw;\n                '],{})

    /**
     * Static instruction class for "sw".
     */
    class Sw : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Sw(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Store::sd(['\n                        Mem_ud = Rs2_ud;\n                    '],{})

    /**
     * Static instruction class for "sd".
     */
    class Sd : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Sd(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// Store::fsh(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                "FPU is off", machInst);\n\n                    Mem_uh = unboxF16(boxF16(Fs2_bits));\n                '],{'inst_flags': 'FloatMemWriteOp'})

    /**
     * Static instruction class for "fsh".
     */
    class Fsh : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Fsh(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Store::fsw(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                "FPU is off", machInst);\n\n                    Mem_uw = unboxF32(boxF32(Fs2_bits));\n                '],{'inst_flags': 'FloatMemWriteOp'})

    /**
     * Static instruction class for "fsw".
     */
    class Fsw : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Fsw(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Store::fsd(['\n                    STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                    if (status.fs == FPUStatus::OFF)\n                        return std::make_shared<IllegalInstFault>(\n                                "FPU is off", machInst);\n\n                    Mem_ud = Fs2_bits;\n                '],{'inst_flags': 'FloatMemWriteOp'})

    /**
     * Static instruction class for "fsd".
     */
    class Fsd : public Store
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Fsd(ExtMachInst machInst);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// VseOp::vse8_v((['\n                            Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                        '], {'inst_flags': 'SimdUnitStrideStoreOp'}))


class Vse8_vMicro : public VseMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[0];
public:
    Vse8_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VseMicroInst::generateDisassembly;
};



class Vse8_v : public VseMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vse8_v(ExtMachInst _machInst);
    Vse8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VseMacroInst::generateDisassembly;
};


// VsSegOp::vsseg2e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg2e8_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg2e8_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg2e8_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg2e8_v(ExtMachInst _machInst);
    Vsseg2e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg3e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg3e8_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg3e8_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg3e8_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg3e8_v(ExtMachInst _machInst);
    Vsseg3e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg4e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg4e8_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg4e8_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg4e8_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg4e8_v(ExtMachInst _machInst);
    Vsseg4e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg5e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg5e8_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg5e8_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg5e8_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg5e8_v(ExtMachInst _machInst);
    Vsseg5e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg6e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg6e8_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg6e8_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg6e8_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg6e8_v(ExtMachInst _machInst);
    Vsseg6e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg7e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg7e8_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg7e8_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg7e8_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg7e8_v(ExtMachInst _machInst);
    Vsseg7e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg8e8_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg8e8_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg8e8_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg8e8_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg8e8_v(ExtMachInst _machInst);
    Vsseg8e8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VsWholeOp::vs1r_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdWholeRegisterStoreOp'})


class Vs1r_vMicro: public VsWholeMicroInst
{
private:
    RegId destRegIdxArr[0];
    RegId srcRegIdxArr[2];
public:
    Vs1r_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VsWholeMicroInst::generateDisassembly;
};



class Vs1r_v : public VsWholeMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vs1r_v(ExtMachInst _machInst);
    Vs1r_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsWholeMacroInst::generateDisassembly;
};


// VsWholeOp::vs2r_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdWholeRegisterStoreOp'})


class Vs2r_vMicro: public VsWholeMicroInst
{
private:
    RegId destRegIdxArr[0];
    RegId srcRegIdxArr[2];
public:
    Vs2r_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VsWholeMicroInst::generateDisassembly;
};



class Vs2r_v : public VsWholeMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vs2r_v(ExtMachInst _machInst);
    Vs2r_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsWholeMacroInst::generateDisassembly;
};


// VsWholeOp::vs4r_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdWholeRegisterStoreOp'})


class Vs4r_vMicro: public VsWholeMicroInst
{
private:
    RegId destRegIdxArr[0];
    RegId srcRegIdxArr[2];
public:
    Vs4r_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VsWholeMicroInst::generateDisassembly;
};



class Vs4r_v : public VsWholeMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vs4r_v(ExtMachInst _machInst);
    Vs4r_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsWholeMacroInst::generateDisassembly;
};


// VsWholeOp::vs8r_v(['\n                                Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                            '],{'inst_flags': 'SimdWholeRegisterStoreOp'})


class Vs8r_vMicro: public VsWholeMicroInst
{
private:
    RegId destRegIdxArr[0];
    RegId srcRegIdxArr[2];
public:
    Vs8r_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                        trace::InstRecord *) const override;
    using VsWholeMicroInst::generateDisassembly;
};



class Vs8r_v : public VsWholeMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vs8r_v(ExtMachInst _machInst);
    Vs8r_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsWholeMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VsmOp::vsm_v((['\n                        Mem_vc.as<uint8_t>()[i] = Vs3_ub[i];\n                    '], {'inst_flags': 'SimdUnitStrideMaskStoreOp'}))


class Vsm_v : public VseMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsm_v(ExtMachInst _machInst);
    Vsm_v(ExtMachInst _machInst, uint32_t _vlen);
    using VseMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VsIndexOp::vsuxei8_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_ub[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))


template<typename ElemType>
class Vsuxei8_vMicro : public VsIndexMicroInst
{
private:
    // rs1, vs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsuxei8_vMicro(ExtMachInst _machInst,
        uint32_t _vs3RegIdx, uint32_t _vs3ElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsuxei8_v : public VsIndexMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsuxei8_v(ExtMachInst _machInst);
    Vsuxei8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsIndexMacroInst::generateDisassembly;
};


// VsStrideOp::vsse8_v((['\n                    Mem_vc.as<uint8_t>()[0] = Vs3_ub[microIdx];\n                '], {'inst_flags': 'SimdStridedStoreOp'}))


class Vsse8_vMicro : public VsStrideMicroInst
{
private:
    // rs1, rs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsse8_vMicro(ExtMachInst _machInst, uint32_t _regIdx, uint32_t _microIdx,
            uint32_t _microVl);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsStrideMicroInst::generateDisassembly;
};



class Vsse8_v : public VsStrideMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsse8_v(ExtMachInst _machInst);
    Vsse8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsStrideMacroInst::generateDisassembly;
};


// VsIndexOp::vsoxei8_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_ub[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))


template<typename ElemType>
class Vsoxei8_vMicro : public VsIndexMicroInst
{
private:
    // rs1, vs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsoxei8_vMicro(ExtMachInst _machInst,
        uint32_t _vs3RegIdx, uint32_t _vs3ElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsoxei8_v : public VsIndexMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsoxei8_v(ExtMachInst _machInst);
    Vsoxei8_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsIndexMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VseOp::vse16_v((['\n                            Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                        '], {'inst_flags': 'SimdUnitStrideStoreOp'}))


class Vse16_vMicro : public VseMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[0];
public:
    Vse16_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VseMicroInst::generateDisassembly;
};



class Vse16_v : public VseMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vse16_v(ExtMachInst _machInst);
    Vse16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VseMacroInst::generateDisassembly;
};


// VsSegOp::vsseg2e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg2e16_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg2e16_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg2e16_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg2e16_v(ExtMachInst _machInst);
    Vsseg2e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg3e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg3e16_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg3e16_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg3e16_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg3e16_v(ExtMachInst _machInst);
    Vsseg3e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg4e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg4e16_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg4e16_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg4e16_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg4e16_v(ExtMachInst _machInst);
    Vsseg4e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg5e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg5e16_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg5e16_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg5e16_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg5e16_v(ExtMachInst _machInst);
    Vsseg5e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg6e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg6e16_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg6e16_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg6e16_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg6e16_v(ExtMachInst _machInst);
    Vsseg6e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg7e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg7e16_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg7e16_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg7e16_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg7e16_v(ExtMachInst _machInst);
    Vsseg7e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg8e16_v(['\n                                Mem_vc.as<uint16_t>()[i] = Vs3_uh[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg8e16_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg8e16_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg8e16_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg8e16_v(ExtMachInst _machInst);
    Vsseg8e16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// VsIndexOp::vsuxei16_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_uh[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))


template<typename ElemType>
class Vsuxei16_vMicro : public VsIndexMicroInst
{
private:
    // rs1, vs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsuxei16_vMicro(ExtMachInst _machInst,
        uint32_t _vs3RegIdx, uint32_t _vs3ElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsuxei16_v : public VsIndexMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsuxei16_v(ExtMachInst _machInst);
    Vsuxei16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsIndexMacroInst::generateDisassembly;
};


// VsStrideOp::vsse16_v((['\n                    Mem_vc.as<uint16_t>()[0] = Vs3_uh[microIdx];\n                '], {'inst_flags': 'SimdStridedStoreOp'}))


class Vsse16_vMicro : public VsStrideMicroInst
{
private:
    // rs1, rs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsse16_vMicro(ExtMachInst _machInst, uint32_t _regIdx, uint32_t _microIdx,
            uint32_t _microVl);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsStrideMicroInst::generateDisassembly;
};



class Vsse16_v : public VsStrideMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsse16_v(ExtMachInst _machInst);
    Vsse16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsStrideMacroInst::generateDisassembly;
};


// VsIndexOp::vsoxei16_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_uh[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))


template<typename ElemType>
class Vsoxei16_vMicro : public VsIndexMicroInst
{
private:
    // rs1, vs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsoxei16_vMicro(ExtMachInst _machInst,
        uint32_t _vs3RegIdx, uint32_t _vs3ElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsoxei16_v : public VsIndexMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsoxei16_v(ExtMachInst _machInst);
    Vsoxei16_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsIndexMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VseOp::vse32_v((['\n                            Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                        '], {'inst_flags': 'SimdUnitStrideStoreOp'}))


class Vse32_vMicro : public VseMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[0];
public:
    Vse32_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VseMicroInst::generateDisassembly;
};



class Vse32_v : public VseMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vse32_v(ExtMachInst _machInst);
    Vse32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VseMacroInst::generateDisassembly;
};


// VsSegOp::vsseg2e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg2e32_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg2e32_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg2e32_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg2e32_v(ExtMachInst _machInst);
    Vsseg2e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg3e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg3e32_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg3e32_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg3e32_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg3e32_v(ExtMachInst _machInst);
    Vsseg3e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg4e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg4e32_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg4e32_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg4e32_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg4e32_v(ExtMachInst _machInst);
    Vsseg4e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg5e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg5e32_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg5e32_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg5e32_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg5e32_v(ExtMachInst _machInst);
    Vsseg5e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg6e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg6e32_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg6e32_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg6e32_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg6e32_v(ExtMachInst _machInst);
    Vsseg6e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg7e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg7e32_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg7e32_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg7e32_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg7e32_v(ExtMachInst _machInst);
    Vsseg7e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg8e32_v(['\n                                Mem_vc.as<uint32_t>()[i] = Vs3_uw[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg8e32_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg8e32_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg8e32_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg8e32_v(ExtMachInst _machInst);
    Vsseg8e32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// VsIndexOp::vsuxei32_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_uw[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))


template<typename ElemType>
class Vsuxei32_vMicro : public VsIndexMicroInst
{
private:
    // rs1, vs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsuxei32_vMicro(ExtMachInst _machInst,
        uint32_t _vs3RegIdx, uint32_t _vs3ElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsuxei32_v : public VsIndexMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsuxei32_v(ExtMachInst _machInst);
    Vsuxei32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsIndexMacroInst::generateDisassembly;
};


// VsStrideOp::vsse32_v((['\n                    Mem_vc.as<uint32_t>()[0] = Vs3_uw[microIdx];\n                '], {'inst_flags': 'SimdStridedStoreOp'}))


class Vsse32_vMicro : public VsStrideMicroInst
{
private:
    // rs1, rs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsse32_vMicro(ExtMachInst _machInst, uint32_t _regIdx, uint32_t _microIdx,
            uint32_t _microVl);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsStrideMicroInst::generateDisassembly;
};



class Vsse32_v : public VsStrideMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsse32_v(ExtMachInst _machInst);
    Vsse32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsStrideMacroInst::generateDisassembly;
};


// VsIndexOp::vsoxei32_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_uw[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))


template<typename ElemType>
class Vsoxei32_vMicro : public VsIndexMicroInst
{
private:
    // rs1, vs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsoxei32_vMicro(ExtMachInst _machInst,
        uint32_t _vs3RegIdx, uint32_t _vs3ElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsoxei32_v : public VsIndexMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsoxei32_v(ExtMachInst _machInst);
    Vsoxei32_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsIndexMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VseOp::vse64_v((['\n                            Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                        '], {'inst_flags': 'SimdUnitStrideStoreOp'}))


class Vse64_vMicro : public VseMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[0];
public:
    Vse64_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VseMicroInst::generateDisassembly;
};



class Vse64_v : public VseMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vse64_v(ExtMachInst _machInst);
    Vse64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VseMacroInst::generateDisassembly;
};


// VsSegOp::vsseg2e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg2e64_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg2e64_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg2e64_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg2e64_v(ExtMachInst _machInst);
    Vsseg2e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg3e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg3e64_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg3e64_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg3e64_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg3e64_v(ExtMachInst _machInst);
    Vsseg3e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg4e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg4e64_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg4e64_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg4e64_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg4e64_v(ExtMachInst _machInst);
    Vsseg4e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg5e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg5e64_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg5e64_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg5e64_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg5e64_v(ExtMachInst _machInst);
    Vsseg5e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg6e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg6e64_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg6e64_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg6e64_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg6e64_v(ExtMachInst _machInst);
    Vsseg6e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg7e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg7e64_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg7e64_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg7e64_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg7e64_v(ExtMachInst _machInst);
    Vsseg7e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// VsSegOp::vsseg8e64_v(['\n                                Mem_vc.as<uint64_t>()[i] = Vs3_ud[i];\n                            '],{'inst_flags': 'SimdUnitStrideSegmentedStoreOp'})


class Vsseg8e64_vMicro : public VsSegMicroInst
{
private:
    // rs1, rs2, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    uint32_t field;
    uint32_t numFields;
    uint32_t numMicroops;
public:
    Vsseg8e64_vMicro(ExtMachInst _machInst, uint32_t _microVl,
    uint32_t _microIdx, uint32_t _numMicroops, uint32_t _field,
    uint32_t _numFields, uint32_t _vlen);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsSegMicroInst::generateDisassembly;
};



class Vsseg8e64_v : public VsSegMacroInst
{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];
public:
    Vsseg8e64_v(ExtMachInst _machInst);
    Vsseg8e64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsSegMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// VsIndexOp::vsuxei64_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_ud[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))


template<typename ElemType>
class Vsuxei64_vMicro : public VsIndexMicroInst
{
private:
    // rs1, vs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsuxei64_vMicro(ExtMachInst _machInst,
        uint32_t _vs3RegIdx, uint32_t _vs3ElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsuxei64_v : public VsIndexMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsuxei64_v(ExtMachInst _machInst);
    Vsuxei64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsIndexMacroInst::generateDisassembly;
};


// VsStrideOp::vsse64_v((['\n                    Mem_vc.as<uint64_t>()[0] = Vs3_ud[microIdx];\n                '], {'inst_flags': 'SimdStridedStoreOp'}))


class Vsse64_vMicro : public VsStrideMicroInst
{
private:
    // rs1, rs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsse64_vMicro(ExtMachInst _machInst, uint32_t _regIdx, uint32_t _microIdx,
            uint32_t _microVl);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsStrideMicroInst::generateDisassembly;
};



class Vsse64_v : public VsStrideMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsse64_v(ExtMachInst _machInst);
    Vsse64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsStrideMacroInst::generateDisassembly;
};


// VsIndexOp::vsoxei64_v((['\n                    Mem_vc.as<vu>()[0] = Vs3_vu[vs3ElemIdx];\n                ', '\n                    EA = Rs1 + Vs2_ud[vs2ElemIdx];\n                '], {'inst_flags': 'SimdIndexedStoreOp'}))


template<typename ElemType>
class Vsoxei64_vMicro : public VsIndexMicroInst
{
private:
    // rs1, vs2, vs3, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[0];
public:
    Vsoxei64_vMicro(ExtMachInst _machInst,
        uint32_t _vs3RegIdx, uint32_t _vs3ElemIdx,
        uint32_t _vs2RegIdx, uint32_t _vs2ElemIdx);

    Fault execute(ExecContext *, trace::InstRecord *) const override;
    Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
    Fault completeAcc(PacketPtr, ExecContext *,
                      trace::InstRecord *) const override;
    using VsIndexMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsoxei64_v : public VsIndexMacroInst
{
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[0];
public:
    Vsoxei64_v(ExtMachInst _machInst);
    Vsoxei64_v(ExtMachInst _machInst, uint32_t _vlen);
    using VsIndexMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// LoadReserved::lr_w((['\n                    Rd_sd = Mem_sw;\n                '], {'mem_flags': 'LLSC'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Lr_w : public LoadReserved
    {
      public:
        // Constructor
        Lr_w(ExtMachInst machInst);

      protected:
        class Lr_wMicro;
    };

    class Lr_w::Lr_wMicro : public LoadReservedMicro
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Lr_wMicro(ExtMachInst machInst, Lr_w *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// StoreCond::sc_w((['\n                    Mem_uw = Rs2_uw;\n                ', '\n                    Rd = rvSext(result);\n                '], {'inst_flags': 'IsStoreConditional', 'mem_flags': 'LLSC'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Sc_w : public StoreCond
    {
      public:
        // Constructor
        Sc_w(ExtMachInst machInst);

      protected:
        class Sc_wMicro;
    };

    class Sc_w::Sc_wMicro : public StoreCondMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Sc_wMicro(ExtMachInst machInst, Sc_w *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amoadd_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<int32_t> *amo_op =\n                          new AtomicGenericOp<int32_t>(Rs2_sw,\n                                  [](int32_t* b, int32_t a){ *b += a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amoadd_w : public AtomicMemOp
    {
      public:
        // Constructor
        Amoadd_w(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amoadd_wRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amoadd_w::Amoadd_wRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amoadd_wRMW(ExtMachInst machInst, Amoadd_w *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amoswap_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amoswap_w : public AtomicMemOp
    {
      public:
        // Constructor
        Amoswap_w(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amoswap_wRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amoswap_w::Amoswap_wRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amoswap_wRMW(ExtMachInst machInst, Amoswap_w *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amoxor_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b ^= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amoxor_w : public AtomicMemOp
    {
      public:
        // Constructor
        Amoxor_w(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amoxor_wRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amoxor_w::Amoxor_wRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amoxor_wRMW(ExtMachInst machInst, Amoxor_w *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amoor_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b |= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amoor_w : public AtomicMemOp
    {
      public:
        // Constructor
        Amoor_w(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amoor_wRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amoor_w::Amoor_wRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amoor_wRMW(ExtMachInst machInst, Amoor_w *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amoand_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                          new AtomicGenericOp<uint32_t>(Rs2_uw,\n                                  [](uint32_t* b, uint32_t a){ *b &= a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amoand_w : public AtomicMemOp
    {
      public:
        // Constructor
        Amoand_w(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amoand_wRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amoand_w::Amoand_wRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amoand_wRMW(ExtMachInst machInst, Amoand_w *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amomin_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<int32_t> *amo_op =\n                      new AtomicGenericOp<int32_t>(Rs2_sw,\n                        [](int32_t* b, int32_t a){ if (a < *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amomin_w : public AtomicMemOp
    {
      public:
        // Constructor
        Amomin_w(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amomin_wRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amomin_w::Amomin_wRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amomin_wRMW(ExtMachInst machInst, Amomin_w *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amomax_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<int32_t> *amo_op =\n                      new AtomicGenericOp<int32_t>(Rs2_sw,\n                        [](int32_t* b, int32_t a){ if (a > *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amomax_w : public AtomicMemOp
    {
      public:
        // Constructor
        Amomax_w(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amomax_wRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amomax_w::Amomax_wRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amomax_wRMW(ExtMachInst machInst, Amomax_w *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amominu_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                      new AtomicGenericOp<uint32_t>(Rs2_uw,\n                        [](uint32_t* b, uint32_t a){ if (a < *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amominu_w : public AtomicMemOp
    {
      public:
        // Constructor
        Amominu_w(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amominu_wRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amominu_w::Amominu_wRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amominu_wRMW(ExtMachInst machInst, Amominu_w *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amomaxu_w((['\n                    Rd_sd = Mem_sw;\n                ', '\n                    TypedAtomicOpFunctor<uint32_t> *amo_op =\n                      new AtomicGenericOp<uint32_t>(Rs2_uw,\n                        [](uint32_t* b, uint32_t a){ if (a > *b) *b = a; });\n                '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amomaxu_w : public AtomicMemOp
    {
      public:
        // Constructor
        Amomaxu_w(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amomaxu_wRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amomaxu_w::Amomaxu_wRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amomaxu_wRMW(ExtMachInst machInst, Amomaxu_w *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// LoadReserved::lr_d((['\n                        Rd_sd = Mem_sd;\n                    '], {'mem_flags': 'LLSC'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Lr_d : public LoadReserved
    {
      public:
        // Constructor
        Lr_d(ExtMachInst machInst);

      protected:
        class Lr_dMicro;
    };

    class Lr_d::Lr_dMicro : public LoadReservedMicro
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Lr_dMicro(ExtMachInst machInst, Lr_d *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// StoreCond::sc_d((['\n                        Mem = Rs2;\n                    ', '\n                        Rd = result;\n                    '], {'mem_flags': 'LLSC', 'inst_flags': 'IsStoreConditional'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Sc_d : public StoreCond
    {
      public:
        // Constructor
        Sc_d(ExtMachInst machInst);

      protected:
        class Sc_dMicro;
    };

    class Sc_d::Sc_dMicro : public StoreCondMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Sc_dMicro(ExtMachInst machInst, Sc_d *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amoadd_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<int64_t> *amo_op =\n                              new AtomicGenericOp<int64_t>(Rs2_sd,\n                                      [](int64_t* b, int64_t a){ *b += a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amoadd_d : public AtomicMemOp
    {
      public:
        // Constructor
        Amoadd_d(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amoadd_dRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amoadd_d::Amoadd_dRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amoadd_dRMW(ExtMachInst machInst, Amoadd_d *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amoswap_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                              new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                      [](uint64_t* b, uint64_t a){ *b = a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amoswap_d : public AtomicMemOp
    {
      public:
        // Constructor
        Amoswap_d(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amoswap_dRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amoswap_d::Amoswap_dRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amoswap_dRMW(ExtMachInst machInst, Amoswap_d *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amoxor_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                              new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                     [](uint64_t* b, uint64_t a){ *b ^= a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amoxor_d : public AtomicMemOp
    {
      public:
        // Constructor
        Amoxor_d(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amoxor_dRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amoxor_d::Amoxor_dRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amoxor_dRMW(ExtMachInst machInst, Amoxor_d *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amoor_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                              new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                     [](uint64_t* b, uint64_t a){ *b |= a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amoor_d : public AtomicMemOp
    {
      public:
        // Constructor
        Amoor_d(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amoor_dRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amoor_d::Amoor_dRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amoor_dRMW(ExtMachInst machInst, Amoor_d *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amoand_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                              new AtomicGenericOp<uint64_t>(Rs2_ud,\n                                     [](uint64_t* b, uint64_t a){ *b &= a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amoand_d : public AtomicMemOp
    {
      public:
        // Constructor
        Amoand_d(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amoand_dRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amoand_d::Amoand_dRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amoand_dRMW(ExtMachInst machInst, Amoand_d *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amomin_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<int64_t> *amo_op =\n                          new AtomicGenericOp<int64_t>(Rs2_sd,\n                            [](int64_t* b, int64_t a){ if (a < *b) *b = a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amomin_d : public AtomicMemOp
    {
      public:
        // Constructor
        Amomin_d(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amomin_dRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amomin_d::Amomin_dRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amomin_dRMW(ExtMachInst machInst, Amomin_d *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amomax_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<int64_t> *amo_op =\n                          new AtomicGenericOp<int64_t>(Rs2_sd,\n                            [](int64_t* b, int64_t a){ if (a > *b) *b = a; });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amomax_d : public AtomicMemOp
    {
      public:
        // Constructor
        Amomax_d(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amomax_dRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amomax_d::Amomax_dRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amomax_dRMW(ExtMachInst machInst, Amomax_d *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amominu_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                          new AtomicGenericOp<uint64_t>(Rs2_ud,\n                            [](uint64_t* b, uint64_t a){\n                              if (a < *b) *b = a;\n                            });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amominu_d : public AtomicMemOp
    {
      public:
        // Constructor
        Amominu_d(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amominu_dRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amominu_d::Amominu_dRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amominu_dRMW(ExtMachInst machInst, Amominu_d *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// AtomicMemOp::amomaxu_d((['\n                        Rd_sd = Mem_sd;\n                    ', '\n                        TypedAtomicOpFunctor<uint64_t> *amo_op =\n                          new AtomicGenericOp<uint64_t>(Rs2_ud,\n                            [](uint64_t* b, uint64_t a){\n                              if (a > *b) *b = a;\n                            });\n                    '], {'mem_flags': 'ATOMIC_RETURN_OP'}))

    /**
     * Static instruction class for an AtomicMemOp operation
     */
    class Amomaxu_d : public AtomicMemOp
    {
      public:
        // Constructor
        Amomaxu_d(ExtMachInst machInst);

      protected:
        /*
         * The main RMW part of an AMO
         */
        class Amomaxu_dRMW;
    };

    /*
     * The main RMW part of an AMO
     */
    class Amomaxu_d::Amomaxu_dRMW : public AtomicMemOpMicro
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        // Constructor
        Amomaxu_dRMW(ExtMachInst machInst, Amomaxu_d *_p);

        Fault execute(ExecContext *, trace::InstRecord *) const override;
        Fault initiateAcc(ExecContext *, trace::InstRecord *) const override;
        Fault completeAcc(PacketPtr, ExecContext *,
                          trace::InstRecord *) const override;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// ROp::add(['\n                            Rd = rvSext(Rs1_sd + Rs2_sd);\n                        '],{})

    //
    // Static instruction class for "add".
    //
    class Add : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Add(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::sub(['\n                            Rd = rvSext(Rs1_sd - Rs2_sd);\n                        '],{})

    //
    // Static instruction class for "sub".
    //
    class Sub : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sub(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::mul(['\n                            Rd = rvSext(Rs1_sd * Rs2_sd);\n                        ', 'IntMultOp'],{})

    //
    // Static instruction class for "mul".
    //
    class Mul : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Mul(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::sha512sum0r(['\n                                Rd_sw = _rvk_emu_sha512sum0r(Rs1_sw, Rs2_sw);\n                            '],{})

    //
    // Static instruction class for "sha512sum0r".
    //
    class Sha512sum0r : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha512sum0r(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// ROp::sha512sum1r(['\n                                Rd_sw = _rvk_emu_sha512sum1r(Rs1_sw, Rs2_sw);\n                            '],{})

    //
    // Static instruction class for "sha512sum1r".
    //
    class Sha512sum1r : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha512sum1r(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// ROp::sha512sig0l(['\n                                Rd_sw = _rvk_emu_sha512sig0l(Rs1_sw, Rs2_sw);\n                            '],{})

    //
    // Static instruction class for "sha512sig0l".
    //
    class Sha512sig0l : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha512sig0l(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// ROp::sha512sig1l(['\n                                Rd_sw = _rvk_emu_sha512sig1l(Rs1_sw, Rs2_sw);\n                            '],{})

    //
    // Static instruction class for "sha512sig1l".
    //
    class Sha512sig1l : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha512sig1l(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// ROp::sha512sig0h(['\n                                Rd_sw = _rvk_emu_sha512sig0h(Rs1_sw, Rs2_sw);\n                            '],{})

    //
    // Static instruction class for "sha512sig0h".
    //
    class Sha512sig0h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha512sig0h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// ROp::sha512sig1h(['\n                                Rd_sw = _rvk_emu_sha512sig1h(Rs1_sw, Rs2_sw);\n                            '],{})

    //
    // Static instruction class for "sha512sig1h".
    //
    class Sha512sig1h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sha512sig1h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// BSOp::aes32esi((['\n                            Rd_sw = _rvk_emu_aes32esi(Rs1_sw, Rs2_sw, bs);\n                        '], {}))

    //
    // Static instruction class for "aes32esi".
    //
    class Aes32esi : public BSOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Aes32esi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using BSOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// BSOp::aes32esmi((['\n                            Rd_sw = _rvk_emu_aes32esmi(Rs1_sw, Rs2_sw, bs);\n                        '], {}))

    //
    // Static instruction class for "aes32esmi".
    //
    class Aes32esmi : public BSOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Aes32esmi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using BSOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// BSOp::aes32dsi((['\n                            Rd_sw = _rvk_emu_aes32dsi(Rs1_sw, Rs2_sw, bs);\n                        '], {}))

    //
    // Static instruction class for "aes32dsi".
    //
    class Aes32dsi : public BSOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Aes32dsi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using BSOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// BSOp::aes32dsmi((['\n                            Rd_sw = _rvk_emu_aes32dsmi(Rs1_sw, Rs2_sw, bs);\n                        '], {}))

    //
    // Static instruction class for "aes32dsmi".
    //
    class Aes32dsmi : public BSOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Aes32dsmi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using BSOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// BSOp::sm4ed((['\n                        Rd_sw = _rvk_emu_sm4ed(Rs1_sw, Rs2_sw, bs);\n                    '], {}))

    //
    // Static instruction class for "sm4ed".
    //
    class Sm4ed : public BSOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sm4ed(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using BSOp::generateDisassembly;
    };

// ROp::aes64es(['\n                                Rd_sd = _rvk_emu_aes64es(Rs1_sd, Rs2_sd);\n                            '],{})

    //
    // Static instruction class for "aes64es".
    //
    class Aes64es : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Aes64es(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// BSOp::sm4ks((['\n                        Rd_sw = _rvk_emu_sm4ks(Rs1_sw, Rs2_sw, bs);\n                    '], {}))

    //
    // Static instruction class for "sm4ks".
    //
    class Sm4ks : public BSOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sm4ks(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using BSOp::generateDisassembly;
    };

// ROp::aes64esm(['\n                                Rd_sd = _rvk_emu_aes64esm(Rs1_sd, Rs2_sd);\n                            '],{})

    //
    // Static instruction class for "aes64esm".
    //
    class Aes64esm : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Aes64esm(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// ROp::aes64ds(['\n                                Rd_sd = _rvk_emu_aes64ds(Rs1_sd, Rs2_sd);\n                            '],{})

    //
    // Static instruction class for "aes64ds".
    //
    class Aes64ds : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Aes64ds(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// ROp::aes64dsm(['\n                                Rd_sd = _rvk_emu_aes64dsm(Rs1_sd, Rs2_sd);\n                            '],{})

    //
    // Static instruction class for "aes64dsm".
    //
    class Aes64dsm : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Aes64dsm(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::aes64ks2(['\n                                Rd_sd = _rvk_emu_aes64ks2(Rs1_sd, Rs2_sd);\n                            '],{})

    //
    // Static instruction class for "aes64ks2".
    //
    class Aes64ks2 : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Aes64ks2(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// ROp::sll(['\n                        Rd = rvSext(Rs1 << rvSelect(Rs2<4:0>, Rs2<5:0>));\n                    '],{})

    //
    // Static instruction class for "sll".
    //
    class Sll : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sll(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::mulh(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = mulh<int32_t>(Rs1_sd, Rs2_sd);\n                        } else {\n                            Rd_sd = mulh<int64_t>(Rs1_sd, Rs2_sd);\n                        }\n                    ', 'IntMultOp'],{})

    //
    // Static instruction class for "mulh".
    //
    class Mulh : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Mulh(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::clmul(['\n                        uint64_t result = 0;\n                        for (int i = 0; i < rvSelect(32, 64); i++) {\n                            if ((Rs2 >> i) & 1) {\n                                result ^= Rs1 << i;\n                            }\n                        }\n                        Rd = rvSext(result);\n                    '],{})

    //
    // Static instruction class for "clmul".
    //
    class Clmul : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Clmul(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::bset(['\n                        Rs2 &= rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 | (UINT64_C(1) << Rs2));\n                    '],{})

    //
    // Static instruction class for "bset".
    //
    class Bset : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Bset(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::bclr(['\n                        Rs2 &= rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 & (~(UINT64_C(1) << Rs2)));\n                    '],{})

    //
    // Static instruction class for "bclr".
    //
    class Bclr : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Bclr(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::rol(['\n                        uint64_t xlen = rvSelect(32, 64);\n                        int shamt = Rs2 & (xlen - 1);\n                        Rd = rvSext((Rs1 << shamt)\n                            | (rvZext(Rs1) >> ((xlen - shamt) & (xlen - 1))));\n                    '],{})

    //
    // Static instruction class for "rol".
    //
    class Rol : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Rol(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::binv(['\n                        Rs2 &= rvSelect(32 - 1, 64 - 1);\n                        Rd = rvSext(Rs1 ^ (UINT64_C(1) << Rs2));\n                    '],{})

    //
    // Static instruction class for "binv".
    //
    class Binv : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Binv(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::slt(['\n                        Rd = (rvSext(Rs1_sd) < rvSext(Rs2_sd)) ? 1 : 0;\n                    '],{})

    //
    // Static instruction class for "slt".
    //
    class Slt : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Slt(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::mulhsu(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = mulhsu<int32_t>(Rs1_sd, Rs2);\n                        } else {\n                            Rd_sd = mulhsu<int64_t>(Rs1_sd, Rs2);\n                        }\n                    ', 'IntMultOp'],{})

    //
    // Static instruction class for "mulhsu".
    //
    class Mulhsu : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Mulhsu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::clmulr(['\n                        uint64_t result = 0;\n                        uint64_t xlen = rvSelect(32, 64);\n                        uint64_t zextRs1 = rvZext(Rs1);\n                        for (int i = 0; i < xlen; i++) {\n                            if ((Rs2 >> i) & 1) {\n                                result ^= zextRs1 >> (xlen-i-1);\n                            }\n                        }\n                        Rd = rvSext(result);\n                    '],{})

    //
    // Static instruction class for "clmulr".
    //
    class Clmulr : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Clmulr(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::sh1add(['\n                        Rd = rvSext((Rs1 << 1) + Rs2);\n                    '],{})

    //
    // Static instruction class for "sh1add".
    //
    class Sh1add : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sh1add(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::xperm4(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = _rvk_emu_xperm4_32(Rs1_sd, Rs2_sd);\n                        } else {\n                            Rd_sd = _rvk_emu_xperm4_64(Rs1_sd, Rs2_sd);\n                        }\n                    '],{})

    //
    // Static instruction class for "xperm4".
    //
    class Xperm4 : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Xperm4(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::sltu(['\n                        Rd = (rvZext(Rs1) < rvZext(Rs2)) ? 1 : 0;\n                    '],{})

    //
    // Static instruction class for "sltu".
    //
    class Sltu : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sltu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::mulhu(['\n                        if (machInst.rv_type == RV32) {\n                            Rd = (int32_t)mulhu<uint32_t>(Rs1, Rs2);\n                        } else {\n                            Rd = mulhu<uint64_t>(Rs1, Rs2);\n                        }\n                    ', 'IntMultOp'],{})

    //
    // Static instruction class for "mulhu".
    //
    class Mulhu : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Mulhu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::clmulh(['\n                        uint64_t result = 0;\n                        uint64_t xlen = rvSelect(32, 64);\n                        uint64_t zextRs1 = rvZext(Rs1);\n                        for (int i = 1; i < xlen; i++) {\n                            if ((Rs2 >> i) & 1) {\n                                result ^= zextRs1 >> (xlen-i);\n                            }\n                        }\n                        // The MSB can never be 1, no need to sign extend.\n                        Rd = result;\n                    '],{})

    //
    // Static instruction class for "clmulh".
    //
    class Clmulh : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Clmulh(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::xor(['\n                        Rd = rvSext(Rs1 ^ Rs2);\n                    '],{})

    //
    // Static instruction class for "xor".
    //
    class Xor : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Xor(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::div(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = div<int32_t>(Rs1, Rs2);\n                        } else {\n                            Rd_sd = div<int64_t>(Rs1, Rs2);\n                        }\n                    ', 'IntDivOp'],{})

    //
    // Static instruction class for "div".
    //
    class Div : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Div(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::pack(['\n                        int xlen = rvSelect(32, 64);\n                        Rd = rvSext(\n                            (bits(Rs2, xlen/2-1, 0) << (xlen / 2)) | \\\n                            bits(Rs1, xlen/2-1, 0)\n                        );\n                    '],{})

    //
    // Static instruction class for "pack".
    //
    class Pack : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Pack(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::min(['\n                        Rd_sd = std::min(rvSext(Rs1_sd), rvSext(Rs2_sd));\n                    '],{})

    //
    // Static instruction class for "min".
    //
    class Min : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Min(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::sh2add(['\n                        Rd = rvSext((Rs1 << 2) + Rs2);\n                    '],{})

    //
    // Static instruction class for "sh2add".
    //
    class Sh2add : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sh2add(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::xperm8(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = _rvk_emu_xperm8_32(Rs1_sd, Rs2_sd);\n                        } else {\n                            Rd_sd = _rvk_emu_xperm8_64(Rs1_sd, Rs2_sd);\n                        }\n                    '],{})

    //
    // Static instruction class for "xperm8".
    //
    class Xperm8 : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Xperm8(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::xnor(['\n                        Rd = rvSext(~(Rs1 ^ Rs2));\n                    '],{})

    //
    // Static instruction class for "xnor".
    //
    class Xnor : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Xnor(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::srl(['\n                        Rd = rvSext(rvZext(Rs1) >>\n                                    rvSelect(Rs2<4:0>, Rs2<5:0>));\n                    '],{})

    //
    // Static instruction class for "srl".
    //
    class Srl : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Srl(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::divu(['\n                        if (machInst.rv_type == RV32) {\n                            Rd = (int32_t)divu<uint32_t>(Rs1, Rs2);\n                        } else {\n                            Rd = divu<uint64_t>(Rs1, Rs2);\n                        }\n                    ', 'IntDivOp'],{})

    //
    // Static instruction class for "divu".
    //
    class Divu : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Divu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::czero_eqz(['\n                        Rd = rvSext(Rs2) == 0 ? 0 : rvSext(Rs1);\n                    '],{})

    //
    // Static instruction class for "czero_eqz".
    //
    class Czero_eqz : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Czero_eqz(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::sra(['\n                        Rd = rvSext(Rs1_sd) >> rvSelect(Rs2<4:0>, Rs2<5:0>);\n                    '],{})

    //
    // Static instruction class for "sra".
    //
    class Sra : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sra(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::minu(['\n                        Rd = rvSext(std::min(rvZext(Rs1), rvZext(Rs2)));\n                    '],{})

    //
    // Static instruction class for "minu".
    //
    class Minu : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Minu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::bext(["\n                        Rs2 &= (rvSelect(32, 64) - 1);\n                        // It doesn't need to sign ext because MSB is always 0\n                        Rd = (Rs1 >> Rs2) & 0x1;\n                    "],{})

    //
    // Static instruction class for "bext".
    //
    class Bext : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Bext(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::ror(['\n                        uint64_t xlen = rvSelect(32, 64);\n                        int shamt = Rs2 & (xlen - 1);\n                        Rd = rvSext((rvZext(Rs1) >> shamt)\n                            | (Rs1 << ((xlen - shamt) & (xlen - 1))));\n                    '],{})

    //
    // Static instruction class for "ror".
    //
    class Ror : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Ror(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::or(['\n                        Rd = rvSext(Rs1 | Rs2);\n                    '],{})

    //
    // Static instruction class for "or".
    //
    class Or : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Or(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::rem(['\n                        if (machInst.rv_type == RV32) {\n                            Rd_sd = rem<int32_t>(Rs1, Rs2);\n                        } else {\n                            Rd_sd = rem<int64_t>(Rs1, Rs2);\n                        }\n                    ', 'IntDivOp'],{})

    //
    // Static instruction class for "rem".
    //
    class Rem : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Rem(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::max(['\n                        Rd_sd = std::max(rvSext(Rs1_sd), rvSext(Rs2_sd));\n                    '],{})

    //
    // Static instruction class for "max".
    //
    class Max : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Max(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::sh3add(['\n                        Rd = rvSext((Rs1 << 3) + Rs2);\n                    '],{})

    //
    // Static instruction class for "sh3add".
    //
    class Sh3add : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sh3add(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::orn(['\n                        Rd = rvSext(Rs1 | (~Rs2));\n                    '],{})

    //
    // Static instruction class for "orn".
    //
    class Orn : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Orn(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::and(['\n                        Rd = rvSext(Rs1 & Rs2);\n                    '],{})

    //
    // Static instruction class for "and".
    //
    class And : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        And(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::remu(['\n                        if (machInst.rv_type == RV32) {\n                            Rd = (int32_t)remu<uint32_t>(Rs1, Rs2);\n                        } else {\n                            Rd = remu<uint64_t>(Rs1, Rs2);\n                        }\n                    ', 'IntDivOp'],{})

    //
    // Static instruction class for "remu".
    //
    class Remu : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Remu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::packh(["\n                        // It doesn't need to sign ext as MSB is always 0\n                        Rd = (Rs2_ub << 8) | Rs1_ub;\n                    "],{})

    //
    // Static instruction class for "packh".
    //
    class Packh : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Packh(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::maxu(['\n                        Rd = rvSext(std::max(rvZext(Rs1), rvZext(Rs2)));\n                    '],{})

    //
    // Static instruction class for "maxu".
    //
    class Maxu : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Maxu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::czero_nez(['\n                        Rd = rvSext(Rs2) != 0 ? 0 : rvSext(Rs1);\n                    '],{})

    //
    // Static instruction class for "czero_nez".
    //
    class Czero_nez : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Czero_nez(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::andn(['\n                        Rd = rvSext(Rs1 & (~Rs2));\n                    '],{})

    //
    // Static instruction class for "andn".
    //
    class Andn : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Andn(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// UOp::lui((['\n            Rd = (sext<20>(imm) << 12);\n        '], {}))

    //
    // Static instruction class for "lui".
    //
    class Lui : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Lui(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::string generateDisassembly(Addr pc,
            const loader::SymbolTable *symtab) const override;
    };

// ROp::addw(['\n                            Rd_sd = Rs1_sw + Rs2_sw;\n                        '],{})

    //
    // Static instruction class for "addw".
    //
    class Addw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Addw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::mulw(['\n                            Rd_sd = (int32_t)(Rs1_sw*Rs2_sw);\n                        ', 'IntMultOp'],{})

    //
    // Static instruction class for "mulw".
    //
    class Mulw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Mulw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::add_uw(['\n                            Rd = Rs1_uw + Rs2;\n                        '],{})

    //
    // Static instruction class for "add_uw".
    //
    class Add_uw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Add_uw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::subw(['\n                            Rd_sd = Rs1_sw - Rs2_sw;\n                        '],{})

    //
    // Static instruction class for "subw".
    //
    class Subw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Subw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::sllw(['\n                            Rd_sd = Rs1_sw << Rs2<4:0>;\n                        '],{})

    //
    // Static instruction class for "sllw".
    //
    class Sllw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sllw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::rolw(['\n                            int shamt = Rs2 & (32 - 1);\n                            Rd = (int32_t) ((Rs1_uw << shamt) | (Rs1_uw >> ((32 - shamt) & (32 - 1))));\n                        '],{})

    //
    // Static instruction class for "rolw".
    //
    class Rolw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Rolw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::sh1add_uw(['\n                            Rd = (((uint64_t)Rs1_uw) << 1) + Rs2;\n                        '],{})

    //
    // Static instruction class for "sh1add_uw".
    //
    class Sh1add_uw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sh1add_uw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::divw(['\n                            Rd_sd = div<int32_t>(Rs1, Rs2);\n                        ', 'IntDivOp'],{})

    //
    // Static instruction class for "divw".
    //
    class Divw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Divw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::packw(['\n                            Rd_sd = sext<32>((Rs2_uh << 16) | Rs1_uh);\n                        '],{})

    //
    // Static instruction class for "packw".
    //
    class Packw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Packw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::sh2add_uw(['\n                            Rd = (((uint64_t)Rs1_uw) << 2) + Rs2;\n                        '],{})

    //
    // Static instruction class for "sh2add_uw".
    //
    class Sh2add_uw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sh2add_uw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::srlw(['\n                            Rd_sd = (int32_t)(Rs1_uw >> Rs2<4:0>);\n                        '],{})

    //
    // Static instruction class for "srlw".
    //
    class Srlw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Srlw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::divuw(['\n                            Rd = sext<32>(divu<uint32_t>(Rs1, Rs2));\n                        ', 'IntDivOp'],{})

    //
    // Static instruction class for "divuw".
    //
    class Divuw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Divuw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::sraw(['\n                            Rd_sd = Rs1_sw >> Rs2<4:0>;\n                        '],{})

    //
    // Static instruction class for "sraw".
    //
    class Sraw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sraw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::rorw(['\n                            int shamt = Rs2 & (32 - 1);\n                            Rd = (int32_t) ((Rs1_uw >> shamt) | (Rs1_uw << ((32 - shamt) & (32 - 1))));\n                        '],{})

    //
    // Static instruction class for "rorw".
    //
    class Rorw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Rorw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::remw(['\n                            Rd_sd = rem<int32_t>(Rs1, Rs2);\n                        ', 'IntDivOp'],{})

    //
    // Static instruction class for "remw".
    //
    class Remw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Remw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// ROp::sh3add_uw(['\n                            Rd = (((uint64_t)Rs1_uw) << 3) + Rs2;\n                        '],{})

    //
    // Static instruction class for "sh3add_uw".
    //
    class Sh3add_uw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Sh3add_uw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// ROp::remuw(['\n                        Rd = sext<32>(remu<uint32_t>(Rs1, Rs2));\n                    ', 'IntDivOp'],{})

    //
    // Static instruction class for "remuw".
    //
    class Remuw : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Remuw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// FPROp::fmadd_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(freg(Fs1_bits)),\n                                         f32(freg(Fs2_bits)),\n                                         f32(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fmadd_s".
    //
    class Fmadd_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmadd_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fmadd_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(freg(Fs1_bits)),\n                                         f64(freg(Fs2_bits)),\n                                         f64(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fmadd_d".
    //
    class Fmadd_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmadd_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fmadd_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(freg(Fs1_bits)),\n                                         f16(freg(Fs2_bits)),\n                                         f16(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fmadd_h".
    //
    class Fmadd_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmadd_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fmsub_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(freg(Fs1_bits)),\n                                    f32(freg(Fs2_bits)),\n                                    f32(f32(freg(Fs3_bits)).v ^\n                                        mask(31, 31))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fmsub_s".
    //
    class Fmsub_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmsub_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fmsub_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(freg(Fs1_bits)),\n                                    f64(freg(Fs2_bits)),\n                                    f64(f64(freg(Fs3_bits)).v ^\n                                        mask(63, 63))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fmsub_d".
    //
    class Fmsub_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmsub_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fmsub_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(freg(Fs1_bits)),\n                                    f16(freg(Fs2_bits)),\n                                    f16(f16(freg(Fs3_bits)).v ^\n                                        mask(15, 15))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fmsub_h".
    //
    class Fmsub_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmsub_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fnmsub_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(f32(freg(Fs1_bits)).v ^\n                                             mask(31, 31)),\n                                         f32(freg(Fs2_bits)),\n                                         f32(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fnmsub_s".
    //
    class Fnmsub_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fnmsub_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fnmsub_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(f64(freg(Fs1_bits)).v ^\n                                             mask(63, 63)),\n                                         f64(freg(Fs2_bits)),\n                                         f64(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fnmsub_d".
    //
    class Fnmsub_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fnmsub_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fnmsub_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(f16(freg(Fs1_bits)).v ^\n                                             mask(15, 15)),\n                                         f16(freg(Fs2_bits)),\n                                         f16(freg(Fs3_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fnmsub_h".
    //
    class Fnmsub_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fnmsub_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fnmadd_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mulAdd(f32(f32(freg(Fs1_bits)).v ^\n                                             mask(31, 31)),\n                                    f32(freg(Fs2_bits)),\n                                    f32(f32(freg(Fs3_bits)).v ^\n                                        mask(31, 31))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fnmadd_s".
    //
    class Fnmadd_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fnmadd_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fnmadd_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mulAdd(f64(f64(freg(Fs1_bits)).v ^\n                                             mask(63, 63)),\n                                    f64(freg(Fs2_bits)),\n                                    f64(f64(freg(Fs3_bits)).v ^\n                                        mask(63, 63))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fnmadd_d".
    //
    class Fnmadd_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fnmadd_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fnmadd_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mulAdd(f16(f16(freg(Fs1_bits)).v ^\n                                             mask(15, 15)),\n                                    f16(freg(Fs2_bits)),\n                                    f16(f16(freg(Fs3_bits)).v ^\n                                        mask(15, 15))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultAccOp'],{})

    //
    // Static instruction class for "fnmadd_h".
    //
    class Fnmadd_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fnmadd_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fadd_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_add(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})

    //
    // Static instruction class for "fadd_s".
    //
    class Fadd_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fadd_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fadd_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_add(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})

    //
    // Static instruction class for "fadd_d".
    //
    class Fadd_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fadd_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fadd_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_add(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})

    //
    // Static instruction class for "fadd_h".
    //
    class Fadd_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fadd_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsub_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_sub(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})

    //
    // Static instruction class for "fsub_s".
    //
    class Fsub_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsub_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsub_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_sub(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})

    //
    // Static instruction class for "fsub_d".
    //
    class Fsub_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsub_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsub_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_sub(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatAddOp'],{})

    //
    // Static instruction class for "fsub_h".
    //
    class Fsub_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsub_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fmul_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_mul(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultOp'],{})

    //
    // Static instruction class for "fmul_s".
    //
    class Fmul_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmul_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fmul_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_mul(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultOp'],{})

    //
    // Static instruction class for "fmul_d".
    //
    class Fmul_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmul_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fmul_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_mul(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatMultOp'],{})

    //
    // Static instruction class for "fmul_h".
    //
    class Fmul_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmul_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fdiv_s(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f32_div(f32(freg(Fs1_bits)),\n                                      f32(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatDivOp'],{})

    //
    // Static instruction class for "fdiv_s".
    //
    class Fdiv_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fdiv_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fdiv_d(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f64_div(f64(freg(Fs1_bits)),\n                                      f64(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatDivOp'],{})

    //
    // Static instruction class for "fdiv_d".
    //
    class Fdiv_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fdiv_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fdiv_h(['\n                    RM_REQUIRED;\n                    freg_t fd;\n                    fd = freg(f16_div(f16(freg(Fs1_bits)),\n                                      f16(freg(Fs2_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatDivOp'],{})

    //
    // Static instruction class for "fdiv_h".
    //
    class Fdiv_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fdiv_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsgnj_s(['\n                        auto sign = bits(unboxF32(Fs2_bits), 31);\n                        Fd_bits = boxF32(insertBits(unboxF32(Fs1_bits), 31,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fsgnj_s".
    //
    class Fsgnj_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsgnj_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsgnjn_s(['\n                        auto sign = ~bits(unboxF32(Fs2_bits), 31);\n                        Fd_bits = boxF32(insertBits(unboxF32(Fs1_bits), 31,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fsgnjn_s".
    //
    class Fsgnjn_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsgnjn_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsgnjx_s(['\n                        auto sign = bits(\n                            unboxF32(Fs1_bits) ^ unboxF32(Fs2_bits), 31);\n                        Fd_bits = boxF32(insertBits(unboxF32(Fs1_bits), 31,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fsgnjx_s".
    //
    class Fsgnjx_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsgnjx_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fsgnj_d(['\n                        Fd_bits = insertBits(Fs2_bits, 62, 0, Fs1_bits);\n                    ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fsgnj_d".
    //
    class Fsgnj_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsgnj_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsgnjn_d(['\n                        Fd_bits = insertBits(~Fs2_bits, 62, 0, Fs1_bits);\n                    ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fsgnjn_d".
    //
    class Fsgnjn_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsgnjn_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsgnjx_d(['\n                        Fd_bits = insertBits(\n                                Fs1_bits ^ Fs2_bits, 62, 0, Fs1_bits);\n                    ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fsgnjx_d".
    //
    class Fsgnjx_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsgnjx_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fsgnj_h(['\n                        auto sign = bits(unboxF16(Fs2_bits), 15);\n                        Fd_bits = boxF16(insertBits(unboxF16(Fs1_bits), 15,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fsgnj_h".
    //
    class Fsgnj_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsgnj_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsgnjn_h(['\n                        auto sign = ~bits(unboxF16(Fs2_bits), 15);\n                        Fd_bits = boxF16(insertBits(unboxF16(Fs1_bits), 15,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fsgnjn_h".
    //
    class Fsgnjn_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsgnjn_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsgnjx_h(['\n                        auto sign = bits(\n                            unboxF16(Fs1_bits) ^ unboxF16(Fs2_bits), 15);\n                        Fd_bits = boxF16(insertBits(unboxF16(Fs1_bits), 15,\n                                                    sign));\n                        ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fsgnjx_h".
    //
    class Fsgnjx_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsgnjx_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fmin_s(['\n                        float32_t fs1 = f32(freg(Fs1_bits));\n                        float32_t fs2 = f32(freg(Fs2_bits));\n                        float32_t fd;\n                        bool less = f32_lt_quiet(fs1, fs2) ||\n                            (f32_eq(fs1, fs2) && bits(fs1.v, 31));\n\n                        fd = less || isNaNF32UI(fs2.v) ? fs1 : fs2;\n                        if (isNaNF32UI(fs1.v) && isNaNF32UI(fs2.v))\n                            fd = f32(defaultNaNF32UI);\n                        Fd_bits = freg(fd).v;\n                        ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "fmin_s".
    //
    class Fmin_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmin_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fmax_s(['\n                        float32_t fs1 = f32(freg(Fs1_bits));\n                        float32_t fs2 = f32(freg(Fs2_bits));\n                        float32_t fd;\n                        bool greater = f32_lt_quiet(fs2, fs1) ||\n                            (f32_eq(fs2, fs1) && bits(fs2.v, 31));\n\n                        fd = greater || isNaNF32UI(fs2.v) ? fs1: fs2;\n                        if (isNaNF32UI(fs1.v) && isNaNF32UI(fs2.v))\n                            fd = f32(defaultNaNF32UI);\n                        Fd_bits = freg(fd).v;\n                        ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "fmax_s".
    //
    class Fmax_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmax_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fmin_d(['\n                        float64_t fs1 = f64(freg(Fs1_bits));\n                        float64_t fs2 = f64(freg(Fs2_bits));\n                        float64_t fd;\n                        bool less = f64_lt_quiet(fs1, fs2) ||\n                            (f64_eq(fs1, fs2) && bits(fs1.v, 63));\n\n                        fd = less || isNaNF64UI(fs2.v) ? fs1 : fs2;\n                        if (isNaNF64UI(fs1.v) && isNaNF64UI(fs2.v))\n                            fd = f64(defaultNaNF64UI);\n                        Fd_bits = freg(fd).v;\n                    ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "fmin_d".
    //
    class Fmin_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmin_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fmax_d(['\n                        float64_t fs1 = f64(freg(Fs1_bits));\n                        float64_t fs2 = f64(freg(Fs2_bits));\n                        float64_t fd;\n                        bool greater = f64_lt_quiet(fs2, fs1) ||\n                            (f64_eq(fs2, fs1) && bits(fs2.v, 63));\n\n                        fd = greater || isNaNF64UI(fs2.v) ? fs1 : fs2;\n                        if (isNaNF64UI(fs1.v) && isNaNF64UI(fs2.v))\n                            fd = f64(defaultNaNF64UI);\n                        Fd_bits = freg(fd).v;\n                    ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "fmax_d".
    //
    class Fmax_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmax_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fmin_h(['\n                        float16_t fs1 = f16(freg(Fs1_bits));\n                        float16_t fs2 = f16(freg(Fs2_bits));\n                        float16_t fd;\n                        bool less = f16_lt_quiet(fs1, fs2) ||\n                            (f16_eq(fs1, fs2) && bits(fs1.v, 15));\n\n                        fd = less || isNaNF16UI(fs2.v) ? fs1 : fs2;\n                        if (isNaNF16UI(fs1.v) && isNaNF16UI(fs2.v))\n                            fd = f16(defaultNaNF16UI);\n                        Fd_bits = freg(fd).v;\n                        ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "fmin_h".
    //
    class Fmin_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmin_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fmax_h(['\n                        float16_t fs1 = f16(freg(Fs1_bits));\n                        float16_t fs2 = f16(freg(Fs2_bits));\n                        float16_t fd;\n                        bool greater = f16_lt_quiet(fs2, fs1) ||\n                            (f16_eq(fs2, fs1) && bits(fs2.v, 15));\n\n                        fd = greater || isNaNF16UI(fs2.v) ? fs1 : fs2;\n                        if (isNaNF16UI(fs1.v) && isNaNF16UI(fs2.v))\n                            fd = f16(defaultNaNF16UI);\n                        Fd_bits = freg(fd).v;\n                        ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "fmax_h".
    //
    class Fmax_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmax_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fcvt_s_d(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f64_to_f32(f64(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_s_d".
    //
    class Fcvt_s_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_s_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_s_h(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f16_to_f32(f16(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_s_h".
    //
    class Fcvt_s_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_s_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fcvt_d_s(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f32_to_f64(f32(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_d_s".
    //
    class Fcvt_d_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_d_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_d_h(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f16_to_f64(f16(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_d_h".
    //
    class Fcvt_d_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_d_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fcvt_h_s(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f32_to_f16(f32(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_h_s".
    //
    class Fcvt_h_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_h_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_h_d(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(f64_to_f16(f64(freg(Fs1_bits))));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_h_d".
    //
    class Fcvt_h_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_h_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fsqrt_s(['\n                    if (RS2 != 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x1", machInst);\n                    }\n                    freg_t fd;\n                    RM_REQUIRED;\n                    fd = freg(f32_sqrt(f32(freg(Fs1_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatSqrtOp'],{})

    //
    // Static instruction class for "fsqrt_s".
    //
    class Fsqrt_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsqrt_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsqrt_d(['\n                    if (RS2 != 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x1", machInst);\n                    }\n                    freg_t fd;\n                    RM_REQUIRED;\n                    fd = freg(f64_sqrt(f64(freg(Fs1_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatSqrtOp'],{})

    //
    // Static instruction class for "fsqrt_d".
    //
    class Fsqrt_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsqrt_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fsqrt_h(['\n                    if (RS2 != 0) {\n                        return std::make_shared<IllegalInstFault>(\n                                "source reg x1", machInst);\n                    }\n                    freg_t fd;\n                    RM_REQUIRED;\n                    fd = freg(f16_sqrt(f16(freg(Fs1_bits))));\n                    Fd_bits = fd.v;\n                ', 'FloatSqrtOp'],{})

    //
    // Static instruction class for "fsqrt_h".
    //
    class Fsqrt_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fsqrt_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fle_s(['\n                        Rd = f32_le(f32(freg(Fs1_bits)), f32(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "fle_s".
    //
    class Fle_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fle_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::flt_s(['\n                        Rd = f32_lt(f32(freg(Fs1_bits)), f32(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "flt_s".
    //
    class Flt_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Flt_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::feq_s(['\n                        Rd = f32_eq(f32(freg(Fs1_bits)), f32(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "feq_s".
    //
    class Feq_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Feq_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fle_d(['\n                        Rd = f64_le(f64(freg(Fs1_bits)), f64(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "fle_d".
    //
    class Fle_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fle_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::flt_d(['\n                        Rd = f64_lt(f64(freg(Fs1_bits)), f64(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "flt_d".
    //
    class Flt_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Flt_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::feq_d(['\n                        Rd = f64_eq(f64(freg(Fs1_bits)), f64(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "feq_d".
    //
    class Feq_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Feq_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fle_h(['\n                        Rd = f16_le(f16(freg(Fs1_bits)), f16(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "fle_h".
    //
    class Fle_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fle_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::flt_h(['\n                        Rd = f16_lt(f16(freg(Fs1_bits)), f16(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "flt_h".
    //
    class Flt_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Flt_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::feq_h(['\n                        Rd = f16_eq(f16(freg(Fs1_bits)), f16(freg(Fs2_bits)));\n                    ', 'FloatCmpOp'],{})

    //
    // Static instruction class for "feq_h".
    //
    class Feq_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Feq_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fcvt_w_s(['\n                        RM_REQUIRED;\n                        Rd_sd = sext<32>(f32_to_i32(f32(freg(Fs1_bits)), rm,\n                                                    true));\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_w_s".
    //
    class Fcvt_w_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_w_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_wu_s(['\n                        RM_REQUIRED;\n                        Rd = sext<32>(f32_to_ui32(f32(freg(Fs1_bits)), rm,\n                                                  true));\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_wu_s".
    //
    class Fcvt_wu_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_wu_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_l_s(['\n                            RM_REQUIRED;\n                            Rd_sd = f32_to_i64(f32(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_l_s".
    //
    class Fcvt_l_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_l_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fcvt_lu_s(['\n                            RM_REQUIRED;\n                            Rd = f32_to_ui64(f32(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_lu_s".
    //
    class Fcvt_lu_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_lu_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// FPROp::fcvt_w_d(['\n                        RM_REQUIRED;\n                        Rd_sd = sext<32>(f64_to_i32(f64(freg(Fs1_bits)), rm,\n                                                    true));\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_w_d".
    //
    class Fcvt_w_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_w_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_wu_d(['\n                        RM_REQUIRED;\n                        Rd = sext<32>(f64_to_ui32(f64(freg(Fs1_bits)), rm,\n                                                  true));\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_wu_d".
    //
    class Fcvt_wu_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_wu_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_l_d(['\n                            RM_REQUIRED;\n                            Rd_sd = f64_to_i64(f64(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_l_d".
    //
    class Fcvt_l_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_l_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fcvt_lu_d(['\n                            RM_REQUIRED;\n                            Rd = f64_to_ui64(f64(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_lu_d".
    //
    class Fcvt_lu_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_lu_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// FPROp::fcvt_w_h(['\n                        RM_REQUIRED;\n                        Rd_sd = sext<32>(f16_to_i32(f16(freg(Fs1_bits)), rm,\n                                                    true));\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_w_h".
    //
    class Fcvt_w_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_w_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_wu_h(['\n                        RM_REQUIRED;\n                        Rd = sext<32>(f16_to_ui32(f16(freg(Fs1_bits)), rm,\n                                                  true));\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_wu_h".
    //
    class Fcvt_wu_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_wu_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_l_h(['\n                            RM_REQUIRED;\n                            Rd_sd = f16_to_i64(f16(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_l_h".
    //
    class Fcvt_l_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_l_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fcvt_lu_h(['\n                            RM_REQUIRED;\n                            Rd = f16_to_ui64(f16(freg(Fs1_bits)), rm, true);\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_lu_h".
    //
    class Fcvt_lu_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_lu_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// FPROp::fcvt_s_w(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(i32_to_f32(Rs1_sw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_s_w".
    //
    class Fcvt_s_w : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_s_w(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_s_wu(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(ui32_to_f32(Rs1_uw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_s_wu".
    //
    class Fcvt_s_wu : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_s_wu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_s_l(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(i64_to_f32(Rs1_ud));\n                            Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_s_l".
    //
    class Fcvt_s_l : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_s_l(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fcvt_s_lu(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(ui64_to_f32(Rs1));\n                            Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_s_lu".
    //
    class Fcvt_s_lu : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_s_lu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// FPROp::fcvt_d_w(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(i32_to_f64(Rs1_sw));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_d_w".
    //
    class Fcvt_d_w : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_d_w(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_d_wu(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(ui32_to_f64(Rs1_uw));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_d_wu".
    //
    class Fcvt_d_wu : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_d_wu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_d_l(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(i64_to_f64(Rs1_sd));\n                            Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_d_l".
    //
    class Fcvt_d_l : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_d_l(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fcvt_d_lu(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(ui64_to_f64(Rs1));\n                            Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_d_lu".
    //
    class Fcvt_d_lu : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_d_lu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// FPROp::fcvt_h_w(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(i32_to_f16((int32_t)Rs1_sw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_h_w".
    //
    class Fcvt_h_w : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_h_w(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_h_wu(['\n                        RM_REQUIRED;\n                        freg_t fd;\n                        fd = freg(ui32_to_f16((uint32_t)Rs1_uw));\n                        Fd_bits = fd.v;\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_h_wu".
    //
    class Fcvt_h_wu : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_h_wu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fcvt_h_l(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(i64_to_f16(Rs1_ud));\n                            Fd_bits = fd.v;\n                            ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_h_l".
    //
    class Fcvt_h_l : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_h_l(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fcvt_h_lu(['\n                            RM_REQUIRED;\n                            freg_t fd;\n                            fd = freg(ui64_to_f16(Rs1));\n                            Fd_bits = fd.v;\n                            ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fcvt_h_lu".
    //
    class Fcvt_h_lu : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fcvt_h_lu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// FPROp::fmv_x_w(['\n                        uint64_t result = (uint32_t)Fs1_bits;\n                        if ((result&0x80000000) != 0) {\n                            result |= (0xFFFFFFFFULL << 32);\n                        }\n                        Rd = result;\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fmv_x_w".
    //
    class Fmv_x_w : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmv_x_w(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fclass_s(['\n                        Rd = rvSext(f32_classify(f32(freg(Fs1_bits))));\n                    ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fclass_s".
    //
    class Fclass_s : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fclass_s(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fmv_x_d(['\n                            Rd = freg(Fs1_bits).v;\n                        ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fmv_x_d".
    //
    class Fmv_x_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmv_x_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fclass_d(['\n                        Rd = f64_classify(f64(freg(Fs1_bits)));\n                    ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fclass_d".
    //
    class Fclass_d : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fclass_d(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fmv_x_h(['\n                        uint64_t result = (uint16_t)Fs1_bits;\n                        if ((result&0x8000) != 0) {\n                            result |= (0xFFFFFFFFFFFFULL << 16);\n                        }\n                        Rd = result;\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fmv_x_h".
    //
    class Fmv_x_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmv_x_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fclass_h(['\n                        Rd = f16_classify(f16(freg(Fs1_bits)));\n                    ', 'FloatMiscOp'],{})

    //
    // Static instruction class for "fclass_h".
    //
    class Fclass_h : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fclass_h(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fmv_w_x(['\n                    freg_t fd;\n                    fd = freg(f32(Rs1_uw));\n                    Fd_bits = fd.v;\n                ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fmv_w_x".
    //
    class Fmv_w_x : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmv_w_x(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// FPROp::fmv_d_x(['\n                        freg_t fd;\n                        fd = freg(f64(Rs1));\n                        Fd_bits = fd.v;\n                    ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fmv_d_x".
    //
    class Fmv_d_x : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmv_d_x(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// FPROp::fmv_h_x(['\n                    freg_t fd;\n                    fd = freg(f16(Rs1_uh));\n                    Fd_bits = fd.v;\n                ', 'FloatCvtOp'],{})

    //
    // Static instruction class for "fmv_h_x".
    //
    class Fmv_h_x : public RegOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Fmv_h_x(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using RegOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// VectorIntFormat::vadd_vv(['\n                        Vd_vu[i] = Vs2_vu[i] + Vs1_vu[i];\n                    ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vadd_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vadd_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vadd_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vadd_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vsub_vv(['\n                        Vd_vu[i] = Vs2_vu[i] - Vs1_vu[i];\n                    ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vsub_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsub_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsub_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vsub_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vminu_vv(['\n                        Vd_vu[i] = Vs2_vu[i] < Vs1_vu[i] ?\n                                Vs2_vu[i] : Vs1_vu[i];\n                    ', 'OPIVV', 'SimdCmpOp'],{})


template<typename ElemType>
class Vminu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vminu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vminu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vminu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmin_vv(['\n                        Vd_vi[i] = Vs2_vi[i] < Vs1_vi[i] ?\n                                Vs2_vi[i] : Vs1_vi[i];\n                    ', 'OPIVV', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmin_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmin_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmin_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmin_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmaxu_vv(['\n                        Vd_vu[i] = Vs2_vu[i] > Vs1_vu[i] ?\n                                Vs2_vu[i] : Vs1_vu[i];\n                    ', 'OPIVV', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmaxu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmaxu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmaxu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmaxu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmax_vv(['\n                        Vd_vi[i] = Vs2_vi[i] > Vs1_vi[i] ?\n                                Vs2_vi[i] : Vs1_vi[i];\n                    ', 'OPIVV', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmax_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmax_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmax_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmax_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vand_vv(['\n                        Vd_vu[i] = Vs2_vu[i] & Vs1_vu[i];\n                    ', 'OPIVV', 'SimdAluOp'],{})


template<typename ElemType>
class Vand_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vand_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vand_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vand_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vor_vv(['\n                        Vd_vu[i] = Vs2_vu[i] | Vs1_vu[i];\n                    ', 'OPIVV', 'SimdAluOp'],{})


template<typename ElemType>
class Vor_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vor_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vor_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vor_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vxor_vv(['\n                        Vd_vu[i] = Vs2_vu[i] ^ Vs1_vu[i];\n                    ', 'OPIVV', 'SimdAluOp'],{})


template<typename ElemType>
class Vxor_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vxor_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vxor_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vxor_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorGatherFormat::vrgather_vv((['\n                    for (uint32_t i = 0; i < microVl; i++) {\n                        uint32_t ei = i + vs1_idx * vs1_elems + vs1_bias;\n                        if (this->vm || elem_mask(v0, ei)) {\n                            const uint64_t idx = Vs1_vu[i]\n                                - vs2_elems * vs2_idx;\n                            if (Vs1_vu[i] >= vlmax)\n                                Vd_vu[i] = 0;\n                            else if (idx < vs2_elems)\n                                Vd_vu[i] = Vs2_vu[idx];\n                        }\n                    }\n                ', 'OPIVV', 'SimdMiscOp'], {}))


template<typename ElemType, typename IndexType>
class Vrgather_vvMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vtmp0, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vrgather_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType, typename IndexType>
class Vrgather_vv : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vrgather_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorGatherFormat::vrgatherei16_vv((['\n                    for (uint32_t i = 0; i < microVl; i++) {\n                        uint32_t ei = i + vs1_idx * vs1_elems + vs1_bias;\n                        if (this->vm || elem_mask(v0, ei)) {\n                            const uint32_t idx = Vs1_uh[i + vs1_bias]\n                                - vs2_elems * vs2_idx;\n                            if (Vs1_uh[i + vs1_bias] >= vlmax)\n                                Vd_vu[i + vd_bias] = 0;\n                            else if (idx < vs2_elems)\n                                Vd_vu[i + vd_bias] = Vs2_vu[idx];\n                        }\n                    }\n                ', 'OPIVV', 'SimdMiscOp'], {}))


template<typename ElemType, typename IndexType>
class Vrgatherei16_vvMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vtmp0, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vrgatherei16_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType, typename IndexType>
class Vrgatherei16_vv : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vrgatherei16_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vadc_vvm(['\n                            Vd_vi[i] = Vs2_vi[i] + Vs1_vi[i]\n                                    + elem_mask(v0, ei);\n                        ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vadc_vvmMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vadc_vvmMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vadc_vvm : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vadc_vvm(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntFormat::vsbc_vvm(['\n                            Vd_vi[i] = Vs2_vi[i] - Vs1_vi[i]\n                                    - elem_mask(v0, ei);\n                        ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vsbc_vvmMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsbc_vvmMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsbc_vvm : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vsbc_vvm(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntFormat::vmerge_vvm(['\n                            Vd_vu[i] = elem_mask(v0, ei)\n                                    ? Vs1_vu[i]\n                                    : Vs2_vu[i];\n                        ', 'OPIVV', 'SimdMiscOp'],{})


template<typename ElemType>
class Vmerge_vvmMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmerge_vvmMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmerge_vvm : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmerge_vvm(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmv_v_v(['\n                                Vd_vu[i] = Vs1_vu[i];\n                            ', 'OPIVV', 'SimdMiscOp'],{})


template<typename ElemType>
class Vmv_v_vMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmv_v_vMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmv_v_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmv_v_v(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// VectorIntVxsatFormat::vsaddu_vv(['\n                        Vd_vu[i] = sat_addu<vu>(Vs2_vu[i], Vs1_vu[i],\n                            vxsatptr);\n                    ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vsaddu_vvMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vsaddu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsaddu_vv : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vsaddu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntVxsatFormat::vsadd_vv(['\n                        Vd_vu[i] = sat_add<vi>(Vs2_vu[i], Vs1_vu[i],\n                            vxsatptr);\n                    ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vsadd_vvMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vsadd_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsadd_vv : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vsadd_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntVxsatFormat::vssubu_vv(['\n                        Vd_vu[i] = sat_subu<vu>(Vs2_vu[i], Vs1_vu[i],\n                            vxsatptr);\n                    ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vssubu_vvMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vssubu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vssubu_vv : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vssubu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntVxsatFormat::vssub_vv(['\n                        Vd_vu[i] = sat_sub<vi>(Vs2_vu[i], Vs1_vu[i],\n                            vxsatptr);\n                    ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vssub_vvMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vssub_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vssub_vv : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vssub_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntVxsatFormat::vsmul_vv(['\n                        vi max = std::numeric_limits<vi>::max();\n                        vi min = std::numeric_limits<vi>::min();\n                        bool overflow = Vs1_vi[i] == Vs2_vi[i] &&\n                                        Vs1_vi[i] == min;\n                        __int128_t result = (__int128_t)Vs1_vi[i] *\n                                            (__int128_t)Vs2_vi[i];\n                        result = int_rounding<__int128_t>(\n                            result, 0 /* TODO */, sew - 1);\n                        result = result >> (sew - 1);\n                        if (overflow) {\n                            result = max;\n                            *vxsatptr = true;\n                        }\n\n                        Vd_vi[i] = (vi)result;\n                    ', 'OPIVV', 'SimdMultOp'],{})


template<typename ElemType>
class Vsmul_vvMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vsmul_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsmul_vv : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vsmul_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vsll_vv(['\n                        Vd_vu[i] = Vs2_vu[i] << (Vs1_vu[i] & (sew - 1));\n                    ', 'OPIVV', 'SimdShiftOp'],{})


template<typename ElemType>
class Vsll_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsll_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsll_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vsll_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vsrl_vv(['\n                        Vd_vu[i] = Vs2_vu[i] >> (Vs1_vu[i] & (sew - 1));\n                    ', 'OPIVV', 'SimdShiftOp'],{})


template<typename ElemType>
class Vsrl_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsrl_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsrl_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vsrl_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vsra_vv(['\n                        Vd_vi[i] = Vs2_vi[i] >> (Vs1_vu[i] & (sew - 1));\n                    ', 'OPIVV', 'SimdShiftOp'],{})


template<typename ElemType>
class Vsra_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsra_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsra_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vsra_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vssrl_vv(['\n                        int sh = Vs1_vu[i] & (sew - 1);\n                        __uint128_t val = Vs2_vu[i];\n\n                        val = int_rounding<__uint128_t>(val,\n                            xc->readMiscReg(MISCREG_VXRM), sh);\n                        Vd_vu[i] = val >> sh;\n                    ', 'OPIVV', 'SimdShiftOp'],{})


template<typename ElemType>
class Vssrl_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vssrl_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vssrl_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vssrl_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vssra_vv(['\n                        int sh = Vs1_vi[i] & (sew - 1);\n                        __int128_t val = Vs2_vi[i];\n\n                        val = int_rounding<__int128_t>(val,\n                            xc->readMiscReg(MISCREG_VXRM), sh);\n                        Vd_vi[i] = val >> sh;\n                    ', 'OPIVV', 'SimdShiftOp'],{})


template<typename ElemType>
class Vssra_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vssra_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vssra_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vssra_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceIntWideningFormat::vwredsumu_vs(['\n                        Vd_vwu[0] = reduce_loop(std::plus<vwu>(),\n                            Vs1_vwu, Vs2_vu);\n                    ', 'OPIVV', 'SimdReduceAddOp'],{})


template<typename ElemType>
class Vwredsumu_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwredsumu_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwredsumu_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwredsumu_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceIntWideningFormat::vwredsum_vs(['\n                        Vd_vwu[0] = reduce_loop(std::plus<vwi>(),\n                            Vs1_vwi, Vs2_vi);\n                    ', 'OPIVV', 'SimdReduceAddOp'],{})


template<typename ElemType>
class Vwredsum_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwredsum_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwredsum_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwredsum_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmadc_vvm(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vu[i], Vs1_vu[i],\n                                    elem_mask(v0, ei)));\n                        ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vmadc_vvmMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmadc_vvmMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmadc_vvm : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmadc_vvm(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmadc_vv(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vu[i], Vs1_vu[i]));\n                        ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vmadc_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmadc_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmadc_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmadc_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntMaskFormat::vmsbc_vvm(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                borrow_out(Vs2_vi[i], Vs1_vi[i],\n                                    elem_mask(v0, ei)));\n                        ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vmsbc_vvmMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsbc_vvmMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsbc_vvm : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsbc_vvm(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsbc_vv(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                borrow_out(Vs2_vi[i], Vs1_vi[i]));\n                        ', 'OPIVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vmsbc_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsbc_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsbc_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsbc_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntMaskFormat::vmseq_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] == Vs1_vu[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmseq_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmseq_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmseq_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmseq_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsne_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] != Vs1_vu[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsne_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsne_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsne_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsne_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsltu_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] < Vs1_vu[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsltu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsltu_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsltu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsltu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmslt_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] < Vs1_vi[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmslt_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmslt_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmslt_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmslt_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsleu_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] <= Vs1_vu[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsleu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsleu_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsleu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsleu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsle_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] <= Vs1_vi[i]));\n                    ', 'OPIVV', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsle_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsle_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsle_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsle_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnsrl_wv(['\n                        Vd_vu[i + offset] = (vu)(Vs2_vwu[i] >>\n                            ((vwu)Vs1_vu[i + offset] & (sew * 2 - 1)));\n                    ', 'OPIVV', 'SimdShiftOp'],{})


template<typename ElemType>
class Vnsrl_wvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnsrl_wvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnsrl_wv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vnsrl_wv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnsra_wv(['\n                        Vd_vi[i + offset] = (vi)(Vs2_vwi[i] >>\n                            ((vwu)Vs1_vu[i + offset] & (sew * 2 - 1)));\n                    ', 'OPIVV', 'SimdShiftOp'],{})


template<typename ElemType>
class Vnsra_wvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnsra_wvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnsra_wv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vnsra_wv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnclipu_wv(['\n                        vu max = std::numeric_limits<vu>::max();\n                        uint64_t sign_mask =\n                            std::numeric_limits<uint64_t>::max() << sew;\n                        __uint128_t res = Vs2_vwu[i];\n                        unsigned shift = Vs1_vu[i + offset] & ((sew * 2) - 1);\n\n                        res = int_rounding<__uint128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res & sign_mask) {\n                            res = max;\n                            // TODO: vxsat\n                        }\n\n                        Vd_vu[i + offset] = (vu)res;\n                    ', 'OPIVV', 'SimdCvtOp'],{})


template<typename ElemType>
class Vnclipu_wvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnclipu_wvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnclipu_wv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vnclipu_wv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnclip_wv(['\n                        vi max = std::numeric_limits<vi>::max();\n                        vi min = std::numeric_limits<vi>::min();\n                        __int128_t res = Vs2_vwi[i];\n                        unsigned shift = Vs1_vi[i + offset] & ((sew * 2) - 1);\n\n                        res = int_rounding<__int128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res < min) {\n                            res = min;\n                            // TODO: vxsat\n                        } else if (res > max) {\n                            res = max;\n                            // TODO: vxsat\n                        }\n\n                        Vd_vi[i + offset] = (vi)res;\n                    ', 'OPIVV', 'SimdCvtOp'],{})


template<typename ElemType>
class Vnclip_wvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnclip_wvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnclip_wv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vnclip_wv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorFloatFormat::vfadd_vv((['\n                    auto fd = fadd<et>(ftype<et>(Vs2_vu[i]),\n                                       ftype<et>(Vs1_vu[i]));\n                    Vd_vu[i] = fd.v;\n                ', 'OPFVV', 'SimdFloatAddOp'], {}))


template<typename ElemType>
class Vfadd_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfadd_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfadd_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfadd_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceFloatFormat::vfredusum_vs((['\n                    Vd_vu[0] = reduce_loop([](const vu& src1, const vu& src2) {\n                        return fadd<et>(ftype<et>(src1), ftype<et>(src2));\n                    }, Vs1_vu, Vs2_vu);\n                ', 'OPFVV', 'SimdFloatReduceAddOp'], {}))


template<typename ElemType>
class Vfredusum_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfredusum_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfredusum_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfredusum_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfsub_vv((['\n                    auto fd = fsub<et>(ftype<et>(Vs2_vu[i]),\n                                       ftype<et>(Vs1_vu[i]));\n                    Vd_vu[i] = fd.v;\n                ', 'OPFVV', 'SimdFloatAddOp'], {}))


template<typename ElemType>
class Vfsub_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfsub_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfsub_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfsub_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceFloatFormat::vfredosum_vs((['\n                    Vd_vu[0] = reduce_loop([](const vu& src1, const vu& src2) {\n                        return fadd<et>(ftype<et>(src1), ftype<et>(src2));\n                    }, Vs1_vu, Vs2_vu);\n                ', 'OPFVV', 'SimdFloatReduceAddOp'], {}))


template<typename ElemType>
class Vfredosum_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfredosum_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfredosum_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfredosum_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmin_vv((['\n                    auto fd = fmin<et>(ftype<et>(Vs2_vu[i]),\n                                       ftype<et>(Vs1_vu[i]));\n                    Vd_vu[i] = fd.v;\n                ', 'OPFVV', 'SimdFloatCmpOp'], {}))


template<typename ElemType>
class Vfmin_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmin_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmin_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfmin_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceFloatFormat::vfredmin_vs((['\n                    Vd_vu[0] = reduce_loop([](const vu& src1, const vu& src2) {\n                        return fmin<et>(ftype<et>(src1), ftype<et>(src2));\n                    }, Vs1_vu, Vs2_vu);\n                ', 'OPFVV', 'SimdFloatReduceCmpOp'], {}))


template<typename ElemType>
class Vfredmin_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfredmin_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfredmin_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfredmin_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmax_vv((['\n                    auto fd = fmax<et>(ftype<et>(Vs2_vu[i]),\n                                       ftype<et>(Vs1_vu[i]));\n                    Vd_vu[i] = fd.v;\n                ', 'OPFVV', 'SimdFloatCmpOp'], {}))


template<typename ElemType>
class Vfmax_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmax_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmax_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfmax_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceFloatFormat::vfredmax_vs((['\n                    Vd_vu[0] = reduce_loop([](const vu& src1, const vu& src2) {\n                        return fmax<et>(ftype<et>(src1), ftype<et>(src2));\n                    }, Vs1_vu, Vs2_vu);\n                ', 'OPFVV', 'SimdFloatReduceCmpOp'], {}))


template<typename ElemType>
class Vfredmax_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfredmax_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfredmax_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfredmax_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfsgnj_vv((['\n                    Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                         ftype<et>(Vs1_vu[i]),\n                                         false, false).v;\n                ', 'OPFVV', 'SimdFloatCvtOp'], {}))


template<typename ElemType>
class Vfsgnj_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfsgnj_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfsgnj_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfsgnj_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfsgnjn_vv((['\n                    Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                         ftype<et>(Vs1_vu[i]),\n                                         true, false).v;\n                ', 'OPFVV', 'SimdFloatCvtOp'], {}))


template<typename ElemType>
class Vfsgnjn_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfsgnjn_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfsgnjn_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfsgnjn_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfsgnjx_vv((['\n                    Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                         ftype<et>(Vs1_vu[i]),\n                                         false, true).v;\n                ', 'OPFVV', 'SimdFloatCvtOp'], {}))


template<typename ElemType>
class Vfsgnjx_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfsgnjx_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfsgnjx_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfsgnjx_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorNonSplitFormat::vfmv_f_s((['\n                            freg_t fd = freg(ftype<et>(Vs2_vu[0]));\n                            Fd_bits = fd.v;\n                        ', 'OPFVV', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vfmv_f_s : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vfmv_f_s(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// VectorFloatCvtFormat::vfcvt_xu_f_v(['\n                            Vd_vu[i] = f_to_ui<et>(ftype<et>(Vs2_vu[i]),\n                                                   softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfcvt_xu_f_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfcvt_xu_f_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfcvt_xu_f_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfcvt_xu_f_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatCvtFormat::vfcvt_x_f_v(['\n                            Vd_vu[i] = f_to_i<et>(ftype<et>(Vs2_vu[i]),\n                                                  softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfcvt_x_f_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfcvt_x_f_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfcvt_x_f_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfcvt_x_f_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatCvtFormat::vfcvt_f_xu_v(['\n                            auto fd = ui_to_f<et>(Vs2_vu[i]);\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfcvt_f_xu_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfcvt_f_xu_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfcvt_f_xu_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfcvt_f_xu_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatCvtFormat::vfcvt_f_x_v(['\n                            auto fd = i_to_f<et>(Vs2_vu[i]);\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfcvt_f_x_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfcvt_f_x_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfcvt_f_x_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfcvt_f_x_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatCvtFormat::vfcvt_rtz_xu_f_v(['\n                            Vd_vu[i] = f_to_ui<et>(ftype<et>(Vs2_vu[i]),\n                                                   softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfcvt_rtz_xu_f_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfcvt_rtz_xu_f_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfcvt_rtz_xu_f_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfcvt_rtz_xu_f_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatCvtFormat::vfcvt_rtz_x_f_v(['\n                            Vd_vu[i] = f_to_i<et>(ftype<et>(Vs2_vu[i]),\n                                                  softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfcvt_rtz_x_f_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfcvt_rtz_x_f_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfcvt_rtz_x_f_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfcvt_rtz_x_f_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatWideningCvtFormat::vfwcvt_xu_f_v(['\n                            Vd_vwu[i] = f_to_wui<et>(\n                                ftype<et>(Vs2_vu[i + offset]),\n                                softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfwcvt_xu_f_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwcvt_xu_f_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfwcvt_xu_f_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfwcvt_xu_f_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatWideningCvtFormat::vfwcvt_x_f_v(['\n                            Vd_vwu[i] = f_to_wi<et>(\n                                ftype<et>(Vs2_vu[i + offset]),\n                                softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfwcvt_x_f_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwcvt_x_f_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfwcvt_x_f_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfwcvt_x_f_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatWideningCvtFormat::vfwcvt_f_xu_v(['\n                            auto fd = ui_to_wf<vu>(Vs2_vu[i + offset]);\n                            Vd_vwu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfwcvt_f_xu_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwcvt_f_xu_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfwcvt_f_xu_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfwcvt_f_xu_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatWideningCvtFormat::vfwcvt_f_x_v(['\n                            auto fd = i_to_wf<vu>(Vs2_vu[i + offset]);\n                            Vd_vwu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfwcvt_f_x_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwcvt_f_x_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfwcvt_f_x_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfwcvt_f_x_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatWideningCvtFormat::vfwcvt_f_f_v(['\n                            auto fd = f_to_wf<et>(\n                                ftype<et>(Vs2_vu[i + offset]));\n                            Vd_vwu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfwcvt_f_f_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwcvt_f_f_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfwcvt_f_f_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfwcvt_f_f_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatWideningCvtFormat::vfwcvt_rtz_xu_f_v(['\n                            Vd_vwu[i] = f_to_wui<et>(\n                                ftype<et>(Vs2_vu[i + offset]),\n                                softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfwcvt_rtz_xu_f_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwcvt_rtz_xu_f_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfwcvt_rtz_xu_f_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfwcvt_rtz_xu_f_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatWideningCvtFormat::vfwcvt_rtz_x_f_v(['\n                            Vd_vwu[i] = f_to_wi<et>(\n                                ftype<et>(Vs2_vu[i + offset]),\n                                softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfwcvt_rtz_x_f_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwcvt_rtz_x_f_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfwcvt_rtz_x_f_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfwcvt_rtz_x_f_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatNarrowingCvtFormat::vfncvt_xu_f_w(['\n                            Vd_vu[i + offset] = f_to_nui<vu>(\n                                ftype<ewt>(Vs2_vwu[i]),\n                                softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfncvt_xu_f_wMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfncvt_xu_f_wMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfncvt_xu_f_w : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfncvt_xu_f_w(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatNarrowingCvtFormat::vfncvt_x_f_w(['\n                            Vd_vu[i + offset] = f_to_ni<vu>(\n                                ftype<ewt>(Vs2_vwu[i]),\n                                softfloat_roundingMode);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfncvt_x_f_wMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfncvt_x_f_wMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfncvt_x_f_w : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfncvt_x_f_w(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatNarrowingCvtFormat::vfncvt_f_xu_w(['\n                            auto fd = ui_to_nf<et>(Vs2_vwu[i]);\n                            Vd_vu[i + offset] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfncvt_f_xu_wMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfncvt_f_xu_wMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfncvt_f_xu_w : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfncvt_f_xu_w(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatNarrowingCvtFormat::vfncvt_f_x_w(['\n                            auto fd = i_to_nf<et>(Vs2_vwu[i]);\n                            Vd_vu[i + offset] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfncvt_f_x_wMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfncvt_f_x_wMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfncvt_f_x_w : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfncvt_f_x_w(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatNarrowingCvtFormat::vfncvt_f_f_w(['\n                            auto fd = f_to_nf<et>(ftype<ewt>(Vs2_vwu[i]));\n                            Vd_vu[i + offset] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfncvt_f_f_wMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfncvt_f_f_wMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfncvt_f_f_w : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfncvt_f_f_w(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatNarrowingCvtFormat::vfncvt_rod_f_f_w(['\n                            softfloat_roundingMode = softfloat_round_odd;\n                            auto fd = f_to_nf<et>(ftype<ewt>(Vs2_vwu[i]));\n                            Vd_vu[i + offset] = fd.v;\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfncvt_rod_f_f_wMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfncvt_rod_f_f_wMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfncvt_rod_f_f_w : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfncvt_rod_f_f_w(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatNarrowingCvtFormat::vfncvt_rtz_xu_f_w(['\n                            Vd_vu[i + offset] = f_to_nui<vu>(\n                                ftype<ewt>(Vs2_vwu[i]),\n                                softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfncvt_rtz_xu_f_wMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfncvt_rtz_xu_f_wMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfncvt_rtz_xu_f_w : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfncvt_rtz_xu_f_w(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatNarrowingCvtFormat::vfncvt_rtz_x_f_w(['\n                            Vd_vu[i + offset] = f_to_ni<vu>(\n                                ftype<ewt>(Vs2_vwu[i]),\n                                softfloat_round_minMag);\n                        ', 'OPFVV', 'SimdFloatCvtOp'],{})


template<typename ElemType>
class Vfncvt_rtz_x_f_wMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfncvt_rtz_x_f_wMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfncvt_rtz_x_f_w : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfncvt_rtz_x_f_w(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// Unknown::unknown(([], {}))

// VectorFloatCvtFormat::vfsqrt_v(['\n                            auto fd = fsqrt<et>(ftype<et>(Vs2_vu[i]));\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatSqrtOp'],{})


template<typename ElemType>
class Vfsqrt_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfsqrt_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfsqrt_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfsqrt_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatCvtFormat::vfrsqrt7_v(['\n                            auto fd = frsqrte7<et>(ftype<et>(Vs2_vu[i]));\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatSqrtOp'],{})


template<typename ElemType>
class Vfrsqrt7_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfrsqrt7_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfrsqrt7_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfrsqrt7_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatCvtFormat::vfrec7_v(['\n                            auto fd = frecip7<et>(ftype<et>(Vs2_vu[i]));\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdFloatDivOp'],{})


template<typename ElemType>
class Vfrec7_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfrec7_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfrec7_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfrec7_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorFloatCvtFormat::vfclass_v(['\n                            auto fd = fclassify<et>(ftype<et>(Vs2_vu[i]));\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVV', 'SimdMiscOp'],{})


template<typename ElemType>
class Vfclass_vMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfclass_vMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Vfclass_v : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfclass_v(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// Unknown::unknown(([], {}))

// VectorFloatMaskFormat::vmfeq_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            feq<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype<et>(Vs1_vu[i])));\n                    ', 'OPFVV', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vmfeq_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv or *.vf
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmfeq_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmfeq_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmfeq_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatMaskFormat::vmfle_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            fle<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype<et>(Vs1_vu[i])));\n                    ', 'OPFVV', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vmfle_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv or *.vf
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmfle_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmfle_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmfle_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatMaskFormat::vmflt_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            flt<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype<et>(Vs1_vu[i])));\n                    ', 'OPFVV', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vmflt_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv or *.vf
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmflt_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmflt_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmflt_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatMaskFormat::vmfne_vv(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            !feq<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype<et>(Vs1_vu[i])));\n                    ', 'OPFVV', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vmfne_vvMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv or *.vf
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmfne_vvMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmfne_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmfne_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfdiv_vv(['\n                        auto fd = fdiv<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype<et>(Vs1_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatDivOp'],{})


template<typename ElemType>
class Vfdiv_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfdiv_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfdiv_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfdiv_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmul_vv(['\n                        auto fd = fmul<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype<et>(Vs1_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultOp'],{})


template<typename ElemType>
class Vfmul_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmul_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmul_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfmul_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmadd_vv(['\n                        auto fd = fmadd<et>(ftype<et>(Vs3_vu[i]),\n                                            ftype<et>(Vs1_vu[i]),\n                                            ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfmadd_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmadd_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmadd_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfmadd_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfnmadd_vv(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs3_vu[i])),\n                                            ftype<et>(Vs1_vu[i]),\n                                            fneg(ftype<et>(Vs2_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfnmadd_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfnmadd_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfnmadd_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfnmadd_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmsub_vv(['\n                        auto fd = fmadd<et>(ftype<et>(Vs3_vu[i]),\n                                            ftype<et>(Vs1_vu[i]),\n                                            fneg(ftype<et>(Vs2_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfmsub_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmsub_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmsub_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfmsub_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfnmsub_vv(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs3_vu[i])),\n                                            ftype<et>(Vs1_vu[i]),\n                                            ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfnmsub_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfnmsub_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfnmsub_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfnmsub_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmacc_vv(['\n                        auto fd = fmadd<et>(ftype<et>(Vs1_vu[i]),\n                                            ftype<et>(Vs2_vu[i]),\n                                            ftype<et>(Vs3_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfmacc_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmacc_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmacc_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfmacc_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfnmacc_vv(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs1_vu[i])),\n                                            ftype<et>(Vs2_vu[i]),\n                                            fneg(ftype<et>(Vs3_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfnmacc_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfnmacc_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfnmacc_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfnmacc_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmsac_vv(['\n                        auto fd = fmadd<et>(ftype<et>(Vs1_vu[i]),\n                                            ftype<et>(Vs2_vu[i]),\n                                            fneg(ftype<et>(Vs3_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfmsac_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmsac_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmsac_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfmsac_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfnmsac_vv(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs1_vu[i])),\n                                            ftype<et>(Vs2_vu[i]),\n                                            ftype<et>(Vs3_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfnmsac_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfnmsac_vvMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfnmsac_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfnmsac_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceFloatWideningFormat::vfwredusum_vs((['\n                        Vd_vwu[0] = reduce_loop(\n                            [](const vwu& src1, const vu& src2) {\n                                return fadd<ewt>(\n                                    ftype<ewt>(src1),\n                                    f_to_wf<et>(ftype<et>(src2))\n                                );\n                            }, Vs1_vwu, Vs2_vu);\n                    ', 'OPFVV', 'SimdFloatReduceAddOp'], {}))


template<typename ElemType>
class Vfwredusum_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwredusum_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwredusum_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwredusum_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceFloatWideningFormat::vfwredosum_vs((['\n                        Vd_vwu[0] = reduce_loop(\n                            [](const vwu& src1, const vu& src2) {\n                                return fadd<ewt>(\n                                    ftype<ewt>(src1),\n                                    f_to_wf<et>(ftype<et>(src2))\n                                );\n                            }, Vs1_vwu, Vs2_vu);\n                    ', 'OPFVV', 'SimdFloatReduceAddOp'], {}))


template<typename ElemType>
class Vfwredosum_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwredosum_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwredosum_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwredosum_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwadd_vv(['\n                        auto fd = fadd<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype<et>(Vs1_vu[i + offset])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatAddOp'],{})


template<typename ElemType>
class Vfwadd_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwadd_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwadd_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwadd_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwsub_vv(['\n                        auto fd = fsub<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype<et>(Vs1_vu[i + offset])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatAddOp'],{})


template<typename ElemType>
class Vfwsub_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwsub_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwsub_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwsub_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwadd_wv(['\n                        auto fd = fadd<ewt>(\n                            ftype<ewt>(Vs2_vwu[i]),\n                            fwiden(ftype<et>(Vs1_vu[i + offset])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatAddOp'],{})


template<typename ElemType>
class Vfwadd_wvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwadd_wvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwadd_wv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwadd_wv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwsub_wv(['\n                        auto fd = fsub<ewt>(\n                            ftype<ewt>(Vs2_vwu[i]),\n                            fwiden(ftype<et>(Vs1_vu[i + offset])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatAddOp'],{})


template<typename ElemType>
class Vfwsub_wvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwsub_wvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwsub_wv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwsub_wv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwmul_vv(['\n                        auto fd = fmul<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype<et>(Vs1_vu[i + offset])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultOp'],{})


template<typename ElemType>
class Vfwmul_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwmul_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwmul_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwmul_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwmacc_vv(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(ftype<et>(Vs1_vu[i + offset])),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            ftype<ewt>(Vs3_vwu[i]));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfwmacc_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwmacc_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwmacc_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfwmacc_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwnmacc_vv(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(fneg(ftype<et>(Vs1_vu[i + offset]))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fneg(ftype<ewt>(Vs3_vwu[i])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfwnmacc_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwnmacc_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwnmacc_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfwnmacc_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwmsac_vv(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(ftype<et>(Vs1_vu[i + offset])),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fneg(ftype<ewt>(Vs3_vwu[i])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfwmsac_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwmsac_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwmsac_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfwmsac_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwnmsac_vv(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(fneg(ftype<et>(Vs1_vu[i + offset]))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            ftype<ewt>(Vs3_vwu[i]));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVV', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfwnmsac_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwnmsac_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwnmsac_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfwnmsac_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorReduceIntFormat::vredsum_vs(['\n                        Vd_vi[0] =\n                            reduce_loop(std::plus<vi>(), Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceAddOp'],{})


template<typename ElemType>
class Vredsum_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vredsum_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vredsum_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vredsum_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceIntFormat::vredand_vs(['\n                        Vd_vi[0] =\n                            reduce_loop(std::bit_and<vi>(), Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceAluOp'],{})


template<typename ElemType>
class Vredand_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vredand_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vredand_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vredand_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceIntFormat::vredor_vs(['\n                        Vd_vi[0] =\n                            reduce_loop(std::bit_or<vi>(), Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceAluOp'],{})


template<typename ElemType>
class Vredor_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vredor_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vredor_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vredor_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceIntFormat::vredxor_vs(['\n                        Vd_vi[0] =\n                            reduce_loop(std::bit_xor<vi>(), Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceAluOp'],{})


template<typename ElemType>
class Vredxor_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vredxor_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vredxor_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vredxor_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceIntFormat::vredminu_vs(['\n                        Vd_vu[0] =\n                            reduce_loop([](const vu& src1, const vu& src2) {\n                                return std::min<vu>(src1, src2);\n                            }, Vs1_vu, Vs2_vu);\n                    ', 'OPMVV', 'SimdReduceCmpOp'],{})


template<typename ElemType>
class Vredminu_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vredminu_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vredminu_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vredminu_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceIntFormat::vredmin_vs(['\n                        Vd_vi[0] =\n                            reduce_loop([](const vi& src1, const vi& src2) {\n                                return std::min<vi>(src1, src2);\n                            }, Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceCmpOp'],{})


template<typename ElemType>
class Vredmin_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vredmin_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vredmin_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vredmin_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceIntFormat::vredmaxu_vs(['\n                        Vd_vu[0] =\n                            reduce_loop([](const vu& src1, const vu& src2) {\n                                return std::max<vu>(src1, src2);\n                            }, Vs1_vu, Vs2_vu);\n                    ', 'OPMVV', 'SimdReduceCmpOp'],{})


template<typename ElemType>
class Vredmaxu_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vredmaxu_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vredmaxu_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vredmaxu_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorReduceIntFormat::vredmax_vs(['\n                        Vd_vi[0] =\n                            reduce_loop([](const vi& src1, const vi& src2) {\n                                return std::max<vi>(src1, src2);\n                            }, Vs1_vi, Vs2_vi);\n                    ', 'OPMVV', 'SimdReduceCmpOp'],{})


template<typename ElemType>
class Vredmax_vsMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vd, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vredmax_vsMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vredmax_vs : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vredmax_vs(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vaaddu_vv(['\n                        __uint128_t res = (__uint128_t)Vs2_vu[i] + Vs1_vu[i];\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vu[i] = res >> 1;\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vaaddu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vaaddu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vaaddu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vaaddu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vaadd_vv(['\n                        __uint128_t res = (__uint128_t)Vs2_vi[i] + Vs1_vi[i];\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vi[i] = res >> 1;\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vaadd_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vaadd_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vaadd_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vaadd_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vasubu_vv(['\n                        __uint128_t res = (__uint128_t)Vs2_vu[i] - Vs1_vu[i];\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vu[i] = res >> 1;\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vasubu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vasubu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vasubu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vasubu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vasub_vv(['\n                        __uint128_t res = (__uint128_t)Vs2_vi[i] - Vs1_vi[i];\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vi[i] = res >> 1;\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vasub_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vasub_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vasub_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vasub_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorNonSplitFormat::vmv_x_s((['\n                            Rd_ud = Vs2_vi[0];\n                        ', 'OPMVV', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vmv_x_s : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vmv_x_s(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Vector1Vs1RdMaskFormat::vcpop_m((['\n                        uint64_t popcount = 0;\n                        for (uint32_t i = 0; i < (uint32_t)machInst.vl; i++) {\n                            bool vs2_lsb = elem_mask(Vs2_vu, i);\n                            if(this->vm){\n                                popcount += vs2_lsb;\n                            }else{\n                                bool do_mask = elem_mask(v0, i);\n                                popcount += (vs2_lsb && do_mask);\n                            }\n                        }\n                        Rd_vu = popcount;\n                    ', 'OPMVV', 'SimdAluOp'], {}))


template<typename ElemType>
class Vcpop_m : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vcpop_m(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// Vector1Vs1RdMaskFormat::vfirst_m((['\n                        int64_t pos = -1;\n                        for (uint32_t i = 0; i < (uint32_t)machInst.vl; i++) {\n                            if(this->vm == 0){\n                                if(elem_mask(v0, i)==0){\n                                    continue;\n                                }\n                            }\n                            bool vs2_lsb = elem_mask(Vs2_vu, i);\n                            if (vs2_lsb) {\n                                pos = i;\n                                break;\n                            }\n                        }\n                        Rd_vu = pos;\n                    ', 'OPMVV', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vfirst_m : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfirst_m(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntExtFormat::vzext_vf8(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vu[i] = Vs2_vextu[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})


template<typename ElemType>
class Vzext_vf8Micro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vzext_vf8Micro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};



template<typename ElemType>
class Vzext_vf8 : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vzext_vf8(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};


// VectorIntExtFormat::vsext_vf8(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vi[i] = Vs2_vext[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})


template<typename ElemType>
class Vsext_vf8Micro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsext_vf8Micro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};



template<typename ElemType>
class Vsext_vf8 : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vsext_vf8(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};


// VectorIntExtFormat::vzext_vf4(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vu[i] = Vs2_vextu[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})


template<typename ElemType>
class Vzext_vf4Micro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vzext_vf4Micro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};



template<typename ElemType>
class Vzext_vf4 : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vzext_vf4(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};


// VectorIntExtFormat::vsext_vf4(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vi[i] = Vs2_vext[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})


template<typename ElemType>
class Vsext_vf4Micro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsext_vf4Micro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};



template<typename ElemType>
class Vsext_vf4 : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vsext_vf4(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};


// VectorIntExtFormat::vzext_vf2(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vu[i] = Vs2_vextu[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})


template<typename ElemType>
class Vzext_vf2Micro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vzext_vf2Micro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};



template<typename ElemType>
class Vzext_vf2 : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vzext_vf2(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};


// VectorIntExtFormat::vsext_vf2(['\n                            auto offset = (vlen / SEW) * index;\n\n                            Vd_vi[i] = Vs2_vext[i + offset];\n                        ', 'OPMVV', 'SimdExtOp'],{})


template<typename ElemType>
class Vsext_vf2Micro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsext_vf2Micro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};



template<typename ElemType>
class Vsext_vf2 : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vsext_vf2(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override;
};


// Unknown::unknown(([], {}))

// Vector1Vs1VdMaskFormat::vmsbf_m((['\n                        bool has_one = false;\n                        for (uint32_t i = 0; i < (uint32_t)machInst.vl; i++) {\n                            bool vs2_lsb = elem_mask(Vs2_vu, i);\n                            if (this->vm || elem_mask(v0, i)){\n                                uint64_t res = 0;\n                                if (!has_one && !vs2_lsb) {\n                                    res = 1;\n                                } else if (!has_one && vs2_lsb) {\n                                    has_one = true;\n                                }\n                                Vd_ub[i/8] = ASSIGN_VD_BIT(i, res);\n                            }\n                        }\n                    ', 'OPMVV', 'SimdAluOp'], {}))


template<typename ElemType>
class Vmsbf_m : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsbf_m(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// Vector1Vs1VdMaskFormat::vmsof_m((['\n                        bool has_one = false;\n                        for (uint32_t i = 0; i < (uint32_t)machInst.vl; i++) {\n                            bool vs2_lsb = elem_mask(Vs2_vu, i);\n                            if (this->vm || elem_mask(v0, i)){\n                                uint64_t res = 0;\n                                if (!has_one && vs2_lsb) {\n                                    has_one = true;\n                                    res = 1;\n                                }\n                                Vd_ub[i/8] = ASSIGN_VD_BIT(i, res);\n                            }\n                        }\n                    ', 'OPMVV', 'SimdAluOp'], {}))


template<typename ElemType>
class Vmsof_m : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsof_m(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// Vector1Vs1VdMaskFormat::vmsif_m((['\n                        bool has_one = false;\n                        for (uint32_t i = 0; i < (uint32_t)machInst.vl; i++) {\n                            bool vs2_lsb = elem_mask(Vs2_vu, i);\n                            if (this->vm || elem_mask(v0, i)){\n                                uint64_t res = 0;\n                                if (!has_one && !vs2_lsb) {\n                                    res = 1;\n                                } else if (!has_one && vs2_lsb) {\n                                    has_one = true;\n                                    res = 1;\n                                }\n                                Vd_ub[i/8] = ASSIGN_VD_BIT(i, res);\n                            }\n                        }\n                    ', 'OPMVV', 'SimdAluOp'], {}))


template<typename ElemType>
class Vmsif_m : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsif_m(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// ViotaFormat::viota_m((['\n                        if (this->vm || elem_mask(v0, ei)) {\n                            Vd_vu[i] = *cnt;\n                            if (elem_mask(Vs2_vu, ei)) {\n                                *cnt = *cnt+1;\n                            }\n                        }\n                    ', 'OPMVV', 'SimdAluOp'], {}))


template<typename ElemType>
class Viota_mMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
    int* cnt;
public:
    Viota_mMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, int* cnt);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};



template<typename ElemType>
class Viota_m : public VectorArithMacroInst {
private:
    int cnt = 0;
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Viota_m(ExtMachInst _machInst, uint32_t _vlen);
    std::string generateDisassembly(Addr pc,
        const loader::SymbolTable *symtab) const override
    {
        std::stringstream ss;
        ss << mnemonic << ' ' << registerName(destRegIdx(0)) << ", "
            << registerName(srcRegIdx(0));
        if (machInst.vm == 0) ss << ", v0.t";
        return ss.str();
    }
};


// VectorIntFormat::vid_v((['\n                        Vd_vu[i] = ei;\n                    ', 'OPMVV', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vid_vMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vid_vMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vid_v : public VectorVMUNARY0MacroInst {
private:
    RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];
public:
    Vid_v(ExtMachInst _machInst, uint32_t _vlen);
    using VectorVMUNARY0MacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorMaskFormat::vmandn_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            elem_mask(Vs2_vu, i) & !elem_mask(Vs1_vu, i));\n                    ', 'OPMVV', 'SimdAluOp'],{})


template<typename ElemType>
class Vmandn_mm : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vmandn_mm(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// VectorMaskFormat::vmand_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            elem_mask(Vs2_vu, i) & elem_mask(Vs1_vu, i));\n                    ', 'OPMVV', 'SimdAluOp'],{})


template<typename ElemType>
class Vmand_mm : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vmand_mm(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// VectorMaskFormat::vmor_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            elem_mask(Vs2_vu, i) | elem_mask(Vs1_vu, i));\n                    ', 'OPMVV', 'SimdAluOp'],{})


template<typename ElemType>
class Vmor_mm : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vmor_mm(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// VectorMaskFormat::vmxor_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            elem_mask(Vs2_vu, i) ^ elem_mask(Vs1_vu, i));\n                    ', 'OPMVV', 'SimdAluOp'],{})


template<typename ElemType>
class Vmxor_mm : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vmxor_mm(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// VectorMaskFormat::vmorn_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            elem_mask(Vs2_vu, i) | !elem_mask(Vs1_vu, i));\n                    ', 'OPMVV', 'SimdAluOp'],{})


template<typename ElemType>
class Vmorn_mm : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vmorn_mm(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// VectorMaskFormat::vmnand_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            !(elem_mask(Vs2_vu, i) & elem_mask(Vs1_vu, i)));\n                    ', 'OPMVV', 'SimdAluOp'],{})


template<typename ElemType>
class Vmnand_mm : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vmnand_mm(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// VectorMaskFormat::vmnor_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            !(elem_mask(Vs2_vu, i) | elem_mask(Vs1_vu, i)));\n                    ', 'OPMVV', 'SimdAluOp'],{})


template<typename ElemType>
class Vmnor_mm : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vmnor_mm(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// VectorMaskFormat::vmxnor_mm(['\n                        Vd_ub[i/8] = ASSIGN_VD_BIT(i,\n                            !(elem_mask(Vs2_vu, i) ^ elem_mask(Vs1_vu, i)));\n                    ', 'OPMVV', 'SimdAluOp'],{})


template<typename ElemType>
class Vmxnor_mm : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vmxnor_mm(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// VectorIntFormat::vdivu_vv(['\n                        Vd_vu[i] = divu<vu>(Vs2_vu[i], Vs1_vu[i]);\n                    ', 'OPMVV', 'SimdDivOp'],{})


template<typename ElemType>
class Vdivu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vdivu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vdivu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vdivu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vdiv_vv(['\n                        Vd_vi[i] = div<vi>(Vs2_vi[i], Vs1_vi[i]);\n                    ', 'OPMVV', 'SimdDivOp'],{})


template<typename ElemType>
class Vdiv_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vdiv_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vdiv_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vdiv_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vremu_vv(['\n                        Vd_vu[i] = remu<vu>(Vs2_vu[i], Vs1_vu[i]);\n                    ', 'OPMVV', 'SimdDivOp'],{})


template<typename ElemType>
class Vremu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vremu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vremu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vremu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vrem_vv(['\n                        Vd_vi[i] = rem<vi>(Vs2_vi[i], Vs1_vi[i]);\n                    ', 'OPMVV', 'SimdDivOp'],{})


template<typename ElemType>
class Vrem_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vrem_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vrem_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vrem_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmulhu_vv(['\n                        Vd_vu[i] = mulhu<vu>(Vs2_vu[i], Vs1_vu[i]);\n                    ', 'OPMVV', 'SimdMultOp'],{})


template<typename ElemType>
class Vmulhu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmulhu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmulhu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmulhu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmul_vv(['\n                        Vd_vi[i] = Vs2_vi[i] * Vs1_vi[i];\n                    ', 'OPMVV', 'SimdMultOp'],{})


template<typename ElemType>
class Vmul_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmul_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmul_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmul_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmulhsu_vv(['\n                        Vd_vi[i] = mulhsu<vi>(Vs2_vi[i], Vs1_vu[i]);\n                    ', 'OPMVV', 'SimdMultOp'],{})


template<typename ElemType>
class Vmulhsu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmulhsu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmulhsu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmulhsu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmulh_vv(['\n                        Vd_vi[i] = mulh<vi>(Vs2_vi[i], Vs1_vi[i]);\n                    ', 'OPMVV', 'SimdMultOp'],{})


template<typename ElemType>
class Vmulh_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmulh_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmulh_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmulh_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmadd_vv(['\n                        Vd_vi[i] = Vs3_vi[i] * Vs1_vi[i] + Vs2_vi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vmadd_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmadd_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmadd_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vmadd_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vnmsub_vv(['\n                        Vd_vi[i] = -(Vs3_vi[i] * Vs1_vi[i]) + Vs2_vi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vnmsub_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnmsub_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnmsub_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vnmsub_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmacc_vv(['\n                        Vd_vi[i] = Vs2_vi[i] * Vs1_vi[i] + Vs3_vi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vmacc_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmacc_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmacc_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vmacc_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vnmsac_vv(['\n                        Vd_vi[i] = -(Vs2_vi[i] * Vs1_vi[i]) + Vs3_vi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vnmsac_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnmsac_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnmsac_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vnmsac_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwaddu_vv(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset])\n                                + vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vwaddu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwaddu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwaddu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwaddu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwadd_vv(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset])\n                                + vwi(Vs1_vi[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vwadd_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwadd_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwadd_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwadd_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwsubu_vv(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset])\n                                - vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vwsubu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwsubu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwsubu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwsubu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwsub_vv(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset])\n                                - vwi(Vs1_vi[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vwsub_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwsub_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwsub_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwsub_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwaddu_wv(['\n                        Vd_vwu[i] = Vs2_vwu[i] + vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vwaddu_wvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwaddu_wvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwaddu_wv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwaddu_wv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwadd_wv(['\n                        Vd_vwi[i] = Vs2_vwi[i] + vwi(Vs1_vi[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vwadd_wvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwadd_wvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwadd_wv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwadd_wv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwsubu_wv(['\n                        Vd_vwu[i] = Vs2_vwu[i] - vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vwsubu_wvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwsubu_wvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwsubu_wv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwsubu_wv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwsub_wv(['\n                        Vd_vwi[i] = Vs2_vwi[i] - vwi(Vs1_vi[i + offset]);\n                    ', 'OPMVV', 'SimdAddOp'],{})


template<typename ElemType>
class Vwsub_wvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwsub_wvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwsub_wv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwsub_wv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmulu_vv(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset])\n                                * vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdMultOp'],{})


template<typename ElemType>
class Vwmulu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmulu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmulu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwmulu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmulsu_vv(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset])\n                                * vwu(Vs1_vu[i + offset]);\n                    ', 'OPMVV', 'SimdMultOp'],{})


template<typename ElemType>
class Vwmulsu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmulsu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmulsu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwmulsu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmul_vv(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset])\n                                * vwi(Vs1_vi[i + offset]);\n                    ', 'OPMVV', 'SimdMultOp'],{})


template<typename ElemType>
class Vwmul_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmul_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmul_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwmul_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmaccu_vv(['\n                        Vd_vwu[i] = vwu(Vs1_vu[i + offset])\n                                * vwu(Vs2_vu[i + offset])\n                                + Vs3_vwu[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vwmaccu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmaccu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmaccu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vwmaccu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmacc_vv(['\n                        Vd_vwi[i] = vwi(Vs1_vi[i + offset])\n                                * vwi(Vs2_vi[i + offset])\n                                + Vs3_vwi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vwmacc_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmacc_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmacc_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vwmacc_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmaccsu_vv(['\n                        Vd_vwi[i] = vwi(Vs1_vi[i + offset])\n                                * vwu(Vs2_vu[i + offset])\n                                + Vs3_vwi[i];\n                    ', 'OPMVV', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vwmaccsu_vvMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmaccsu_vvMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmaccsu_vv : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vwmaccsu_vv(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntFormat::vadd_vi(['\n                        Vd_vi[i] = Vs2_vi[i] + (vi)sext<5>(SIMM5);\n                    ', 'OPIVI', 'SimdAddOp'],{})


template<typename ElemType>
class Vadd_viMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vadd_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vadd_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vadd_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vrsub_vi(['\n                        Vd_vi[i] = (vi)sext<5>(SIMM5) - Vs2_vi[i];\n                    ', 'OPIVI', 'SimdAddOp'],{})


template<typename ElemType>
class Vrsub_viMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vrsub_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vrsub_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vrsub_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vand_vi(['\n                        Vd_vi[i] = Vs2_vi[i] & (vi)sext<5>(SIMM5);\n                    ', 'OPIVI', 'SimdAluOp'],{})


template<typename ElemType>
class Vand_viMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vand_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vand_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vand_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vor_vi(['\n                        Vd_vi[i] = Vs2_vi[i] | (vi)sext<5>(SIMM5);\n                    ', 'OPIVI', 'SimdAluOp'],{})


template<typename ElemType>
class Vor_viMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vor_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vor_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vor_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vxor_vi(['\n                        Vd_vi[i] = Vs2_vi[i] ^ (vi)sext<5>(SIMM5);\n                    ', 'OPIVI', 'SimdAluOp'],{})


template<typename ElemType>
class Vxor_viMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vxor_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vxor_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vxor_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorGatherFormat::vrgather_vi((['\n                    for (uint32_t i = 0; i < microVl; i++) {\n                        uint32_t ei = i + vs1_idx * vs1_elems + vs1_bias;\n                        uint64_t zextImm = rvZext(SIMM5);\n                        if (this->vm || elem_mask(v0, ei)) {\n                            const uint64_t idx = zextImm - vs2_elems * vs2_idx;\n                            if (zextImm >= vlmax)\n                                Vd_vu[i] = 0;\n                            else if (idx < vs2_elems)\n                                Vd_vu[i] = Vs2_vu[idx];\n                        }\n                    }\n                ', 'OPIVI', 'SimdMiscOp'], {}))


template<typename ElemType, typename IndexType>
class Vrgather_viMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vtmp0, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vrgather_viMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType, typename IndexType>
class Vrgather_vi : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vrgather_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorSlideUpFormat::vslideup_vi((['\n                    const int offset = (int)(uint64_t)(SIMM5);\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vdIdx - vs2Idx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int elemOffset = vdOffset + vdIdx * microVlmax;\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            if (this->vm || elem_mask(v0, i + elemOffset)) {\n                                Vd_vu[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                            }\n                        }\n                    }\n                ', 'OPIVI', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vslideup_viMicro : public VectorSlideMicroInst
{
private:
    // vs2, vs1, vm for *.vv, *.vx
    // vs2, vm for *.vi
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vslideup_viMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vdIdx, uint32_t _vs2Idx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorSlideMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vslideup_vi : public VectorSlideMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vslideup_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorSlideMacroInst::generateDisassembly;
};


// VectorSlideDownFormat::vslidedown_vi((['\n                    const int offset = (int)(uint64_t)(SIMM5);\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vs2Idx - vdIdx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    const int numVs2s = vtype_regs_per_group(vtype);\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const bool needZeroTail = numVs2s == vs2Idx + 1;\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int elemIdxBase = vdIdx * microVlmax;\n                        vreg_t resVreg;\n                        auto res = resVreg.as<vu>();\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            res[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                        }\n                        if (needZeroTail) {\n                            for (int i = upperBound + vdOffset;\n                                i < microVlmax; i++) {\n                                res[i] = 0;\n                            }\n                        }\n                        for (int i = vdOffset; i < microVl ; i++) {\n                            if (vm || elem_mask(v0, i + elemIdxBase)) {\n                                Vd_vu[i] = res[i];\n                            }\n                        }\n                    }\n                ', 'OPIVI', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vslidedown_viMicro : public VectorSlideMicroInst
{
private:
    // vs2, vs1, vm for *.vv, *.vx
    // vs2, vm for *.vi
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vslidedown_viMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vdIdx, uint32_t _vs2Idx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorSlideMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vslidedown_vi : public VectorSlideMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vslidedown_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorSlideMacroInst::generateDisassembly;
};


// VectorIntFormat::vadc_vim(['\n                            Vd_vi[i] = Vs2_vi[i] +\n                                (vi)sext<5>(SIMM5) + elem_mask(v0, ei);\n                        ', 'OPIVI', 'SimdAddOp'],{})


template<typename ElemType>
class Vadc_vimMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vadc_vimMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vadc_vim : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vadc_vim(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntFormat::vmerge_vim(['\n                            Vd_vi[i] = elem_mask(v0, ei)\n                                    ? (vi)sext<5>(SIMM5)\n                                    : Vs2_vi[i];\n                        ', 'OPIVI', 'SimdMiscOp'],{})


template<typename ElemType>
class Vmerge_vimMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmerge_vimMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmerge_vim : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmerge_vim(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmv_v_i(['\n                            Vd_vi[i] = (vi)sext<5>(SIMM5);\n                        ', 'OPIVI', 'SimdMiscOp'],{})


template<typename ElemType>
class Vmv_v_iMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmv_v_iMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmv_v_i : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];
public:
    Vmv_v_i(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntVxsatFormat::vsaddu_vi(['\n                        Vd_vu[i] = sat_addu<vu>(Vs2_vu[i], (vu)sext<5>(SIMM5),\n                            vxsatptr);\n                    ', 'OPIVI', 'SimdAddOp'],{})


template<typename ElemType>
class Vsaddu_viMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vsaddu_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsaddu_vi : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vsaddu_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntVxsatFormat::vsadd_vi(['\n                        Vd_vi[i] = sat_add<vi>(Vs2_vi[i], (vi)sext<5>(SIMM5),\n                            vxsatptr);\n                    ', 'OPIVI', 'SimdAddOp'],{})


template<typename ElemType>
class Vsadd_viMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vsadd_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsadd_vi : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vsadd_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vsll_vi(['\n                        Vd_vu[i] = Vs2_vu[i] << ((vu)SIMM5 & (sew - 1) & 0x1f);\n                    ', 'OPIVI', 'SimdShiftOp'],{})


template<typename ElemType>
class Vsll_viMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsll_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsll_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vsll_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vsrl_vi(['\n                        Vd_vu[i] = Vs2_vu[i] >> ((vu)SIMM5 & (sew - 1) & 0x1f);\n                    ', 'OPIVI', 'SimdShiftOp'],{})


template<typename ElemType>
class Vsrl_viMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsrl_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsrl_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vsrl_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vssrl_vi(['\n                        int sh = SIMM5 & (vtype_SEW(vtype) - 1);\n                        __uint128_t res = Vs2_vu[i];\n\n                        res = int_rounding<__uint128_t>(\n                            res, 0 /* TODO */, sh) >> sh;\n\n                        Vd_vu[i] = res;\n                    ', 'OPIVI', 'SimdShiftOp'],{})


template<typename ElemType>
class Vssrl_viMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vssrl_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vssrl_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vssrl_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vsra_vi(['\n                        Vd_vi[i] = Vs2_vi[i] >> ((vu)SIMM5 & (sew - 1) & 0x1f);\n                    ', 'OPIVI', 'SimdShiftOp'],{})


template<typename ElemType>
class Vsra_viMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsra_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsra_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vsra_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vssra_vi(['\n                        int sh = SIMM5 & (sew - 1);\n                        __int128_t val = Vs2_vi[i];\n\n                        val = int_rounding<__int128_t>(val,\n                            xc->readMiscReg(MISCREG_VXRM), sh);\n                        Vd_vi[i] = val >> sh;\n                    ', 'OPIVI', 'SimdShiftOp'],{})


template<typename ElemType>
class Vssra_viMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vssra_viMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vssra_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vssra_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VMvWholeFormat::vmv1r_v(['\n                            Vd_ud[i] = Vs2_ud[i];\n                        ', 'OPIVI', 'SimdMiscOp'],{})


class Vmv1r_v : public VMvWholeMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmv1r_v(ExtMachInst _machInst);
    using VMvWholeMacroInst::generateDisassembly;
};



class Vmv1r_vMicro : public VMvWholeMicroInst
{
private:
    RegId srcRegIdxArr[1];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmv1r_vMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VMvWholeMicroInst::generateDisassembly;
};


// VMvWholeFormat::vmv2r_v(['\n                            Vd_ud[i] = Vs2_ud[i];\n                        ', 'OPIVI', 'SimdMiscOp'],{})


class Vmv2r_v : public VMvWholeMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmv2r_v(ExtMachInst _machInst);
    using VMvWholeMacroInst::generateDisassembly;
};



class Vmv2r_vMicro : public VMvWholeMicroInst
{
private:
    RegId srcRegIdxArr[1];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmv2r_vMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VMvWholeMicroInst::generateDisassembly;
};


// VMvWholeFormat::vmv4r_v(['\n                            Vd_ud[i] = Vs2_ud[i];\n                        ', 'OPIVI', 'SimdMiscOp'],{})


class Vmv4r_v : public VMvWholeMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmv4r_v(ExtMachInst _machInst);
    using VMvWholeMacroInst::generateDisassembly;
};



class Vmv4r_vMicro : public VMvWholeMicroInst
{
private:
    RegId srcRegIdxArr[1];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmv4r_vMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VMvWholeMicroInst::generateDisassembly;
};


// VMvWholeFormat::vmv8r_v(['\n                            Vd_ud[i] = Vs2_ud[i];\n                        ', 'OPIVI', 'SimdMiscOp'],{})


class Vmv8r_v : public VMvWholeMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmv8r_v(ExtMachInst _machInst);
    using VMvWholeMacroInst::generateDisassembly;
};



class Vmv8r_vMicro : public VMvWholeMicroInst
{
private:
    RegId srcRegIdxArr[1];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmv8r_vMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VMvWholeMicroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// VectorIntMaskFormat::vmadc_vim(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vi[i], (vi)sext<5>(SIMM5),\n                                    elem_mask(v0, ei)));\n                        ', 'OPIVI', 'SimdAddOp'],{})


template<typename ElemType>
class Vmadc_vimMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmadc_vimMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmadc_vim : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmadc_vim(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmadc_vi(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vi[i], (vi)sext<5>(SIMM5)));\n                        ', 'OPIVI', 'SimdAddOp'],{})


template<typename ElemType>
class Vmadc_viMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmadc_viMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmadc_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmadc_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntMaskFormat::vmseq_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] == (vi)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmseq_viMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmseq_viMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmseq_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmseq_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsne_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] != (vi)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsne_viMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsne_viMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsne_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmsne_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsleu_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] <= (vu)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsleu_viMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsleu_viMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsleu_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmsleu_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsle_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] <= (vi)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsle_viMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsle_viMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsle_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmsle_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsgtu_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] > (vu)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsgtu_viMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsgtu_viMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsgtu_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmsgtu_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsgt_vi(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] > (vi)sext<5>(SIMM5)));\n                    ', 'OPIVI', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsgt_viMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsgt_viMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsgt_vi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmsgt_vi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnsrl_wi(['\n                        Vd_vu[i + offset] = (vu)(Vs2_vwu[i] >>\n                                            ((vwu)SIMM5 & (sew * 2 - 1)));\n                    ', 'OPIVI', 'SimdShiftOp'],{})


template<typename ElemType>
class Vnsrl_wiMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnsrl_wiMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnsrl_wi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vnsrl_wi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnsra_wi(['\n                        Vd_vi[i + offset] = (vi)(Vs2_vwi[i] >>\n                                            ((vwu)SIMM5 & (sew * 2 - 1)));\n                    ', 'OPIVI', 'SimdShiftOp'],{})


template<typename ElemType>
class Vnsra_wiMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnsra_wiMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnsra_wi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vnsra_wi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnclipu_wi(['\n                        vu max = std::numeric_limits<vu>::max();\n                        uint64_t sign_mask =\n                            std::numeric_limits<uint64_t>::max() << sew;\n                        __uint128_t res = Vs2_vwu[i];\n                        unsigned shift = VS1 & ((sew * 2) - 1);\n\n                        res = int_rounding<__uint128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res & sign_mask) {\n                            // TODO: vxsat\n                            res = max;\n                        }\n\n                        Vd_vu[i + offset] = (vu)res;\n                    ', 'OPIVI', 'SimdCvtOp'],{})


template<typename ElemType>
class Vnclipu_wiMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnclipu_wiMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnclipu_wi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vnclipu_wi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnclip_wi(['\n                        vi max = std::numeric_limits<vi>::max();\n                        vi min = std::numeric_limits<vi>::min();\n                        __int128_t res = Vs2_vwi[i];\n                        unsigned shift = VS1 & ((sew * 2) - 1);\n\n                        res = int_rounding<__int128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res < min) {\n                            res = min;\n                            // TODO: vxsat\n                        } else if (res > max) {\n                            res = max;\n                            // TODO: vxsat\n                        }\n\n                        Vd_vi[i + offset] = (vi)res;\n                    ', 'OPIVI', 'SimdCvtOp'],{})


template<typename ElemType>
class Vnclip_wiMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnclip_wiMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnclip_wi : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vnclip_wi(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntFormat::vadd_vx(['\n                        Vd_vu[i] = Vs2_vu[i] + Rs1_vu;\n                    ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vadd_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vadd_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vadd_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vadd_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vsub_vx(['\n                        Vd_vu[i] = Vs2_vu[i] - Rs1_vu;\n                    ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vsub_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsub_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsub_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vsub_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vrsub_vx(['\n                        Vd_vu[i] = Rs1_vu - Vs2_vu[i];\n                    ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vrsub_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vrsub_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vrsub_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vrsub_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vminu_vx(['\n                        Vd_vu[i] = std::min(Vs2_vu[i], Rs1_vu);\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vminu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vminu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vminu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vminu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmin_vx(['\n                        Vd_vi[i] = std::min(Vs2_vi[i], Rs1_vi);\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmin_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmin_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmin_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmin_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmaxu_vx(['\n                        Vd_vu[i] = std::max(Vs2_vu[i], Rs1_vu);\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmaxu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmaxu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmaxu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmaxu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmax_vx(['\n                        Vd_vi[i] = std::max(Vs2_vi[i], Rs1_vi);\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmax_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmax_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmax_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmax_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vand_vx(['\n                        Vd_vu[i] = Vs2_vu[i] & Rs1_vu;\n                    ', 'OPIVX', 'SimdAluOp'],{})


template<typename ElemType>
class Vand_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vand_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vand_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vand_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vor_vx(['\n                        Vd_vu[i] = Vs2_vu[i] | Rs1_vu;\n                    ', 'OPIVX', 'SimdAluOp'],{})


template<typename ElemType>
class Vor_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vor_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vor_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vor_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vxor_vx(['\n                        Vd_vu[i] = Vs2_vu[i] ^ Rs1_vu;\n                    ', 'OPIVX', 'SimdAluOp'],{})


template<typename ElemType>
class Vxor_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vxor_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vxor_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vxor_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorSlideUpFormat::vslideup_vx((['\n                    const int offset = (int)Rs1_vu;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vdIdx - vs2Idx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int elemOffset = vdOffset + vdIdx * microVlmax;\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            if (this->vm || elem_mask(v0, i + elemOffset)) {\n                                Vd_vu[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                            }\n                        }\n                    }\n                ', 'OPIVX', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vslideup_vxMicro : public VectorSlideMicroInst
{
private:
    // vs2, vs1, vm for *.vv, *.vx
    // vs2, vm for *.vi
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vslideup_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vdIdx, uint32_t _vs2Idx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorSlideMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vslideup_vx : public VectorSlideMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vslideup_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorSlideMacroInst::generateDisassembly;
};


// VectorSlideDownFormat::vslidedown_vx((['\n                    const int offset = (int)Rs1_vu;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vs2Idx - vdIdx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    const int numVs2s = vtype_regs_per_group(vtype);\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const bool needZeroTail = numVs2s == vs2Idx + 1;\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int elemIdxBase = vdIdx * microVlmax;\n                        vreg_t resVreg;\n                        auto res = resVreg.as<vu>();\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            res[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                        }\n                        if (needZeroTail) {\n                            for (int i = upperBound + vdOffset;\n                                i < microVlmax; i++) {\n                                res[i] = 0;\n                            }\n                        }\n                        for (int i = vdOffset; i < microVl ; i++) {\n                            if (vm || elem_mask(v0, i + elemIdxBase)) {\n                                Vd_vu[i] = res[i];\n                            }\n                        }\n                    }\n                ', 'OPIVX', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vslidedown_vxMicro : public VectorSlideMicroInst
{
private:
    // vs2, vs1, vm for *.vv, *.vx
    // vs2, vm for *.vi
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vslidedown_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vdIdx, uint32_t _vs2Idx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorSlideMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vslidedown_vx : public VectorSlideMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vslidedown_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorSlideMacroInst::generateDisassembly;
};


// VectorGatherFormat::vrgather_vx((['\n                    for (uint32_t i = 0; i < microVl; i++) {\n                        uint32_t ei = i + vs1_idx * vs1_elems + vs1_bias;\n                        uint64_t zextRs1 = rvZext(Rs1);\n                        if (this->vm || elem_mask(v0, ei)) {\n                            const uint64_t idx = zextRs1 - vs2_elems * vs2_idx;\n                            if (zextRs1 >= vlmax)\n                                Vd_vu[i] = 0;\n                            else if (idx < vs2_elems)\n                                Vd_vu[i] = Vs2_vu[idx];\n                        }\n                    }\n                ', 'OPIVX', 'SimdMiscOp'], {}))


template<typename ElemType, typename IndexType>
class Vrgather_vxMicro : public VectorArithMicroInst
{
private:
    // vs2, vs1, vtmp0, vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vrgather_vxMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType, typename IndexType>
class Vrgather_vx : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vrgather_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vadc_vxm(['\n                            Vd_vi[i] = Vs2_vi[i] + Rs1_vi + elem_mask(v0, ei);\n                        ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vadc_vxmMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vadc_vxmMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vadc_vxm : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vadc_vxm(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntFormat::vsbc_vxm(['\n                            Vd_vi[i] = Vs2_vi[i] - Rs1_vi - elem_mask(v0, ei);\n                        ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vsbc_vxmMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsbc_vxmMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsbc_vxm : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vsbc_vxm(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntFormat::vmerge_vxm(['\n                            Vd_vu[i] = elem_mask(v0, ei) ? Rs1_vu : Vs2_vu[i];\n                        ', 'OPIVX', 'SimdMiscOp'],{})


template<typename ElemType>
class Vmerge_vxmMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmerge_vxmMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmerge_vxm : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmerge_vxm(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmv_v_x(['\n                                Vd_vu[i] = Rs1_vu;\n                            ', 'OPIVX', 'SimdMiscOp'],{})


template<typename ElemType>
class Vmv_v_xMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmv_v_xMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmv_v_x : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vmv_v_x(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// VectorIntVxsatFormat::vsaddu_vx(['\n                        Vd_vu[i] = sat_addu<vu>(Vs2_vu[i], Rs1_vu,\n                            vxsatptr);\n                    ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vsaddu_vxMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vsaddu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsaddu_vx : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vsaddu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntVxsatFormat::vsadd_vx(['\n                        Vd_vu[i] = sat_add<vi>(Vs2_vu[i], Rs1_vu,\n                            vxsatptr);\n                    ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vsadd_vxMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vsadd_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsadd_vx : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vsadd_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntVxsatFormat::vssubu_vx(['\n                        Vd_vu[i] = sat_subu<vu>(Vs2_vu[i], Rs1_vu,\n                            vxsatptr);\n                    ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vssubu_vxMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vssubu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vssubu_vx : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vssubu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntVxsatFormat::vssub_vx(['\n                        Vd_vu[i] = sat_sub<vi>(Vs2_vu[i], Rs1_vu,\n                            vxsatptr);\n                    ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vssub_vxMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vssub_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vssub_vx : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vssub_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntVxsatFormat::vsmul_vx(['\n                        vi max = std::numeric_limits<vi>::max();\n                        vi min = std::numeric_limits<vi>::min();\n                        bool overflow = Rs1_vi == Vs2_vi[i] && Rs1_vi == min;\n                        __int128_t result =\n                            (__int128_t)Rs1_vi * (__int128_t)Vs2_vi[i];\n                        result = int_rounding<__uint128_t>(\n                            result, 0 /* TODO */, sew - 1);\n                        result = result >> (sew - 1);\n                        if (overflow) {\n                            result = max;\n                            *vxsatptr = true;\n                        }\n\n                        Vd_vi[i] = (vi)result;\n                    ', 'OPIVX', 'SimdMultOp'],{})


template<typename ElemType>
class Vsmul_vxMicro : public VectorArithMicroInst
{
private:
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
    bool* vxsatptr;
public:
    Vsmul_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx, bool* vxsatptr);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsmul_vx : public VectorArithMacroInst{
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
    bool vxsat = false;
public:
    Vsmul_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vsll_vx(['\n                        Vd_vu[i] = Vs2_vu[i] << (Rs1_vu & (sew - 1));\n                    ', 'OPIVX', 'SimdShiftOp'],{})


template<typename ElemType>
class Vsll_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsll_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsll_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vsll_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vsrl_vx(['\n                        Vd_vu[i] = Vs2_vu[i] >> (Rs1_vu & (sew - 1));\n                    ', 'OPIVX', 'SimdShiftOp'],{})


template<typename ElemType>
class Vsrl_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsrl_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsrl_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vsrl_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vsra_vx(['\n                        Vd_vi[i] = Vs2_vi[i] >> (Rs1_vu & (sew - 1));\n                    ', 'OPIVX', 'SimdShiftOp'],{})


template<typename ElemType>
class Vsra_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vsra_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vsra_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vsra_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vssrl_vx(['\n                        int sh = Rs1_vu & (sew - 1);\n                        __uint128_t val = Vs2_vu[i];\n\n                        val = int_rounding<__uint128_t>(val,\n                            xc->readMiscReg(MISCREG_VXRM), sh);\n                        Vd_vu[i] = val >> sh;\n                    ', 'OPIVX', 'SimdShiftOp'],{})


template<typename ElemType>
class Vssrl_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vssrl_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vssrl_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vssrl_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vssra_vx(['\n                        int sh = Rs1_vu & (sew - 1);\n                        __int128_t val = Vs2_vi[i];\n\n                        val = int_rounding<__int128_t>(val,\n                            xc->readMiscReg(MISCREG_VXRM), sh);\n                        Vd_vi[i] = val >> sh;\n                    ', 'OPIVX', 'SimdShiftOp'],{})


template<typename ElemType>
class Vssra_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vssra_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vssra_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vssra_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnsrl_wx(['\n                        Vd_vu[i + offset] = (vu)(Vs2_vwu[i] >>\n                                            ((vwu)Rs1_vu & (sew * 2 - 1)));\n                    ', 'OPIVX', 'SimdShiftOp'],{})


template<typename ElemType>
class Vnsrl_wxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnsrl_wxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnsrl_wx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vnsrl_wx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnsra_wx(['\n                        Vd_vi[i + offset] = (vi)(Vs2_vwi[i] >>\n                                            ((vwu)Rs1_vu & (sew * 2 - 1)));\n                    ', 'OPIVX', 'SimdShiftOp'],{})


template<typename ElemType>
class Vnsra_wxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnsra_wxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnsra_wx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vnsra_wx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnclipu_wx(['\n                        vu max = std::numeric_limits<vu>::max();\n                        uint64_t sign_mask =\n                            std::numeric_limits<uint64_t>::max() << sew;\n                        __uint128_t res = Vs2_vwu[i];\n                        unsigned shift = Rs1_vu & ((sew * 2) - 1);\n\n                        res = int_rounding<__uint128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res & sign_mask) {\n                            // TODO: vxsat\n                            res = max;\n                        }\n\n                        Vd_vu[i + offset] = (vu)res;\n                    ', 'OPIVX', 'SimdCvtOp'],{})


template<typename ElemType>
class Vnclipu_wxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnclipu_wxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnclipu_wx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vnclipu_wx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntNarrowingFormat::vnclip_wx(['\n                        vi max = std::numeric_limits<vi>::max();\n                        vi min = std::numeric_limits<vi>::min();\n                        __int128_t res = Vs2_vwi[i];\n                        unsigned shift = Rs1_vi & ((sew * 2) - 1);\n\n                        res = int_rounding<__int128_t>(\n                            res, 0 /* TODO */, shift) >> shift;\n\n                        if (res < min) {\n                            res = min;\n                            // TODO: vxsat\n                        } else if (res > max) {\n                            res = max;\n                            // TODO: vxsat\n                        }\n\n                        Vd_vi[i + offset] = (vi)res;\n                    ', 'OPIVX', 'SimdCvtOp'],{})


template<typename ElemType>
class Vnclip_wxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnclip_wxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnclip_wx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vnclip_wx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmadc_vxm(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vi[i], Rs1_vi,\n                                    elem_mask(v0, ei)));\n                        ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vmadc_vxmMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmadc_vxmMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmadc_vxm : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmadc_vxm(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmadc_vx(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                carry_out(Vs2_vi[i], Rs1_vi));\n                        ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vmadc_vxMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmadc_vxMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmadc_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmadc_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntMaskFormat::vmsbc_vxm(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                borrow_out(Vs2_vi[i], Rs1_vi,\n                                    elem_mask(v0, ei)));\n                        ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vmsbc_vxmMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsbc_vxmMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsbc_vxm : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsbc_vxm(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsbc_vx(['\n                            Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                                borrow_out(Vs2_vi[i], Rs1_vi));\n                        ', 'OPIVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vmsbc_vxMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsbc_vxMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsbc_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsbc_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntMaskFormat::vmseq_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] == Rs1_vu));\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmseq_vxMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmseq_vxMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmseq_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmseq_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsne_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] != Rs1_vu));\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsne_vxMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsne_vxMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsne_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsne_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsltu_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] < Rs1_vu));\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsltu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsltu_vxMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsltu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsltu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmslt_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] < Rs1_vi));\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmslt_vxMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmslt_vxMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmslt_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmslt_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsleu_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] <= Rs1_vu));\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsleu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsleu_vxMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsleu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsleu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsle_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] <= Rs1_vi));\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsle_vxMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsle_vxMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsle_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsle_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsgtu_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vu[i] > Rs1_vu));\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsgtu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsgtu_vxMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsgtu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsgtu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntMaskFormat::vmsgt_vx(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            (Vs2_vi[i] > Rs1_vi));\n                    ', 'OPIVX', 'SimdCmpOp'],{})


template<typename ElemType>
class Vmsgt_vxMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv[m] or *.vx[m]
    // vs2, v0 for *.vi[m]
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmsgt_vxMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmsgt_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmsgt_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorFloatFormat::vfadd_vf(['\n                        auto fd = fadd<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})


template<typename ElemType>
class Vfadd_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfadd_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfadd_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfadd_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfsub_vf(['\n                        auto fd = fsub<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})


template<typename ElemType>
class Vfsub_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfsub_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfsub_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfsub_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmin_vf(['\n                        auto fd = fmin<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vfmin_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmin_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmin_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfmin_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmax_vf(['\n                        auto fd = fmax<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                            Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vfmax_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmax_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmax_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfmax_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfsgnj_vf(['\n                        Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                             ftype_freg<et>(freg(Fs1_bits)),\n                                             false, false).v;\n                    ', 'OPFVF', 'SimdFloatExtOp'],{})


template<typename ElemType>
class Vfsgnj_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfsgnj_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfsgnj_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfsgnj_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfsgnjn_vf(['\n                        Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                             ftype_freg<et>(freg(Fs1_bits)),\n                                             true, false).v;\n                    ', 'OPFVF', 'SimdFloatExtOp'],{})


template<typename ElemType>
class Vfsgnjn_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfsgnjn_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfsgnjn_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfsgnjn_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfsgnjx_vf(['\n                        Vd_vu[i] = fsgnj<et>(ftype<et>(Vs2_vu[i]),\n                                             ftype_freg<et>(freg(Fs1_bits)),\n                                             false, true).v;\n                    ', 'OPFVF', 'SimdFloatExtOp'],{})


template<typename ElemType>
class Vfsgnjx_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfsgnjx_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfsgnjx_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfsgnjx_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatSlideUpFormat::vfslide1up_vf((['\n                    const int offset = 1;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vdIdx - vs2Idx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int elemOffset = vdOffset + vdIdx * microVlmax;\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            if (this->vm || elem_mask(v0, i + elemOffset)) {\n                                Vd_vu[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                            }\n                        }\n                        // TODO: dirty code\n                        if (vdIdx == 0 && vs2Idx == 0 &&\n                                (this->vm || elem_mask(v0, 0))) {\n                            tmp_d0.as<vu>()[0] = Rs1_vu;\n                        }\n                    }\n                ', 'OPFVF', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vfslide1up_vfMicro : public VectorSlideMicroInst
{
private:
    // vs2, vs1, vm for *.vv, *.vx
    // vs2, vm for *.vi
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfslide1up_vfMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vdIdx, uint32_t _vs2Idx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorSlideMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfslide1up_vf : public VectorSlideMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfslide1up_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorSlideMacroInst::generateDisassembly;
};


// VectorFloatSlideDownFormat::vfslide1down_vf((['\n                    const int offset = 1;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vs2Idx - vdIdx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    const int numVs2s = vtype_regs_per_group(vtype);\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const bool needZeroTail = numVs2s == vs2Idx + 1;\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int elemIdxBase = vdIdx * microVlmax;\n                        vreg_t resVreg;\n                        auto res = resVreg.as<vu>();\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            res[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                        }\n                        if (needZeroTail) {\n                            for (int i = upperBound + vdOffset;\n                                i < microVlmax; i++) {\n                                res[i] = 0;\n                            }\n                        }\n                        for (int i = vdOffset; i < microVl ; i++) {\n                            if (vm || elem_mask(v0, i + elemIdxBase)) {\n                                Vd_vu[i] = (i + elemIdxBase != machInst.vl - 1)\n                                    ? res[i]\n                                    : Rs1_vu;\n                            }\n                        }\n                    }\n                ', 'OPFVF', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vfslide1down_vfMicro : public VectorSlideMicroInst
{
private:
    // vs2, vs1, vm for *.vv, *.vx
    // vs2, vm for *.vi
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfslide1down_vfMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vdIdx, uint32_t _vs2Idx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorSlideMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfslide1down_vf : public VectorSlideMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfslide1down_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorSlideMacroInst::generateDisassembly;
};


// VectorNonSplitFormat::vfmv_s_f((['\n                            if (this->vl) {\n                                auto fd = ftype_freg<et>(freg(Fs1_bits));\n                                Vd_vu[0] = fd.v;\n                            }\n                        ', 'OPFVV', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vfmv_s_f : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vfmv_s_f(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// VectorFloatFormat::vfmerge_vfm(['\n                            Vd_vu[i] = elem_mask(v0, ei)\n                                    ? ftype_freg<et>(freg(Fs1_bits)).v\n                                    : Vs2_vu[i];\n                        ', 'OPFVF', 'SimdMiscOp'],{})


template<typename ElemType>
class Vfmerge_vfmMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmerge_vfmMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmerge_vfm : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfmerge_vfm(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmv_v_f(['\n                            auto fd = ftype_freg<et>(freg(Fs1_bits));\n                            Vd_vu[i] = fd.v;\n                        ', 'OPFVF', 'SimdMiscOp'],{})


template<typename ElemType>
class Vfmv_v_fMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmv_v_fMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmv_v_f : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
public:
    Vfmv_v_f(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorFloatMaskFormat::vmfeq_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            feq<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype_freg<et>(freg(Fs1_bits))));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vmfeq_vfMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv or *.vf
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmfeq_vfMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmfeq_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmfeq_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatMaskFormat::vmfle_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            fle<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype_freg<et>(freg(Fs1_bits))));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vmfle_vfMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv or *.vf
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmfle_vfMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmfle_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmfle_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatMaskFormat::vmflt_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            flt<et>(ftype<et>(Vs2_vu[i]),\n                                    ftype_freg<et>(freg(Fs1_bits))));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vmflt_vfMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv or *.vf
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmflt_vfMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmflt_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmflt_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatMaskFormat::vmfne_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            !feq<et>(ftype<et>(Vs2_vu[i]),\n                                     ftype_freg<et>(freg(Fs1_bits))));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vmfne_vfMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv or *.vf
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmfne_vfMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmfne_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmfne_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatMaskFormat::vmfgt_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            flt<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                    ftype<et>(Vs2_vu[i])));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vmfgt_vfMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv or *.vf
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmfgt_vfMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmfgt_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmfgt_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatMaskFormat::vmfge_vf(['\n                        Vd_ub[(i + offset)/8] = ASSIGN_VD_BIT(i + offset,\n                            fle<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                    ftype<et>(Vs2_vu[i])));\n                    ', 'OPFVF', 'SimdFloatCmpOp'],{})


template<typename ElemType>
class Vmfge_vfMicro : public VectorArithMicroInst
{
private:
    // vs1(rs1), vs2, v0 for *.vv or *.vf
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmfge_vfMicro(ExtMachInst _machInst,
                   uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmfge_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmfge_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfdiv_vf(['\n                        auto fd = fdiv<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatDivOp'],{})


template<typename ElemType>
class Vfdiv_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfdiv_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfdiv_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfdiv_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfrdiv_vf(['\n                        auto fd = fdiv<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                           ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatDivOp'],{})


template<typename ElemType>
class Vfrdiv_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfrdiv_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfrdiv_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfrdiv_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmul_vf(['\n                        auto fd = fmul<et>(ftype<et>(Vs2_vu[i]),\n                                           ftype_freg<et>(freg(Fs1_bits)));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultOp'],{})


template<typename ElemType>
class Vfmul_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmul_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmul_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfmul_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfrsub_vf(['\n                        auto fd = fsub<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                           ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})


template<typename ElemType>
class Vfrsub_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfrsub_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfrsub_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfrsub_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmadd_vf(['\n                        auto fd = fmadd<et>(ftype<et>(Vs3_vu[i]),\n                                            ftype_freg<et>(freg(Fs1_bits)),\n                                            ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfmadd_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmadd_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmadd_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfmadd_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfnmadd_vf(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs3_vu[i])),\n                                            ftype_freg<et>(freg(Fs1_bits)),\n                                            fneg(ftype<et>(Vs2_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfnmadd_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfnmadd_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfnmadd_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfnmadd_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmsub_vf(['\n                        auto fd = fmadd<et>(ftype<et>(Vs3_vu[i]),\n                                            ftype_freg<et>(freg(Fs1_bits)),\n                                            fneg(ftype<et>(Vs2_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfmsub_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmsub_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmsub_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfmsub_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfnmsub_vf(['\n                        auto fd = fmadd<et>(fneg(ftype<et>(Vs3_vu[i])),\n                                            ftype_freg<et>(freg(Fs1_bits)),\n                                            ftype<et>(Vs2_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfnmsub_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfnmsub_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfnmsub_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfnmsub_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmacc_vf(['\n                        auto fd = fmadd<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                            ftype<et>(Vs2_vu[i]),\n                                            ftype<et>(Vs3_vu[i]));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfmacc_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmacc_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmacc_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfmacc_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfnmacc_vf(['\n                        auto fd = fmadd<et>(\n                            fneg(ftype_freg<et>(freg(Fs1_bits))),\n                            ftype<et>(Vs2_vu[i]),\n                            fneg(ftype<et>(Vs3_vu[i]))\n                        );\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfnmacc_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfnmacc_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfnmacc_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfnmacc_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfmsac_vf(['\n                        auto fd = fmadd<et>(ftype_freg<et>(freg(Fs1_bits)),\n                                            ftype<et>(Vs2_vu[i]),\n                                            fneg(ftype<et>(Vs3_vu[i])));\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfmsac_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfmsac_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfmsac_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfmsac_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatFormat::vfnmsac_vf(['\n                        auto fd = fmadd<et>(\n                            fneg(ftype_freg<et>(freg(Fs1_bits))),\n                            ftype<et>(Vs2_vu[i]),\n                            ftype<et>(Vs3_vu[i])\n                        );\n                        Vd_vu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfnmsac_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfnmsac_vfMicro(ExtMachInst _machInst,
        uint32_t _microVl, uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfnmsac_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfnmsac_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwadd_vf(['\n                        auto fd = fadd<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})


template<typename ElemType>
class Vfwadd_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwadd_vfMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwadd_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwadd_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwsub_vf(['\n                        auto fd = fsub<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})


template<typename ElemType>
class Vfwsub_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwsub_vfMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwsub_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwsub_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwadd_wf(['\n                        auto fd = fadd<ewt>(\n                            ftype<ewt>(Vs2_vwu[i]),\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})


template<typename ElemType>
class Vfwadd_wfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwadd_wfMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwadd_wf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwadd_wf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwsub_wf(['\n                        auto fd = fsub<ewt>(\n                            ftype<ewt>(Vs2_vwu[i]),\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatAddOp'],{})


template<typename ElemType>
class Vfwsub_wfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwsub_wfMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwsub_wf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwsub_wf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwmul_vf(['\n                        auto fd = fmul<ewt>(\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultOp'],{})


template<typename ElemType>
class Vfwmul_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwmul_vfMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwmul_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vfwmul_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwmacc_vf(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            ftype<ewt>(Vs3_vwu[i]));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfwmacc_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwmacc_vfMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwmacc_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfwmacc_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwnmacc_vf(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(fneg(ftype_freg<et>(freg(Fs1_bits)))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fneg(ftype<ewt>(Vs3_vwu[i])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfwnmacc_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwnmacc_vfMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwnmacc_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfwnmacc_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwmsac_vf(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(ftype_freg<et>(freg(Fs1_bits))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            fneg(ftype<ewt>(Vs3_vwu[i])));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfwmsac_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwmsac_vfMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwmsac_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfwmsac_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorFloatWideningFormat::vfwnmsac_vf(['\n                        auto fd = fmadd<ewt>(\n                            fwiden(fneg(ftype_freg<et>(freg(Fs1_bits)))),\n                            fwiden(ftype<et>(Vs2_vu[i + offset])),\n                            ftype<ewt>(Vs3_vwu[i]));\n                        Vd_vwu[i] = fd.v;\n                    ', 'OPFVF', 'SimdFloatMultAccOp'],{})


template<typename ElemType>
class Vfwnmsac_vfMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vfwnmsac_vfMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vfwnmsac_vf : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vfwnmsac_vf(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VectorIntFormat::vaaddu_vx(['\n                        __uint128_t res = (__uint128_t)Vs2_vu[i] + Rs1_vu;\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vu[i] = res >> 1;\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vaaddu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vaaddu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vaaddu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vaaddu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vaadd_vx(['\n                        __uint128_t res = (__uint128_t)Vs2_vi[i] + Rs1_vi;\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vi[i] = res >> 1;\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vaadd_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vaadd_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vaadd_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vaadd_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorSlideUpFormat::vslide1up_vx((['\n                    const int offset = 1;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vdIdx - vs2Idx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int elemOffset = vdOffset + vdIdx * microVlmax;\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            if (this->vm || elem_mask(v0, i + elemOffset)) {\n                                Vd_vu[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                            }\n                        }\n                        // TODO: dirty code\n                        if (vdIdx == 0 && vs2Idx == 0 &&\n                                (this->vm || elem_mask(v0, 0))) {\n                            tmp_d0.as<vu>()[0] = Rs1_vu;\n                        }\n                    }\n                ', 'OPIVX', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vslide1up_vxMicro : public VectorSlideMicroInst
{
private:
    // vs2, vs1, vm for *.vv, *.vx
    // vs2, vm for *.vi
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vslide1up_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vdIdx, uint32_t _vs2Idx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorSlideMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vslide1up_vx : public VectorSlideMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vslide1up_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorSlideMacroInst::generateDisassembly;
};


// VectorSlideDownFormat::vslide1down_vx((['\n                    const int offset = 1;\n                    const int microVlmax = vtype_VLMAX(machInst.vtype8,\n                        vlen, true);\n                    const int vregOffset = vs2Idx - vdIdx;\n                    const int offsetInVreg = offset - vregOffset * microVlmax;\n                    const int numVs2s = vtype_regs_per_group(vtype);\n                    if (std::abs(offsetInVreg) < uint32_t(microVlmax)) {\n                        const bool needZeroTail = numVs2s == vs2Idx + 1;\n                        const int upperBound = (offsetInVreg >= 0)\n                            ? microVlmax - offsetInVreg\n                            : microVlmax + offsetInVreg;\n                        const int vdOffset = (offsetInVreg >= 0)\n                            ? 0\n                            : -offsetInVreg;\n                        const int vs2Offset = (offsetInVreg >= 0)\n                            ? offsetInVreg\n                            : 0;\n                        const int elemIdxBase = vdIdx * microVlmax;\n                        vreg_t resVreg;\n                        auto res = resVreg.as<vu>();\n                        for (int i = 0;\n                            i < upperBound && i + vdOffset < microVl;\n                            i++) {\n                            res[i + vdOffset] = Vs2_vu[i + vs2Offset];\n                        }\n                        if (needZeroTail) {\n                            for (int i = upperBound + vdOffset;\n                                i < microVlmax; i++) {\n                                res[i] = 0;\n                            }\n                        }\n                        for (int i = vdOffset; i < microVl ; i++) {\n                            if (vm || elem_mask(v0, i + elemIdxBase)) {\n                                Vd_vu[i] = (i + elemIdxBase != machInst.vl - 1)\n                                    ? res[i]\n                                    : Rs1_vu;\n                            }\n                        }\n                    }\n                ', 'OPIVX', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vslide1down_vxMicro : public VectorSlideMicroInst
{
private:
    // vs2, vs1, vm for *.vv, *.vx
    // vs2, vm for *.vi
    RegId srcRegIdxArr[3];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vslide1down_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
        uint32_t _microIdx, uint32_t _vdIdx, uint32_t _vs2Idx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorSlideMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vslide1down_vx : public VectorSlideMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vslide1down_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorSlideMacroInst::generateDisassembly;
};


// VectorNonSplitFormat::vmv_s_x((['\n                            if (this->vl) {\n                                Vd_vu[0] = Rs1_vu;\n                            }\n                        ', 'OPMVX', 'SimdMiscOp'], {}))


template<typename ElemType>
class Vmv_s_x : public VectorNonSplitInst {
private:
    RegId srcRegIdxArr[2];
    RegId destRegIdxArr[1];
public:
    Vmv_s_x(ExtMachInst _machInst);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorNonSplitInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// VectorIntFormat::vasubu_vx(['\n                        __uint128_t res = (__uint128_t)Vs2_vu[i] - Rs1_vu;\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vu[i] = res >> 1;\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vasubu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vasubu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vasubu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vasubu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vasub_vx(['\n                        __uint128_t res = (__uint128_t)Vs2_vi[i] - Rs1_vi;\n                        res = int_rounding<__uint128_t>(res, 0 /* TODO */, 1);\n                        Vd_vi[i] = res >> 1;\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vasub_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vasub_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vasub_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vasub_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vdivu_vx(['\n                        Vd_vu[i] = divu<vu>(Vs2_vu[i], Rs1_vu);\n                    ', 'OPMVX', 'SimdDivOp'],{})


template<typename ElemType>
class Vdivu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vdivu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vdivu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vdivu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vdiv_vx(['\n                        Vd_vi[i] = div<vi>(Vs2_vi[i], Rs1_vi);\n                    ', 'OPMVX', 'SimdDivOp'],{})


template<typename ElemType>
class Vdiv_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vdiv_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vdiv_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vdiv_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vremu_vx(['\n                        Vd_vu[i] = remu<vu>(Vs2_vu[i], Rs1_vu);\n                    ', 'OPMVX', 'SimdDivOp'],{})


template<typename ElemType>
class Vremu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vremu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vremu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vremu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vrem_vx(['\n                        Vd_vi[i] = rem<vi>(Vs2_vi[i], Rs1_vi);\n                    ', 'OPMVX', 'SimdDivOp'],{})


template<typename ElemType>
class Vrem_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vrem_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vrem_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vrem_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmulhu_vx(['\n                        Vd_vu[i] = mulhu<vu>(Vs2_vu[i], Rs1_vu);\n                    ', 'OPMVX', 'SimdMultOp'],{})


template<typename ElemType>
class Vmulhu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmulhu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmulhu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmulhu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmul_vx(['\n                        Vd_vi[i] = Vs2_vi[i] * Rs1_vi;\n                    ', 'OPMVX', 'SimdMultOp'],{})


template<typename ElemType>
class Vmul_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmul_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmul_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmul_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmulhsu_vx(['\n                        Vd_vi[i] = mulhsu<vi>(Vs2_vi[i], Rs1_vu);\n                    ', 'OPMVX', 'SimdMultOp'],{})


template<typename ElemType>
class Vmulhsu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmulhsu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmulhsu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmulhsu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmulh_vx(['\n                        Vd_vi[i] = mulh<vi>(Vs2_vi[i], Rs1_vi);\n                    ', 'OPMVX', 'SimdMultOp'],{})


template<typename ElemType>
class Vmulh_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmulh_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmulh_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vmulh_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmadd_vx(['\n                        Vd_vi[i] = Vs3_vi[i] * Rs1_vi + Vs2_vi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vmadd_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmadd_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmadd_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vmadd_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vnmsub_vx(['\n                        Vd_vi[i] = -(Vs3_vi[i] * Rs1_vi) + Vs2_vi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vnmsub_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnmsub_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnmsub_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vnmsub_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vmacc_vx(['\n                        Vd_vi[i] = Vs2_vi[i] * Rs1_vi + Vs3_vi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vmacc_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vmacc_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vmacc_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vmacc_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntFormat::vnmsac_vx(['\n                        Vd_vi[i] = -(Vs2_vi[i] * Rs1_vi) + Vs3_vi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vnmsac_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    // vs2, (old_vd), vm for *.vi
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vnmsac_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vnmsac_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vnmsac_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwaddu_vx(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset]) + vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vwaddu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwaddu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwaddu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwaddu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwadd_vx(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset]) + vwi(Rs1_vi);\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vwadd_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwadd_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwadd_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwadd_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwsubu_vx(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset]) - vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vwsubu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwsubu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwsubu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwsubu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwsub_vx(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset]) - vwi(Rs1_vi);\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vwsub_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwsub_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwsub_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwsub_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwaddu_wx(['\n                        Vd_vwu[i] = Vs2_vwu[i] + vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vwaddu_wxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwaddu_wxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwaddu_wx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwaddu_wx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwadd_wx(['\n                        Vd_vwi[i] = Vs2_vwi[i] + vwi(Rs1_vi);\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vwadd_wxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwadd_wxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwadd_wx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwadd_wx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwsubu_wx(['\n                        Vd_vwu[i] = Vs2_vwu[i] - vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vwsubu_wxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwsubu_wxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwsubu_wx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwsubu_wx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwsub_wx(['\n                        Vd_vwi[i] = Vs2_vwi[i] - vwi(Rs1_vi);\n                    ', 'OPMVX', 'SimdAddOp'],{})


template<typename ElemType>
class Vwsub_wxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwsub_wxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwsub_wx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwsub_wx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmulu_vx(['\n                        Vd_vwu[i] = vwu(Vs2_vu[i + offset]) * vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdMultOp'],{})


template<typename ElemType>
class Vwmulu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmulu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmulu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwmulu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmulsu_vx(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset]) * vwu(Rs1_vu);\n                    ', 'OPMVX', 'SimdMultOp'],{})


template<typename ElemType>
class Vwmulsu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmulsu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmulsu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwmulsu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmul_vx(['\n                        Vd_vwi[i] = vwi(Vs2_vi[i + offset]) * vwi(Rs1_vi);\n                    ', 'OPMVX', 'SimdMultOp'],{})


template<typename ElemType>
class Vwmul_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmul_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmul_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
public:
    Vwmul_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmaccu_vx(['\n                        Vd_vwu[i] = vwu(Rs1_vu) * vwu(Vs2_vu[i + offset])\n                                + Vs3_vwu[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vwmaccu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmaccu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmaccu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vwmaccu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmacc_vx(['\n                        Vd_vwi[i] = vwi(Rs1_vi) * vwi(Vs2_vi[i + offset])\n                                + Vs3_vwi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vwmacc_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmacc_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmacc_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vwmacc_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmaccus_vx(['\n                        Vd_vwi[i] = vwu(Rs1_vu) * vwi(Vs2_vi[i + offset])\n                                + Vs3_vwi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vwmaccus_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmaccus_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmaccus_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vwmaccus_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// VectorIntWideningFormat::vwmaccsu_vx(['\n                        Vd_vwi[i] = vwi(Rs1_vi) * vwu(Vs2_vu[i + offset])\n                                + Vs3_vwi[i];\n                    ', 'OPMVX', 'SimdMultAccOp'],{})


template<typename ElemType>
class Vwmaccsu_vxMicro : public VectorArithMicroInst
{
private:
    // vs1, vs2, vs3(old_vd), vm for *.vv, *.vx
    RegId srcRegIdxArr[4];
    RegId destRegIdxArr[1];
    bool vm;
public:
    Vwmaccsu_vxMicro(ExtMachInst _machInst, uint32_t _microVl,
                   uint32_t _microIdx);
    Fault execute(ExecContext* xc, trace::InstRecord* traceData)const override;
    using VectorArithMicroInst::generateDisassembly;
};



template<typename ElemType>
class Vwmaccsu_vx : public VectorArithMacroInst {
private:
    RegId srcRegIdxArr[3]; RegId destRegIdxArr[1];
public:
    Vwmaccsu_vx(ExtMachInst _machInst, uint32_t _vlen);
    using VectorArithMacroInst::generateDisassembly;
};


// Unknown::unknown(([], {}))

// VConfOp::vsetvli(['\n                        uint64_t rd_bits = RD;\n                        uint64_t rs1_bits = RS1;\n                        uint64_t requested_vl = Rs1_ud;\n                        uint64_t requested_vtype = zimm11;\n                        uint32_t vlen = VlenbBits * 8;\n                        uint32_t vlmax = getVlmax(Vtype, vlen);\n                        uint32_t current_vl = VL;\n                    ', '\n                        Rd_ud = new_vl;\n                        VL = new_vl;\n                        Vtype = new_vtype;\n                    ', 'VSetVlDeclare', 'VSetVliBranchTarget', 'SimdConfigOp', 'IsUncondControl', 'IsIndirectControl'],{})

    //
    // Static instruction class for "vsetvli".
    //
    class Vsetvli : public VConfOp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];
        VTYPE getNewVtype(VTYPE, VTYPE, uint32_t) const;
        uint32_t getNewVL(
            uint32_t, uint32_t, uint32_t, uint64_t, uint64_t) const;

      public:
        /// Constructor.
        Vsetvli(ExtMachInst machInst, uint32_t elen);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::unique_ptr<PCStateBase> branchTarget(
                ThreadContext *tc) const override;

        using StaticInst::branchTarget;
        using VConfOp::generateDisassembly;

    };

// VConfOp::vsetvl(['\n                            uint64_t rd_bits = RD;\n                            uint64_t rs1_bits = RS1;\n                            uint64_t requested_vl = Rs1_ud;\n                            uint64_t requested_vtype = Rs2_ud;\n                            uint32_t vlen = VlenbBits * 8;\n                            uint32_t vlmax = getVlmax(Vtype, vlen);\n                            uint32_t current_vl = VL;\n                        ', '\n                            Rd_ud = new_vl;\n                            VL = new_vl;\n                            Vtype = new_vtype;\n                        ', 'VSetVlDeclare', 'VSetVlBranchTarget', 'SimdConfigOp', 'IsUncondControl', 'IsIndirectControl'],{})

    //
    // Static instruction class for "vsetvl".
    //
    class Vsetvl : public VConfOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[1];
        VTYPE getNewVtype(VTYPE, VTYPE, uint32_t) const;
        uint32_t getNewVL(
            uint32_t, uint32_t, uint32_t, uint64_t, uint64_t) const;

      public:
        /// Constructor.
        Vsetvl(ExtMachInst machInst, uint32_t elen);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::unique_ptr<PCStateBase> branchTarget(
                ThreadContext *tc) const override;

        using StaticInst::branchTarget;
        using VConfOp::generateDisassembly;

    };

// VConfOp::vsetivli(['\n                            uint64_t rd_bits = RD;\n                            uint64_t rs1_bits = -1;\n                            uint64_t requested_vl = uimm;\n                            uint64_t requested_vtype = zimm10;\n                            uint32_t vlen = VlenbBits * 8;\n                            uint32_t vlmax = getVlmax(Vtype, vlen);\n                            uint32_t current_vl = VL;\n                        ', '\n                            Rd_ud = new_vl;\n                            VL = new_vl;\n                            Vtype = new_vtype;\n                        ', 'VSetiVliDeclare', 'VSetiVliBranchTarget', 'SimdConfigOp', 'IsUncondControl', 'IsDirectControl'],{})

    //
    // Static instruction class for "vsetivli".
    //
    class Vsetivli : public VConfOp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];
        VTYPE getNewVtype(VTYPE, VTYPE, uint32_t) const;
        uint32_t getNewVL(
            uint32_t, uint32_t, uint32_t, uint64_t, uint64_t) const;

      public:
        /// Constructor.
        Vsetivli(ExtMachInst machInst, uint32_t elen);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
        using VConfOp::generateDisassembly;

    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))

// BOp::beq(['\n                    if (rvSext(Rs1) == rvSext(Rs2)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})

    //
    // Static instruction class for "beq".
    //
    class Beq : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Beq(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
    };

// BOp::bne(['\n                    if (rvSext(Rs1) != rvSext(Rs2)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})

    //
    // Static instruction class for "bne".
    //
    class Bne : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Bne(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
    };

// BOp::blt(['\n                    if (rvSext(Rs1_sd) < rvSext(Rs2_sd)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})

    //
    // Static instruction class for "blt".
    //
    class Blt : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Blt(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
    };

// BOp::bge(['\n                    if (rvSext(Rs1_sd) >= rvSext(Rs2_sd)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})

    //
    // Static instruction class for "bge".
    //
    class Bge : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Bge(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
    };

// BOp::bltu(['\n                    if (rvZext(Rs1) < rvZext(Rs2)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})

    //
    // Static instruction class for "bltu".
    //
    class Bltu : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Bltu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
    };

// BOp::bgeu(['\n                    if (rvZext(Rs1) >= rvZext(Rs2)) {\n                        NPC = rvZext(PC + imm);\n                    } else {\n                        NPC = rvZext(NPC);\n                    }\n                ', 'IsDirectControl', 'IsCondControl'],{})

    //
    // Static instruction class for "bgeu".
    //
    class Bgeu : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Bgeu(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
    };

// Unknown::unknown(([], {}))

// Jump::jalr((['\n                Rd = rvSext(NPC);\n                NPC = rvZext((imm + Rs1) & (~0x1));\n            ', 'IsIndirectControl', 'IsUncondControl'], {}))

    //
    // Static instruction class for "jalr".
    //
    class Jalr : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Jalr(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                ThreadContext *tc) const override;

        using StaticInst::branchTarget;
    };

// Unknown::unknown(([], {}))

// JOp::jal((['\n            Rd = rvSext(NPC);\n            NPC = rvZext(PC + imm);\n        ', 'IsDirectControl', 'IsUncondControl'], {}))

    //
    // Static instruction class for "jal".
    //
    class Jal : public ImmOp<int64_t>
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Jal(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;

        std::string
        generateDisassembly(
                Addr pc, const loader::SymbolTable *symtab) const override;

        std::unique_ptr<PCStateBase> branchTarget(
                const PCStateBase &branch_pc) const override;

        using StaticInst::branchTarget;
    };

// SystemOp::ecall(['\n                            return std::make_shared<SyscallFault>(\n                                (PrivilegeMode)xc->readMiscReg(MISCREG_PRV));\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsSyscall', 'No_OpClass'],{})

    //
    // Static instruction class for "ecall".
    //
    class Ecall : public SystemOp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Ecall(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using SystemOp::generateDisassembly;
    };

// SystemOp::ebreak(['\n                            return executeEBreakOrSemihosting(xc);\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})

    //
    // Static instruction class for "ebreak".
    //
    class Ebreak : public SystemOp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Ebreak(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using SystemOp::generateDisassembly;
    };

// SystemOp::uret(['\n                           MISA misa = xc->readMiscReg(MISCREG_ISA);\n                            if (!misa.rvn) {\n                                return std::make_shared<IllegalInstFault>(\n                                    "sret can\'t execute without N systems",\n                                    machInst);\n                            }\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            status.uie = status.upie;\n                            status.upie = 1;\n                            xc->setMiscReg(MISCREG_STATUS, status);\n                            NPC = xc->readMiscReg(MISCREG_UEPC);\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsReturn'],{})

    //
    // Static instruction class for "uret".
    //
    class Uret : public SystemOp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Uret(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using SystemOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// SystemOp::sret(['\n                            MISA misa = xc->readMiscReg(MISCREG_ISA);\n                            if (!misa.rvs) {\n                                return std::make_shared<IllegalInstFault>(\n                                            "sret can\'t execute without RVS",\n                                            machInst);\n                            }\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            auto pm = (PrivilegeMode)xc->readMiscReg(\n                                MISCREG_PRV);\n                            if (pm == PRV_U ||\n                                (pm == PRV_S && status.tsr == 1)) {\n                                return std::make_shared<IllegalInstFault>(\n                                            "sret in user mode or TSR enabled",\n                                            machInst);\n                                NPC = NPC;\n                            } else {\n                                xc->setMiscReg(MISCREG_PRV, status.spp);\n                                status.sie = status.spie;\n                                status.spie = 1;\n                                status.spp = PRV_U;\n                                xc->setMiscReg(MISCREG_STATUS, status);\n                                NPC = xc->readMiscReg(MISCREG_SEPC);\n                            }\n                        ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsReturn'],{})

    //
    // Static instruction class for "sret".
    //
    class Sret : public SystemOp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Sret(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using SystemOp::generateDisassembly;
    };

// SystemOp::wfi(['\n                            MISA misa = xc->readMiscReg(MISCREG_ISA);\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            auto pm = (PrivilegeMode)xc->readMiscReg(\n                                MISCREG_PRV);\n                            if (misa.rvs && (pm == PRV_U ||\n                                (pm == PRV_S && status.tw == 1))) {\n                                return std::make_shared<IllegalInstFault>(\n                                            "wfi in user mode or TW enabled",\n                                            machInst);\n                            }\n                            // Go to sleep only if there\'s no pending interrupt\n                            // at all, including masked interrupts.\n                            auto tc = xc->tcBase();\n                            auto cpu = tc->getCpuPtr();\n                            auto ic = dynamic_cast<RiscvISA::Interrupts*>(\n                                cpu->getInterruptController(tc->threadId()));\n                            panic_if(!ic, "Invalid Interrupt Controller.");\n                            if (ic->readIP() == 0\n                                && xc->readMiscReg(MISCREG_NMIP) == 0) {\n                                tc->quiesce();\n                            }\n                        ', 'IsNonSpeculative', 'IsQuiesce', 'IsSerializeAfter', 'No_OpClass', 'IsSquashAfter'],{})

    //
    // Static instruction class for "wfi".
    //
    class Wfi : public SystemOp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Wfi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using SystemOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// SystemOp::sfence_vma(['\n                        MISA misa = xc->readMiscReg(MISCREG_ISA);\n                        if (!misa.rvs) {\n                            return std::make_shared<IllegalInstFault>(\n                                "sfence_vma can\'t execute without RVS",\n                                machInst);\n                        }\n                        STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                        auto pm = (PrivilegeMode)xc->readMiscReg(MISCREG_PRV);\n                        if (pm == PRV_U || (pm == PRV_S && status.tvm == 1)) {\n                            return std::make_shared<IllegalInstFault>(\n                                        "sfence in user mode or TVM enabled",\n                                        machInst);\n                        }\n                        xc->tcBase()->getMMUPtr()->demapPage(Rs1, Rs2);\n                    ', 'IsNonSpeculative', 'IsSerializeAfter', 'No_OpClass'],{})

    //
    // Static instruction class for "sfence_vma".
    //
    class Sfence_vma : public SystemOp
    {
      private:
        RegId srcRegIdxArr[2]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Sfence_vma(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using SystemOp::generateDisassembly;
    };

// SystemOp::mret(['\n                        if (xc->readMiscReg(MISCREG_PRV) != PRV_M) {\n                            return std::make_shared<IllegalInstFault>(\n                                        "mret at lower privilege", machInst);\n                            NPC = NPC;\n                        } else {\n                            STATUS status = xc->readMiscReg(MISCREG_STATUS);\n                            xc->setMiscReg(MISCREG_PRV, status.mpp);\n                            xc->setMiscReg(MISCREG_NMIE, 1);\n                            status.mie = status.mpie;\n                            status.mpie = 1;\n                            status.mpp = PRV_U;\n                            xc->setMiscReg(MISCREG_STATUS, status);\n                            NPC = xc->readMiscReg(MISCREG_MEPC);\n                        }\n                    ', 'IsSerializeAfter', 'IsNonSpeculative', 'IsReturn'],{})

    //
    // Static instruction class for "mret".
    //
    class Mret : public SystemOp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[0];

      public:
        /// Constructor.
        Mret(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using SystemOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// CSROp::csrrw(['\n                    Rd = rvSext(data);\n                    data = rvZext(Rs1);\n                ', 'RD != 0', 'true', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})

    //
    // Static instruction class for "csrrw".
    //
    class Csrrw : public CSROp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Csrrw(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using CSROp::generateDisassembly;
    };

// CSROp::csrrs(['\n                    Rd = rvSext(data);\n                    data = rvZext(data | Rs1);\n                ', 'true', 'RS1 != 0', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})

    //
    // Static instruction class for "csrrs".
    //
    class Csrrs : public CSROp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Csrrs(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using CSROp::generateDisassembly;
    };

// CSROp::csrrc(['\n                    Rd = rvSext(data);\n                    data = rvZext(data & ~Rs1);\n                ', 'true', 'RS1 != 0', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})

    //
    // Static instruction class for "csrrc".
    //
    class Csrrc : public CSROp
    {
      private:
        RegId srcRegIdxArr[1]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Csrrc(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using CSROp::generateDisassembly;
    };

// CSROp::csrrwi(['\n                    Rd = rvSext(data);\n                    data = rvZext(uimm);\n                ', 'RD != 0', 'true', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})

    //
    // Static instruction class for "csrrwi".
    //
    class Csrrwi : public CSROp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Csrrwi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using CSROp::generateDisassembly;
    };

// CSROp::csrrsi(['\n                    Rd = rvSext(data);\n                    data = rvZext(data | uimm);\n                ', 'true', 'uimm != 0', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})

    //
    // Static instruction class for "csrrsi".
    //
    class Csrrsi : public CSROp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Csrrsi(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using CSROp::generateDisassembly;
    };

// CSROp::csrrci(['\n                    Rd = rvSext(data);\n                    data = rvZext(data & ~uimm);\n                ', 'true', 'uimm != 0', 'IsSerializeAfter', 'IsNonSpeculative', 'No_OpClass'],{})

    //
    // Static instruction class for "csrrci".
    //
    class Csrrci : public CSROp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[1];

      public:
        /// Constructor.
        Csrrci(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using CSROp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// M5Op::M5Op(([], {}))

    //
    // Static instruction class for "M5Op".
    //
    class M5Op : public PseudoOp
    {
      private:
        RegId srcRegIdxArr[0]; RegId destRegIdxArr[2];

      public:
        /// Constructor.
        M5Op(ExtMachInst machInst);
        Fault execute(ExecContext *, trace::InstRecord *) const override;
        using PseudoOp::generateDisassembly;
    };

// Unknown::unknown(([], {}))

// Unknown::unknown(([], {}))
