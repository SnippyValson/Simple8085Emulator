#include "opcodes.h"

int op_ACI(int8_t data8)
{
	return ACI(data8);
}

int op_ADC_A()
{
	return ADC(r_A);
}

int op_ADC_B()
{
	return ADC(r_B);
}

int op_ADC_C()
{
	return ADC(r_C);
}

int op_ADC_D()
{
	return ADC(r_D);
}

int op_ADC_E()
{
	return ADC(r_E);
}

int op_ADC_H()
{
	return ADC(r_H);
}

int op_ADC_L()
{
	return ADC(r_L);
}

int op_ADC_M()
{
	return ADC_M();
}

int op_ADD_A()
{
	return ADD(r_A);
}

int op_ADD_B()
{
	return ADD(r_B);
}

int op_ADD_C()
{
	return ADD(r_C);
}

int op_ADD_D()
{
	return ADD(r_D);
}

int op_ADD_E()
{
	return ADD(r_E);
}

int op_ADD_H()
{
	return ADD(r_H);
}

int op_ADD_L()
{
	retrun ADD(r_L);
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
	return ANA(r_A);
}

int op_ANA_B()
{
	return ANA(r_B);
}

int op_ANA_C()
{
	return ANA(r_C);
}

int op_ANA_D()
{
	return ANA(r_D);
}

int op_ANA_E()
{
	return ANA(r_E);
}

int op_ANA_H()
{
	return ANA(r_H);
}

int op_ANA_L()
{
	return ANA(r_L);
}

int op_ANA_M();
{
	retrun ANA_M();
}

int op_ANI(int8_t data_8)
{
	return ANI(data8);
}

int op_CALL(uint16_t targetAddress)
{
	return CALL(targetAddress);
}

int op_CC(uint16_t targetAddress)
{
	return CC(targetAddress);
}

int op_CM(uint16_t targetAddress)
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
	return CMP(r_A);
}

int op_CMP_B()
{
	return CMP(r_B);
}

int op_CMP_C()
{
	return CMP(r_C);
}

int op_CMP_D()
{
	return CMP(r_D);
}

int op_CMP_E()
{
	return CMP(r_E);
}

int op_CMP_H()
{
	return CMP(r_H);
}

int op_CMP_L()
{
	return CMP(r_L);
}

int op_CMP_M()
{
	return CMP_M();
}

int op_CNC(uint16_t targetAddress)
{
	return CNC(targetAddress);
}

int op_CNZ(uint16_t targetAddress)
{
	return CNZ(targetAddress);
}

int op_CP(uint16_t targetAddress)
{
	return CP(targetAddress);
}

int op_CPE(uint16_t targetAddress)
{
	return CPE(targetAddress);
}

int op_CPI(int8_t data8)
{
	return CPI(data8);
}

int op_CPO(uint16_t targetAddress)
{
	return CPO(targetAddress);
}

int op_CZ(uint16_t targetAddress)
{
	return CZ(targetAddress);
}

int op_DAA()
{
	return DAA();
}

int op_DAD_B()
{
	return DAD(r_BC);
}

int op_DAD_D()
{
	return DAD(r_DE);
}

int op_DAD_H()
{
	return DAD(r_HL);
}

int op_DAD_SP()
{
	return DAD(r_SP);
}

int op_DCR_A()
{
	return DCR(r_A);
}

int op_DCR_B()
{
	return DCR(r_B);
}

int op_DCR_C()
{
	return DCR(r_C);
}

int op_DCR_D()
{
	return DCR(r_D);
}

int op_DCR_E()
{
	retrun DCR(r_E);
}

int op_DCR_H()
{
	retrun DCR(r_H);
}

int op_DCR_L()
{
	return DCR(r_L);
}

int op_DCR_M()
{
	return DCR_M();
}

int op_DCX_B()
{
	return DCX(r_BC);
}

int op_DCX_D()
{
	return DCX(r_DE);
}

int op_DCX_H()
{
	return DCX(r_HL);
}

