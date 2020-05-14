#include "opcodes.h"

int op_ACI(int8_t data8)
{
	return ACI(data8);
}

int op_ADC_A()
{
	return ADC(rA);
}

int op_ADC_B()
{
	return ADC(rB);
}

int op_ADC_C()
{
	return ADC(rC);
}

int op_ADC_D()
{
	return ADC(rD);
}

int op_ADC_E()
{
	return ADC(rE);
}

int op_ADC_H()
{
	return ADC(rH);
}

int op_ADC_L()
{
	return ADC(rL);
}

int op_ADC_M()
{
	return ADC_M();
}

int op_ADD_A()
{
	return ADD(rA);
}

int op_ADD_B()
{
	return ADD(rB);
}

int op_ADD_C()
{
	return ADD(rC);
}

int op_ADD_D()
{
	return ADD(rD);
}

int op_ADD_E()
{
	return ADD(rE);
}

int op_ADD_H()
{
	return ADD(rH);
}

int op_ADD_L()
{
	return ADD(rL);
}

int op_ADD_M()
{
	return ADD_M();
}

int op_ADI(int8_t data8)
{
	return ADI(data8);
}

int op_ANA_A()
{
	return ANA(rA);
}

int op_ANA_B()
{
	return ANA(rB);
}

int op_ANA_C()
{
	return ANA(rC);
}

int op_ANA_D()
{
	return ANA(rD);
}

int op_ANA_E()
{
	return ANA(rE);
}

int op_ANA_H()
{
	return ANA(rH);
}

int op_ANA_L()
{
	return ANA(rL);
}

int op_ANA_M()
{
	return ANA_M();
}

int op_ANI(int8_t data8)
{
	return ANI(data8);
}

int op_CALL(Mem_t targetAddress)
{
	return CALL(targetAddress);
}

int op_CC(Mem_t targetAddress)
{
	return CC(targetAddress);
}

int op_CM(Mem_t targetAddress)
{
	return CM(targetAddress);
}

int op_CMA()
{
	return CMA();
}

int op_CMC()
{
	return CMC();
}

int op_CMP_A()
{
	return CMP(rA);
}

int op_CMP_B()
{
	return CMP(rB);
}

int op_CMP_C()
{
	return CMP(rC);
}

int op_CMP_D()
{
	return CMP(rD);
}

int op_CMP_E()
{
	return CMP(rE);
}

int op_CMP_H()
{
	return CMP(rH);
}

int op_CMP_L()
{
	return CMP(rL);
}

int op_CMP_M()
{
	return CMP_M();
}

int op_CNC(Mem_t targetAddress)
{
	return CNC(targetAddress);
}

int op_CNZ(Mem_t targetAddress)
{
	return CNZ(targetAddress);
}

int op_CP(Mem_t targetAddress)
{
	return CP(targetAddress);
}

int op_CPE(Mem_t targetAddress)
{
	return CPE(targetAddress);
}

int op_CPI(int8_t data8)
{
	return CPI(data8);
}

int op_CPO(Mem_t targetAddress)
{
	return CPO(targetAddress);
}

int op_CZ(Mem_t targetAddress)
{
	return CZ(targetAddress);
}

int op_DAA()
{
	return DAA();
}

int op_DAD_B()
{
	return DAD(rBC);
}

int op_DAD_D()
{
	return DAD(rDE);
}

int op_DAD_H()
{
	return DAD(rHL);
}

int op_DAD_SP()
{
	return DAD(rSP);
}

int op_DCR_A()
{
	return DCR(rA);
}

int op_DCR_B()
{
	return DCR(rB);
}

int op_DCR_C()
{
	return DCR(rC);
}

int op_DCR_D()
{
	return DCR(rD);
}

int op_DCR_E()
{
	return DCR(rE);
}

int op_DCR_H()
{
	return DCR(rH);
}

int op_DCR_L()
{
	return DCR(rL);
}

int op_DCR_M()
{
	return DCR_M();
}

int op_DCX_B()
{
	return DCX(rBC);
}

int op_DCX_D()
{
	return DCX(rDE);
}

int op_DCX_H()
{
	return DCX(rHL);
}

int op_DCX_SP()
{
	return DCX(rSP);
}

int op_DI()
{
	return DI();

}

int op_EI()
{
	return EI();
}

int op_HLT()
{
	return HLT();
}

int op_IN(Mem_t portAddress)
{
	return IN(portAddress);
}

int op_INR_A()
{	
	return INR(rA);
}

int op_INR_B()
{
	return INR(rB);
}

int op_INR_C()
{
	return INR(rC);
}

int op_INR_D()
{
	return INR(rD);
}

int op_INR_E()
{
	return INR(rE);
}

