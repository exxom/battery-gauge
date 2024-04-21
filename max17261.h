#ifndef __MAX17261_H__
#define __MAX17261_H__


#include "stm32f1xx_hal.h"
#include "main.h"
#include "i2c.h"

#define max17261_Wadd                 0x6C
#define max17261_Radd                 0x6D
#define Soft_Wk_Up                 		0x60
#define Status_REG         				    0x00
#define VAlrt_Th_REG         				  0x01
#define TAlrt_Th_REG         				  0x02
#define SAlrt_Th_REG         				  0x03
#define AT_Rate_REG         					0x04
#define Rep_Cap_REG         					0x05
#define Rep_SOC_REG         					0x06
#define Age_REG         					    0x07
#define Temp_REG         					    0x08
#define VCell_REG         					  0x09
#define Current_REG         					0x0A
#define Avg_Current_REG         			0x0B
#define QResidual_REG         				0x0C
#define Mix_SOC_REG         					0x0D
#define Av_SOC_REG         						0x0E
#define Mix_Cap_REG         					0x0F
#define Full_Cap_Rep_REG         			0x10
#define TTE_REG         							0x11
#define QRTable_00_REG         				0x12
#define Full_SOC_Thr_REG         			0x13
#define RCell_REG         						0x14
#define Avg_TA_REG         						0x16
#define Cycle_REG         						0x17
#define Design_Cap_REG         				0x18
#define AvgV_Cell_REG         				0x19
#define Max_Min_Temp_REG         			0x1A
#define Max_Min_Volt_REG         			0x1B
#define Max_Min_Crr_REG         			0x1C
#define Config_REG         						0x1D
#define IChg_Term_REG         				0x1E
#define AV_Cap_REG         						0x1F
#define Device_Name_REG         			0x21
#define CGain_REG         			 			0x2E
#define VEmpty_REG         			  		0x3A
#define TGain_REG         			  		0x3D
#define Hib_Cfg_REG         					0xBA
#define Config2_REG         					0xBB
#define Model_CFG_REG         			 	0xDB
#define AtAv_SOC_REG         					0xDE


uint16_t Read_Device_Name(void);
uint16_t Read_Status(void);
uint16_t Read_VAlrt_Th(void);
uint16_t Read_Design_Cap(void);
uint16_t Read_Rep_Cap(void);
uint16_t Read_Rep_SOC(void);
uint16_t Read_AtAv_SOC(void);
uint16_t Read_Full_Cap(void);
uint16_t Read_Model_CFG(void);
uint16_t Read_Model_CFG(void);
uint16_t Read_CFG(void);
uint16_t Read_CFG2(void);
float    Read_VCell(void);
float    Read_BATT_Voltage(void);
uint16_t Read_VEmpty(void);
int16_t  Read_Current(void);
uint16_t Read_CGain(void);
uint16_t Read_TGain(void);
uint16_t Read_Hib_Cfg(void);


void Design_Cap(uint16_t Value);
void Set_Model_CFG(void);
void Exit_Hib_Mode(void);
void Set_Hib_Cfg(uint16_t Value);
void Set_IChg_Term(void);
void Set_VEmpty(void);
void Set_Status(uint16_t Value);
#endif