int op_DCX_SP()
{
	return DCX(r_SP);
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

int op_IN(uint16_t portAddress)
{
	return IN(portAddress);
}

int op_INR_A()
{	
	return INR(r_A);
}

int op_INR_B()
{
	return INR(r_B);
}

int op_INR_C()
{
	return INR(r_C);
}

int op_INR_D()
{
	retrun INR(r_D);
}

int op_INR_E()
{
	return INR(r_E);
}

int op_INR_H()
{
	return INR(r_H);
}

int op_INR_L()
{
	return INR(r_L);
}

int op_INR_M()
{
	return INR_M();
}

int op_INX_B()
{
	return INX(r_BC);
}

int op_INX_D()
{
	return INX(r_DE);
}

int op_INX_H()
{
	return INX(r_HL);
}

int op_INX_SP()
{
	return INX(r_SP);
}

int op_JC(uint16_t targetAddress)
{
	return JC(targetAddress);
}

int op_JM(uint16_t targetAddress)
{
	return JM(targetAddress);
}

int op_JMP(uint16_t targetAddress)
{
	return JMP(targetAddress);
}

int op_JNC(uint16_t targetAddress)
{
	return JNC(targetAddress);
}

int op_JNZ(uint16_t targetAddress)
{
	return JNZ(targetAddress);
}

int op_JP(uint16_t targetAddress)
{
	return JP(targetAddress);
}

int op_JPE(uint16_t targetAddress)
{
	return JPE(targetAddress);
}

int op_JPO(uint16_t targetAddress)
{
	return JPO(targetAddress);
}

int op_JZ(uint16_t targetAddress)
{
	return JZ(targetAddress);
}

int op_LDA(uint16_t sourceAddress)
{
	return LDA(sourceAddress);
}

int op_LDAX_B()
{
	return LDAX(r_BC);
}

int op_LDAX_D()
{
	return LDAX(r_DE);
}

int op_LHLD(uint16_t sourceAddress)
{
	return LHLD(sourceAddress);
}

int op_LXI_B(uint16_t data16)
{
	return LXI(r_BC, data16);
}

int op_LXI_D(uint16_t data16)
{
	return LXI(r_DE, data16);
}

int op_LXI_H(uint16_t data16)
{
	return LXI(r_HL, data16);
}

int op_LXI_SP(uint16_t data16)
{
	return LXI(r_SP, data16);
}

int op_MOV_AA()
{
	return MOV_RR(r_A, r_A);
}

int op_MOV_AB()
{
	return MOV_RR(r_A, r_B);
}

int op_MOV_AC()
{
	return MOV_RR(r_A, r_C);
}

int op_MOV_AD()
{
	retrun MOV_RR(r_A, r_D);
}

int op_MOV_AE()
{
	return MOV_RR(r_A, r_E);
}

int op_MOV_AH()
{
	return MOV_RR(r_A, r_H);
}

int op_MOV_AL()
{
	return MOV_RR(r_A, r_L);
}

int op_MOV_AM()
{
	return MOV_RM(r_A)
}

int op_MOV_BA()
{
	return MOV_RR(r_B, r_A);
}

int op_MOV_BB()
{
	return MOV_RR(r_B, r_B);
}

int op_MOV_BC()
{
	return MOV_RR(r_B, r_C);
}

int op_MOV_BD()
{
	return MOV_RR(r_B, r_D);
}

int op_MOV_BE()
{
	return MOV_RR(r_B, r_E);
}

int op_MOV_BH()
{
	return MOV_RR(r_B, r_H);
}

int op_MOV_BL()
{
	return MOV_RR(r_B, r_L);
}

int op_MOV_BM()
{
	return MOV_RM(r_B);
}

int op_MOV_CA()
{
	return MOV_RR(r_C, r_A);
}

int op_MOV_CB()
{
	return MOV_RR(r_C, r_B);
}

int op_MOV_CC()
{
	return MOV_RR(r_C, r_C);
}

int op_MOV_CD()
{
	return MOV_RR(r_C, r_D);
}

int op_MOV_CE()
{
	return MOV_RR(r_C, r_E);
}

int op_MOV_CH()
{
	return MOV_RR(r_C, r_H);
}

int op_MOV_CL()
{
	return MOV_RR(r_C, r_L);
}

int op_MOV_CM()
{
	return MOV_RM(r_C);
}

int op_MOV_DA()
{
	return MOV_RR(r_D, r_A);
}

int op_MOV_DB()
{
	return MOV_RR(r_D, r_B);
}

int op_MOV_DC()
{
	return MOV_RR(r_D, r_C);
}

int op_MOV_DD()
{
	return MOV_RR(r_D, r_D);
}

int op_MOV_DE()
{
	return MOV_RR(r_D, r_E);
}

int op_MOV_DH()
{
	return MOV_RR(r_D, r_H);
}

int op_MOV_DL()
{
	return MOV_RR(r_D, r_L);
}

int op_MOV_DM()
{
	return MOV_RM(r_D);
}

int op_MOV_EA()
{
	return MOV_RR(r_E, r_A);
}

int op_MOV_EB()
{
	return MOV_RR(r_E, r_B);
}

int op_MOV_EC()
{
	return MOV_RR(r_E, r_C);
}

int op_MOV_ED()
{
	return MOV_RR(r_E, r_D);
}

int op_MOV_EE()
{
	return MOV_RR(r_E, r_E);
}

int op_MOV_EH()
{
	return MOV_RR(r_E, r_H);
}

int op_MOV_EL()
{
	return MOV_RR(r_E, r_L);
}

int op_MOV_EM()
{	
	return MOV_RM(r_E);
}

int op_MOV_HA()
{
	return MOV_RR(r_H, r_A);
}

int op_MOV_HB()
{
	retrun MOV_RR(r_H, r_B);
}

int op_MOV_HC();
int op_MOV_HD();
int op_MOV_HE();
int op_MOV_HH();
int op_MOV_HL();
int op_MOV_HM();
int op_MOV_LA();
int op_MOV_LB();
int op_MOV_LC();
int op_MOV_LD();
int op_MOV_LE();
int op_MOV_LH();
int op_MOV_LL();
int op_MOV_LM();
int op_MOV_MA();
int op_MOV_MB();
int op_MOV_MC();
int op_MOV_MD();
int op_MOV_ME();
int op_MOV_MH();
int op_MOV_ML();
int op_MVI_A();
int op_MVI_B();
int op_MVI_C();
int op_MVI_D();
int op_MVI_E();
int op_MVI_H();
int op_MVI_L();
int op_MVI_M();
int NOP();
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