int op_INR_H()
{
	return INR(rH);
}

int op_INR_L()
{
	return INR(rL);
}

int op_INR_M()
{
	return INR_M();
}

int op_INX_B()
{
	return INX(rBC);
}

int op_INX_D()
{
	return INX(rDE);
}

int op_INX_H()
{
	return INX(rHL);
}

int op_INX_SP()
{
	return INX(rSP);
}

int op_JC(Mem_t targetAddress)
{
	return JC(targetAddress);
}

int op_JM(Mem_t targetAddress)
{
	return JM(targetAddress);
}

int op_JMP(Mem_t targetAddress)
{
	return JMP(targetAddress);
}

int op_JNC(Mem_t targetAddress)
{
	return JNC(targetAddress);
}

int op_JNZ(Mem_t targetAddress)
{
	return JNZ(targetAddress);
}

int op_JP(Mem_t targetAddress)
{
	return JP(targetAddress);
}

int op_JPE(Mem_t targetAddress)
{
	return JPE(targetAddress);
}

int op_JPO(Mem_t targetAddress)
{
	return JPO(targetAddress);
}

int op_JZ(Mem_t targetAddress)
{
	return JZ(targetAddress);
}

int op_LDA(Mem_t sourceAddress)
{
	return LDA(sourceAddress);
}

int op_LDAX_B()
{
	return LDAX(rBC);
}

int op_LDAX_D()
{
	return LDAX(rDE);
}

int op_LHLD(Mem_t sourceAddress)
{
	return LHLD(sourceAddress);
}

int op_LXI_B(uint16_t data16)
{
	return LXI(rBC, data16);
}

int op_LXI_D(uint16_t data16)
{
	return LXI(rDE, data16);
}

int op_LXI_H(uint16_t data16)
{
	return LXI(rHL, data16);
}

int op_LXI_SP(uint16_t data16)
{
	return LXI(rSP, data16);
}

int op_MOV_AA()
{
	return MOV_RR(rA, rA);
}

int op_MOV_AB()
{
	return MOV_RR(rA, rB);
}

int op_MOV_AC()
{
	return MOV_RR(rA, rC);
}

int op_MOV_AD()
{
	return MOV_RR(rA, rD);
}

int op_MOV_AE()
{
	return MOV_RR(rA, rE);
}

int op_MOV_AH()
{
	return MOV_RR(rA, rH);
}

int op_MOV_AL()
{
	return MOV_RR(rA, rL);
}

int op_MOV_AM()
{
	return MOV_RM(rA);
}

int op_MOV_BA()
{
	return MOV_RR(rB, rA);
}

int op_MOV_BB()
{
	return MOV_RR(rB, rB);
}

int op_MOV_BC()
{
	return MOV_RR(rB, rC);
}

int op_MOV_BD()
{
	return MOV_RR(rB, rD);
}

int op_MOV_BE()
{
	return MOV_RR(rB, rE);
}

int op_MOV_BH()
{
	return MOV_RR(rB, rH);
}

int op_MOV_BL()
{
	return MOV_RR(rB, rL);
}

int op_MOV_BM()
{
	return MOV_RM(rB);
}

int op_MOV_CA()
{
	return MOV_RR(rC, rA);
}

int op_MOV_CB()
{
	return MOV_RR(rC, rB);
}

int op_MOV_CC()
{
	return MOV_RR(rC, rC);
}

int op_MOV_CD()
{
	return MOV_RR(rC, rD);
}

int op_MOV_CE()
{
	return MOV_RR(rC, rE);
}

int op_MOV_CH()
{
	return MOV_RR(rC, rH);
}

int op_MOV_CL()
{
	return MOV_RR(rC, rL);
}

int op_MOV_CM()
{
	return MOV_RM(rC);
}

int op_MOV_DA()
{
	return MOV_RR(rD, rA);
}

int op_MOV_DB()
{
	return MOV_RR(rD, rB);
}

int op_MOV_DC()
{
	return MOV_RR(rD, rC);
}

int op_MOV_DD()
{
	return MOV_RR(rD, rD);
}

int op_MOV_DE()
{
	return MOV_RR(rD, rE);
}

int op_MOV_DH()
{
	return MOV_RR(rD, rH);
}

int op_MOV_DL()
{
	return MOV_RR(rD, rL);
}

int op_MOV_DM()
{
	return MOV_RM(rD);
}

int op_MOV_EA()
{
	return MOV_RR(rE, rA);
}

int op_MOV_EB()
{
	return MOV_RR(rE, rB);
}

int op_MOV_EC()
{
	return MOV_RR(rE, rC);
}

int op_MOV_ED()
{
	return MOV_RR(rE, rD);
}

int op_MOV_EE()
{
	return MOV_RR(rE, rE);
}

