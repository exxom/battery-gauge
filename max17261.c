#include "max17261.h"

uint16_t Read_Device_Name(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=Device_Name_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);

	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data;
	
}

uint16_t Read_CGain(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=CGain_REG ;
	if(HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100)!=HAL_OK){
		return 1401;
	}
	else{
	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data;
	}
}

uint16_t Read_TGain(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=TGain_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);
	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data;
}
uint16_t Read_Hib_Cfg(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=Hib_Cfg_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);
	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data;
}

int16_t Read_Current(void){
	static uint8_t read[2];
	int16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=Current_REG ;
	if(HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100)!=HAL_OK){
		return 1401;
	}
	else{
		HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
		data=(((int16_t)read[1]<<8)|(read[0]));
	
		return data;
	}
	
}

uint16_t Read_VEmpty(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=VEmpty_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);

	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data;
	
}

float Read_VCell(void){
	static uint8_t read[2];
	float data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=VCell_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);

	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return ((data*1.25)/16);
	
}


float Read_BATT_Voltage(void){
	static uint8_t read[2];
	float data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=VCell_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);

	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return ((data*1.25)/8);
	
}

uint16_t Read_CFG(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=Config_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);

	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data;
	
}

uint16_t Read_CFG2(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=Config2_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);

	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data;
	
}

uint16_t Read_Design_Cap(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=Design_Cap_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);

	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data/2;
	
}

uint16_t Read_Full_Cap(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=Full_Cap_Rep_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);

	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	return data;
	
}

uint16_t Read_Rep_Cap(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=Rep_Cap_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);

	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data/2;
	
}

uint16_t Read_Rep_SOC(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=Rep_SOC_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);

	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	return data;
	
}

uint16_t Read_Status(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=Status_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);
	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data;
}

uint16_t Read_Model_CFG(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=Model_CFG_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);
	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data;
}
uint16_t Read_AtAv_SOC(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=AtAv_SOC_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);
	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data;
}

uint16_t Read_VAlrt_Th(void){
	static uint8_t read[2];
	uint16_t data; 
	uint8_t Reg;
	
	HAL_Delay(5);
	
	Reg=VAlrt_Th_REG ;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,&Reg,1,100);
	HAL_I2C_Master_Receive(&hi2c1,max17261_Radd,read,2,100);
	data=(((uint16_t)read[1]<<8)|(read[0]));
	
	return data;
}

void Design_Cap(uint16_t Value){
	uint8_t write[3];
	
	
	write[0]=Design_Cap_REG;
	write[1]=(Value*2);
	write[2]=(Value*2)>>8;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,write,3,100);
}

void Set_IChg_Term(void){
	uint8_t write[3];
	
	write[0]=IChg_Term_REG;
	write[1]=0x40;
	write[2]=0x06;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,write,3,100);
}

void Set_VEmpty(void){
	uint8_t write[3];
	
	write[0]=VEmpty_REG;
	write[1]=0x61;
	write[2]=0xA5;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,write,3,100);

}
	
void Set_Model_CFG(void){
	uint16_t state;
	uint8_t  write[3];
	
	HAL_Delay(5);
	
	state=Read_Model_CFG();
	state&=~((1<<13)|(1<<7)|(1<<4));
	state|=((1<<15)|(1<<10)|(1<<6)|(1<<5));
	
	write[0]=Model_CFG_REG;
	write[1]=state;
	write[2]=state>>8;
	
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,write,3,100);
}



void Exit_Hib_Mode(void){
	uint8_t  write[3];
	
	write[0]=Soft_Wk_Up;
	write[1]=0x90;
	write[2]=0x00;
	if(HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,write,3,100)!=HAL_OK)
		while(1);
	
	HAL_Delay(5);
	
	write[0]=Hib_Cfg_REG;
	write[1]=0x00;
	write[2]=0x00;
	if(HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,write,3,100)!=HAL_OK)
		while(1);
	
	HAL_Delay(5);
	
	write[0]=Soft_Wk_Up;
	write[1]=0x00;
	write[2]=0x00;
	if(HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,write,3,100)!=HAL_OK)
		while(1);
}

void Set_Hib_Cfg(uint16_t Value){
	uint8_t  write[3];
	
	write[0]=Hib_Cfg_REG;
	write[1]=Value;
	write[2]=Value>>8;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,write,3,100);
}

void Set_Status(uint16_t Value){
	uint8_t  write[3];
	
	write[0]=Status_REG;
	write[1]=Value;
	write[2]=Value>>8;
	HAL_I2C_Master_Transmit(&hi2c1,max17261_Wadd,write,3,100);
}