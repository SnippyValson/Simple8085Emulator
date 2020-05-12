#include "instructions.h"

/* The opcodes derived from instructions goes here. */

int op_ACI(int8_t data8);
int op_ADC_A();
int op_ADC_B();
int op_ADC_C();
int op_ADC_D();
int op_ADC_E();
int op_ADC_H();
int op_ADC_L();
int op_ADC_M();
int op_ADD_A();
int op_ADD_B();
int op_ADD_C();
int op_ADD_D();
int op_ADD_E();
int op_ADD_H();
int op_ADD_L();
int op_ADD_M();
int op_ADI(int8_t data8);
int op_ANA_A();
int op_ANA_B();
int op_ANA_C();
int op_ANA_D();
int op_ANA_E();
int op_ANA_H();
int op_ANA_L();
int op_ANA_M();
int op_ANI(int8_t data_8);
int op_CALL(uint16_t targetAddress);
int op_CC(uint16_t targetAddress);
int op_CM(uint16_t targetAddress);
int op_CMA();
int op_CMC();
int op_CMP_A();
int op_CMP_B();
int op_CMP_C();
int op_CMP_D();
int op_CMP_E();
int op_CMP_H();
int op_CMP_L();
int op_CMP_M();
int op_CNC(uint16_t targetAddress);
int op_CNZ(uint16_t targetAddress);
int op_CP(uint16_t targetAddress);
int op_CPE(uint16_t targetAddress);
int op_CPI(int8_t data8);
int op_CPO(uint16_t targetAddress);
int op_CZ(uint16_t targetAddress);
int op_DAA();
int op_DAD_B();
int op_DAD_D();
int op_DAD_H();
int op_DAD_SP();
int op_DCR_A();
int op_DCR_B();
int op_DCR_C();
int op_DCR_D();
int op_DCR_E();
int op_DCR_H();
int op_DCR_L();
int op_DCR_M();
int op_DCX_B();
int op_DCX_D();
int op_DCX_H();
int op_DCX_SP();
int op_DI();
int op_EI();
int op_HLT();
int op_IN(uint16_t portAddress);
int op_INR_A();
int op_INR_B();
int op_INR_C();
int op_INR_D();
int op_INR_E();
int op_INR_H();
int op_INR_L();
int op_INR_M();
int op_INX_B();
int op_INX_D();
int op_INX_H();
int op_INX_SP();
int op_JC(uint16_t targetAddress);
int op_JM(uint16_t targetAddress);
int op_JMP(uint16_t targetAddress);
int op_JNC(uint16_t targetAddress);
int op_JNZ(uint16_t targetAddress);
int op_JP(uint16_t targetAddress);
int op_JPE(uint16_t targetAddress);
int op_JPO(uint16_t targetAddress);
int op_JZ(uint16_t targetAddress);
int op_LDA(uint16_t sourceAddress);
int op_LDAX_B();
int op_LDAX_D();
int op_LHLD(uint16_t sourceAddress);
int op_LXI_B(uint16_t data16);
int op_LXI_D(uint16_t data16);
int op_LXI_H(uint16_t data16);
int op_LXI_SP(uint16_t data16);
int op_MOV_AA();
int op_MOV_AB();
int op_MOV_AC();
int op_MOV_AD();
int op_MOV_AE();
int op_MOV_AH();
int op_MOV_AL();
int op_MOV_AM();
int op_MOV_BA();
int op_MOV_BB();
int op_MOV_BC();
int op_MOV_BD();
int op_MOV_BE();
int op_MOV_BH();
int op_MOV_BL();
int op_MOV_BM();
int op_MOV_CA();
int op_MOV_CB();
int op_MOV_CC();
int op_MOV_CD();
int op_MOV_CE();
int op_MOV_CH();
int op_MOV_CL();
int op_MOV_CM();
int op_MOV_DA();
int op_MOV_DB();
int op_MOV_DC();
int op_MOV_DD();
int op_MOV_DE();
int op_MOV_DH();
int op_MOV_DL();
int op_MOV_DM();
int op_MOV_EA();
int op_MOV_EB();
int op_MOV_EC();
int op_MOV_ED();
int op_MOV_EE();
int op_MOV_EH();
int op_MOV_EL();
int op_MOV_EM();
int op_MOV_HA();
int op_MOV_HB();
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
int op_MVI_A(int8_t data8);
int op_MVI_B(int8_t data8);
int op_MVI_C(int8_t data8);
int op_MVI_D(int8_t data8);
int op_MVI_E(int8_t data8);
int op_MVI_H(int8_t data8);
int op_MVI_L(int8_t data8);
int op_MVI_M(int8_t data8);
int op_NOP();
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