int op_MOV_EH()
{
	return MOV_RR(rE, rH);
}

int op_MOV_EL()
{
	return MOV_RR(rE, rL);
}

int op_MOV_EM()
{	
	return MOV_RM(rE);
}

int op_MOV_HA()
{
	return MOV_RR(rH, rA);
}

int op_MOV_HB()
{
	return MOV_RR(rH, rB);
}

int op_MOV_HC()
{
	return MOV_RR(rH, rC);
}

int op_MOV_HD()
{
	return MOV_RR(rH, rD);
}

int op_MOV_HE()
{
	return MOV_RR(rH, rE);
}

int op_MOV_HH()
{
	return MOV_RR(rH, rH);
}

int op_MOV_HL()
{
	return MOV_RR(rH, rL);
}

int op_MOV_HM()
{
	return MOV_RM(rH);
}

int op_MOV_LA()
{
	return MOV_RR(rL, rA);
}

int op_MOV_LB()
{
	return MOV_RR(rL, rB);
}

int op_MOV_LC()
{
	return MOV_RR(rL, rC);
}

int op_MOV_LD()
{
	return MOV_RR(rL, rD);
}

int op_MOV_LE()
{
	return MOV_RR(rL, rE);
}

int op_MOV_LH()
{
	return MOV_RR(rL, rH);
}

int op_MOV_LL()
{
	return MOV_RR(rL, rL);
}

int op_MOV_LM()
{
	return MOV_RM(rL);
}

int op_MOV_MA()
{
	return MOV_MR(rA);
}

int op_MOV_MB()
{
	return MOV_MR(rB);
}

int op_MOV_MC()
{
	return MOV_MR(rC);
}

int op_MOV_MD()
{
	return MOV_MR(rD);
}

int op_MOV_ME()
{
	return MOV_MR(rE);
}

int op_MOV_MH()
{
	return MOV_MR(rH);
}

int op_MOV_ML()
{
	return MOV_MR(rL);
}

int op_MVI_A(int8_t data8)
{
	return MVI_RD(rA, data8);
}

int op_MVI_B(int8_t data8)
{
	return MVI_RD(rB, data8);
}

int op_MVI_C(int8_t data8)
{
	return MVI_RD(rC, data8);
}

int op_MVI_D(int8_t data8)
{
	return MVI_RD(rD, data8);
}

int op_MVI_E(int8_t data8)
{
	return MVI_RD(rE, data8);
}

int op_MVI_H(int8_t data8)
{
	return MVI_RD(rH, data8);
}

int op_MVI_L(int8_t data8)
{
	return MVI_RD(rL, data8);
}

int op_MVI_M(int8_t data8)
{
	return MVI_MD(data8);
}

int op_NOP()
{
	return NOP();
}
int op_ORA_A();
int op_ORA_B();
int op_ORA_C();
int op_ORA_D();
int op_ORA_E();
int op_ORA_H();
int op_ORA_L();
int op_ORA_M();
int op_ORI(uint8_t data8);
int op_OUT(uint16_t destinationPortAddress);
int op_PCHL();
int op_POP_B();
int op_POP_D();
int op_POP_H();
int op_POP_PSW();
int op_PUSH_B();
int op_PUSH_D();
int op_PUSH_H();
int op_PUSH_PSW();
int op_RAL();
int op_RAR();
int op_RC();
int op_RET();
int op_RIM();
int op_RLC();
int op_RM();
int op_RNC();
int op_RNZ();
int op_RP();
int op_RPE();
int op_RPO();
int op_RRC();
int op_RST_0();
int op_RST_1();
int op_RST_2();
int op_RST_3();
int op_RST_4();
int op_RST_5();
int op_RST_6();
int op_RST_7();
int op_RZ();
int op_SBB_A();
int op_SBB_B();
int op_SBB_C();
int op_SBB_D();
int op_SBB_E();
int op_SBB_H();
int op_SBB_L();
int op_SBB_M();
int op_SBI(int8_t data);
int op_SHLD(uint16_t destinationAddress);
int op_SIM();
int op_SPHL();
int op_STA(uint16_t destinationAddress);
int op_STAX_B();
int op_STAX_D();
int op_STC();
int op_SUB_A();
int op_SUB_B();
int op_SUB_C();
int op_SUB_D();
int op_SUB_E();
int op_SUB_H();
int op_SUB_L();
int op_SUB_M();
int op_SUI(int8_t data8);
int op_XCHG();
int op_XRA_A();
int op_XRA_B();
int op_XRA_C();
int op_XRA_D();
int op_XRA_E();
int op_XRA_H();
int op_XRA_L();
int op_XRA_M();
int op_XRI(int8_t data8);
int op_XTHL();

