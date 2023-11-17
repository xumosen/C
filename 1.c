/***********************************************************************//**/
/***********************************************************************//**/
/***********************************************************************//**/
/***********************************************************************//**/
/***********************************************************************/
#include <stdio.h>
#include <time.h>
#include <unistd.h>




#define u8			unsigned char 
#define uint8_t		unsigned char 
#define uint16_t	unsigned int 
#define uint32_t	unsigned long
#define uint64_t	unsigned long long int

uint8_t	data = 11;

#define	OPO 1

// 递归 
int recur(int n) {
    // 终止条件
    if (n == 1)
        return 1;
    // 递：递归调用
    int res = recur(n - 1);
    // 归：返回结果
    return n + res;
}

// 使用迭代模拟递归 
int forLoopRecur(int n) {
	int count = 0;
    int stack[1000]; // 借助一个大数组来模拟栈
    int top = -1;    // 栈顶索引
    int res = 0;
    // 递：递归调用
    for (int i = n; i > 0; i--) {
        // 通过“入栈操作”模拟“递”
		count = 1 + top++;
        stack[count] = i;
		printf("stack[%d]:%d\n", i, stack[count]);
    }  
    // 归：返回结果
    while (top >= 0) {
        // 通过“出栈操作”模拟“归”
        res += stack[top--];
    }
    // res = 1+2+3+...+n
    return res;
}

int main(void)
{

	printf("123");


	if (OPO) {

		for ( ; ; ) {
			usleep(1000*1000);
			printf("123");
		}


	}

}







/************************************************************************
//实践检验理论 理论源于实践
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

#define u8			unsigned char 
#define uint8_t		unsigned char 
#define uint16_t	unsigned int 
#define uint32_t	unsigned long
#define uint64_t	unsigned long long int

uint8_t	data0[5] = {0};
uint8_t	data1[50] = {0};
uint8_t	data2[5] = {0};
uint8_t	data3[5] = {0};
uint8_t	data4[5] = {0};

uint8_t	length0	= 0;
uint8_t	length1 = 29;
uint8_t	cnt = 0;
uint8_t	f1	= 0;
uint8_t	BUFF_data[100] = {'9',',','x','u','y','u','n','t','o','n','g','.','n','a','t','a','p','p','1','.','c','c',',','1',',','9','9'};

uint8_t 	Time_buff[10] = {0x36,0x30,0x34,0x32,0x34,0x31,0x38,0x00,0x00};
uint8_t		LENGTH = 0;
uint32_t	Test_Value = 0;
uint32_t	Time_T1 = 0XFFFFFFFF;

uint32_t 	ChuLi_GetHeart_Time(uint8_t *data);
uint32_t 	POW_1(uint8_t num1, uint8_t num2);
uint8_t		add = 0;

uint8_t		Test1(void);
uint8_t		Result = 0;

uint8_t		zifu1 = 0;

//33 33 36 43 33 35 36 36 33 33 34 44 33 33 35 32 34 31 35 33 33 34 33 37 37 35 36 39 33 34 36 31
uint8_t		SHUZU[255] = {
						// 0X30, 0X00, 0X00, 0X00,
						0X33, 0X31, 0X33, 0X32, 0X33, 0X33, 0X33, 0X34, 0X33, 0X35,
						0X33, 0X36, 0X33, 0X37, 0X33, 0X38, 0X33, 0X39, 0X33, 0X30,
						0X34, 0X31, 0X34, 0X32, 0X34, 0X33, 0X34, 0X34, 0X34, 0X35, 
						0X34, 0X36, 0X34, 0X37, 0X35, 0X38, 0X35, 0X39, 0X35, 0X41,
						0X36, 0X31, 0X36, 0X32, 0X36, 0X33, 0X36, 0X34, 0X36, 0X35, 
						0X36, 0X36, 0X36, 0X37, 0X37, 0X38, 0X37, 0X39, 0X37, 0X41,					
						0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00, 0X00,};


uint8_t		CHULI_SHUZU[255] = {0};
uint8_t		CHULI_SHUZU2[255] = {0};
uint8_t		shuzulen = 0;

void CHULI_FUNCTION1(uint8_t *buff);
uint8_t		t = 8;

uint16_t	result5 = 100;
//CCLK:23/10/12,06:11:27+32
//CCLK:23/10/11,07:07:31+32
//CCLK:23/10/12,05:43:29+32
//CCLK:23/10/12,06:11:27+32
//													Y			M			D			H			M			S
uint8_t		Buff_time[100] = {'C','C','L','K',':','2','3','/','1','0','/','1','2',',','0','9',':','0','0',':','2','7','-','0','8'};
uint8_t		Jisuan_time[10] = {0};

uint8_t 	Time_int_rtc(uint8_t timdata);
uint8_t		Time_SHIQU2;

uint8_t Time_rtc_int1(uint8_t timdata);
uint8_t Time_rtc_int2(uint8_t timdata);
uint8_t		test_data1 = 0;
uint8_t		test_data2 = 0;
uint8_t		test_data3 = 0;

uint8_t Time_int_rtc1(uint8_t timdata); 
uint8_t Time_int_rtc2(uint8_t timdata); 
//867860066527275
uint8_t		sn_buf1[20] = {'z','z','z','z','z','z','z','z','z','z','z','z','z','z','z'};

uint8_t		sn_buf2[20] = {'9','9','9','9','9','9','9','9','9','9','9','9','9','9','9','9','9','9','9','y'};
uint16_t	SN_value = 0;

uint16_t	ADDR_VALUE1 = 0X3563;
uint16_t	ADDR_VALUE2 = 0X01;
uint16_t	ADDR_VALUE3 = 0X63;

void BiaoDing_Function(uint16_t	data);

float PPM_LEL_Function(uint16_t data);
uint16_t BD_value1 = 27528;
uint16_t BD_value2 = 1787;
float K, b;
unsigned char calculateLineEquation(float x1, float y1, float x2, float y2);
uint16_t	ppm_result = 0;

uint16_t	num_eeprom = 20;

// void EEPROM_WRITE_ADDR(uint8_t num, uint16_t addr);
float shuju_data0 = 0;

uint8_t opo = 0;
static uint8_t teshu[10] = {1,1,1,1,1,1,1,1,1};


int main ()
{

	// printf("%x", 0x01&(~0x01));
	// opo = printf("%.20f", 0.123600005);
	// printf(" %d", opo);

	
	// for (uint8_t i = 0; i < 15; i++) {
	// 	SN_value += (sn_buf1[i]-0x30);
	// 	printf("%d\n",SN_value);
	// }

	// // for (uint8_t i = 0; i < 20; i++) {
	// // 	SN_value += (sn_buf2[i]-0x30);
	// // 	printf("%d\n",SN_value);
	// // }

	// while(opo) {
	// 	opo--;
	// 	printf("opo:%d \n", opo);	
	// }
	// printf("over!!!");

	// printf("%aaa\n",1);
	// shuju_data0 = PPM_LEL_Function(3453);

	// printf("%.1f\n", shuju_data0);

	// printf("%x\n", (2046>>7)&0x0e);
	// printf("%x\n", 2046&0x00ff);

	// printf("\n");

	// printf("%x\n", (((2046>>8)&0x07)<<1));
	// printf("%x\n", 2046&0x00ff);

// 
	// EEPROM_WRITE_ADDR(1, num_eeprom);

 	// printf("%X\n", ADDR_VALUE2 << 8 | ADDR_VALUE3);
	// printf("%d\n", ADDR_VALUE2 << 8 | ADDR_VALUE3);

	// calculateLineEquation(600,0,3000,3000);
	// calculateLineEquation(3431,3300,3840,9400);

	// BiaoDing_Function(2796);
	// ppm_result =((1.03558606e-02)*pow(3544,2)) + (-6.16849257e+01)*3544 + 9.40229004e+04;
 	// printf("PPM:%d", ppm_result);

	// printf("BD_value1:%d\n", BD_value1);
	// printf("BD_value2:%d\n", BD_value2);

	// printf("LEL:%d", PPM_LEL_Function(2600));

	// printf("%d\n", strlen(sn_buf));

	// for (uint8_t i = 0; i < 15; i++) {
	// 	SN_value += sn_buf[i];
	// }
	// printf("%2x", SN_value);	

	// test_data3 = 0;
	// for (uint16_t i = 0; i < 255; i++){
	// 	test_data1 = Time_int_rtc1(test_data3);
	// 	test_data2 = Time_int_rtc2(test_data3);
	// 	test_data3 = test_data3 + 0x01;
	// 	if (test_data1 == test_data2) {


	// 	} else {
	// 		printf("\n\n");
	// 		printf("%02x \n", i);
	// 		printf("%02x \n", test_data1);
	// 		printf("%02x ", test_data2);
	// 		printf("\n\n");
	// 	}
	// }


	// test_data1 = Time_int_rtc1(0x23);
	// test_data2 = Time_int_rtc2(0x23);

	// printf("\n%02x \n", test_data1);
	// printf("%02x ", test_data2);

	// printf("%2x",(0xaa+0x00+0x00+0x00)%256);

	// Jisuan_time[0] = (((Buff_time[5] - 0x30) << 4) + Buff_time[6] - 0x30);
	// Jisuan_time[1] = (((Buff_time[8] - 0x30) << 4) + Buff_time[9] - 0x30);
	// Jisuan_time[2] = (((Buff_time[11] - 0x30) << 4) + Buff_time[12] - 0x30);

	// Time_SHIQU2 = ((((Buff_time[23] - 0x30) * 10) + (Buff_time[24] - 0x30))*15)/60;
	
	// if (Buff_time[22] == 0x2b) {
	// 	Jisuan_time[3] = (((Buff_time[14] - 0x30) * 10) + Buff_time[15] - 0x30) + Time_SHIQU2;

	// } else if (Buff_time[22] == 0x2d) {
	// 	Jisuan_time[3] = (((Buff_time[14] - 0x30) * 10) + Buff_time[15] - 0x30) - Time_SHIQU2;

	// }
	// printf("0: %02x\n", Jisuan_time[3]);
	// Jisuan_time[3] = Time_int_rtc(Jisuan_time[3]);
	// Jisuan_time[4] = (((Buff_time[17] - 0x30) << 4) + Buff_time[18] - 0x30);
	// Jisuan_time[5] = (((Buff_time[20] - 0x30) << 4) + Buff_time[21] - 0x30);		

	// printf("1: %02x\n", Time_SHIQU2);
	// printf("2: %02x\n", (((Buff_time[14] - 0x30) << 4) + Buff_time[15] - 0x30));
	// printf("3: %02x\n", Time_int_rtc(0x15));

	// for (uint8_t i = 0; i < 6; i++) {
	// 	printf("%02x ", Jisuan_time[i]);
	// } 



	// printf("**%x**", t);
	// shuzulen = strlen(SHUZU);
	// printf("len:%d\n", shuzulen);
	// // Result = Test1();
	// // printf("%d\n", Result);

	// Test_Value = ChuLi_GetHeart_Time(Time_buff);
	// // Test_Value = POW_1(2, 2);
	// printf("%d\n",Test_Value);

	// CHULI_FUNCTION1(SHUZU);
	// printf("%d \n", strlen(CHULI_SHUZU));
	// for (uint8_t j = 0; j < strlen(CHULI_SHUZU); j++) {
	// 	printf("%X ", CHULI_SHUZU[j]);
	// }


	// for ( ; ; ) {
	// 	add++;
	// 	usleep(1000*1000);
	// 	Test_Value = POW_1(10, add);
	// 	printf("%d\n",Test_Value);
	// }

}




float PPM_LEL_Function(uint16_t data)
{
	float LEL_result = 0;
	float PPM_result = 0;

	if (data >= 100 && data <= 3000) {
		
		if ((data * 5) / 4 > 750) {
			PPM_result = ((data * 5 ) / 4) - 750;
		} else {
			PPM_result = 0;							//PPM
		}

	}

	if (data > 3000) {
		PPM_result = (data * 11.5) - BD_value1;		//PPM
		
		if (PPM_result < 3000) {
			PPM_result = 3000;
		}
	}

	LEL_result = PPM_result/500;

	return LEL_result;
}




int qiu_data = 0;
void BiaoDing_Function(uint16_t	data)
{
	uint16_t	data2 = 0;
	data = (data * 5000) / 4095;	
	data2 = BD_value1 - (((data*71)/7) - 4000);
	printf("\ndata2:%d\n", data2);	
}



unsigned char calculateLineEquation(float x1, float y1, float x2, float y2)
{
	
	if ((x1 != 0 && y1 != 0) || (x2 != 0 && y2 != 0) 
		
		|| (x1 != 0 || y1 != 0) && (x2 != 0 || y2 != 0) ) {
		
		K = (y2 - y1) / (x2 - x1);
		b = y1 - K * x1;
		
		// K = -4.41;
		// b = 5.33;
		printf("The equation of the line is: y = %.2fx + %.2f\n", K, b);
		return 1;
		
	} else {	
	
		printf("11\n");
		return 0;
		
	}
	
}


uint8_t Time_rtc_int1(uint8_t timdata) 
{
    if (timdata >= 0x10 && timdata <= 0x99) {
        timdata -= 6 * (timdata / 16); // 使用整数除法，消除重复的模式
    }
    return timdata;
}

uint8_t	Time_rtc_int2(uint8_t timdata)
{

	if (timdata >= 0x10 && timdata <= 0x19) {
		timdata = timdata - 0x06;			
	} else if (timdata >= 0x20 && timdata <= 0x29) {
		timdata = timdata - 0x0c;			
	} else if (timdata >= 0x30 && timdata <= 0x39) {
		timdata = timdata - 0x12;			
	} else if (timdata >= 0x40 && timdata <= 0x49) {
		timdata = timdata - 0x18;			
	} else if (timdata >= 0x50 && timdata <= 0x59) {
		timdata = timdata - 0x1E;			
	} else if (timdata >= 0x60 && timdata <= 0x69) {
		timdata = timdata - 0x24;			
	} else if (timdata >= 0x70 && timdata <= 0x79) {
		timdata = timdata - 0x2a;			
	} else if (timdata >= 0x80 && timdata <= 0x89) {
		timdata = timdata - 0x30;			
	} else if (timdata >= 0x90 && timdata <= 0x99) {
		timdata = timdata - 0x36;			
	}
	
	return timdata;			
}


uint8_t Time_int_rtc1(uint8_t timdata) 
{
    // if (timdata >= 0x0A && timdata <= 0x63) {
    //     timdata += (timdata / 16) * 0x06;
    // }
    // return timdata;

	    // 计算修正值
    uint8_t correction = 0;
    if (timdata > 0x09 && timdata <= 0x63) {
        correction = (timdata / 16) * 0x06;
    }

    // 应用修正值
    if (correction > 0) {
        timdata += correction;
    }

    return timdata;
}

uint8_t Time_int_rtc2(uint8_t timdata)
{
	if (timdata > 0x09 && timdata <= 0x13) {
		timdata = timdata + 0x06;			
	} else if (timdata > 0x13 && timdata <= 0x1d) {
		timdata = timdata + 0x0c;			
	} else if (timdata > 0x1d && timdata <= 0x27) {
		timdata = timdata + 0x12;			
	} else if (timdata > 0x27 && timdata <= 0x31) {
		timdata = timdata + 0x18;			
	} else if (timdata > 0x31 && timdata <= 0x3B) {
		timdata = timdata + 0x1E;			
	} else if (timdata > 0x3B && timdata <= 0x45) {
		timdata = timdata + 0x24;			
	} else if (timdata > 0x45 && timdata <= 0x4F) {
		timdata = timdata + 0x2A;			
	} else if (timdata > 0x4F && timdata <= 0x59) {
		timdata = timdata + 0x30;			
	} else if (timdata > 0x59 && timdata <= 0x63) {
		timdata = timdata + 0x36;			
	}
	return timdata;
}

void CHULI_FUNCTION1(uint8_t *buff)
{
	uint8_t	data = 0;
	uint8_t	p = 0;
	uint8_t	m = 0;
	uint8_t	n = 0;
	memset(CHULI_SHUZU, 0, 255);

	for (uint8_t i = 0; i < strlen(buff); i = i + 2) {

		if ((buff[i] >= 0x30) && (buff[i] <= 0x39)) {
			m = 0x30;
		} else if ((buff[i] >= 0x41) && (buff[i] <= 0x5A)) {
			m = 0x37;
		}

		if ((buff[i+1] >= 0x30) && (buff[i+1] <= 0x39)) {
			n = 0x30;
		} else if ((buff[i+1] >= 0x41) && (buff[i+1] <= 0x5A)) {
			n = 0x37;
		}
		CHULI_SHUZU[p] = ((buff[i]-m)<<4) + (buff[i+1] - n);
		p++;
	}	

}	


void CHULI_FUNCTION2(uint8_t *buff2)
{
	uint8_t	data = 0;
	uint8_t	p = 0;
	uint8_t	m = 0;
	uint8_t	n = 0;
	memset(CHULI_SHUZU2, 0, 255);

	for (uint8_t i = 0; i < strlen(buff2); i = i + 2) {

		if ((buff2[i] >= 0x30) && (buff2[i] <= 0x39)) {
			m = 0x30;
		} else if ((buff2[i] >= 0x41) && (buff2[i] <= 0x5A)) {
			m = 0x37;
		}

		if ((buff2[i+1] >= 0x30) && (buff2[i+1] <= 0x39)) {
			n = 0x30;
		} else if ((buff2[i+1] >= 0x41) && (buff2[i+1] <= 0x5A)) {
			n = 0x37;
		}
		CHULI_SHUZU[p] = ((buff2[i]-m)<<4) + (buff2[i+1] - n);
		p++;
	}	

}	


uint8_t	Test1(void)
{
	uint8_t i = 0;
	while(1) {
		i++;
		if (i == 10) {
			return 0xfe;
		}
	}
	return 0x01;
}

uint32_t POW_1(uint8_t num1, uint8_t num2)
{
	uint32_t sum = 0;
	if (num2 == 0) {
		sum = num1*1;
	} else if (num2 == 1) {
		sum = sum + num1;
	} else if (num2 > 1) {
		sum = 1;
		for (uint8_t i = 0; i < num2; i++) {
			sum = sum*num1;
		}
	}
	return sum;
}

uint32_t ChuLi_GetHeart_Time(uint8_t *data)
{
	uint8_t	buff_length = 0;
	uint8_t	buff_length2 = 0;
	uint32_t time_value = 0;

	buff_length = strlen(data);
	buff_length2 = buff_length;

	for (uint8_t i = 0; i < buff_length2; i++) {	
		buff_length--;
		time_value = time_value + (Time_buff[i]-0x30)*pow(10, buff_length);
	}

	return time_value;
}

void TiQu_data(void)
{
		if (length0 != length1) {

			if (BUFF_data[length0] != 0x2c) {

				if (f1 == 0) {
					data0[cnt] = BUFF_data[length0];
				}

				if (f1 == 1) {
					data1[cnt] = BUFF_data[length0];
				}

				if (f1 == 2) {
					data2[cnt] = BUFF_data[length0];
				}

				if (f1 == 3) {
					data3[cnt] = BUFF_data[length0];
				}
				cnt++;
			}

			if (BUFF_data[length0] == 0x2c) {
				cnt = 0;
				f1++;
			}

			length0++;
		}
		usleep(1000*1000);
		printf("\n");
		printf("%d\n", length0);
		printf("%s\n", data0);
		printf("%s\n", data1);
		printf("%s\n", data2);
		printf("%s\n", data3);
}
/***********************************************************************

#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define u8  unsigned char 

#define uint8_t  unsigned char 
#define uint16_t  unsigned int 

float K, b;
	
unsigned char calculateLineEquation(float x1, float y1, float x2, float y2);
uint16_t modbus_calc_crc(const uint8_t *p, uint16_t n);
unsigned char step1 = 1;

char gdg[16]="ssssi123123132";

// unsigned int _crc16_table[];
unsigned int ymodem_calc_crc16(const unsigned char *p, int n);

unsigned char ceshi[50]={0xEA,0x02,0x31,0X32, 0X30,0X50,0X00,0X00,0X00,0X00};

unsigned int crc_result = 0;
unsigned int add2 = 0; 

unsigned char testdata = 0x20;
unsigned char testdata2;


unsigned int  testdata3 = 0x00224400;
unsigned char testdata4 = 0x55;
unsigned char testdata5 = 0x66;

float LEL_Value = 0;
unsigned char testdata6 = 0;

float concentration = 50; 

// unsigned char value; 
// value = 0x28 + (concentration / 1) * 0x0A;
// uint8_t value = (unsigned char)(0x28 + 50 * ((0xCA - 0x28) / 100.0));

unsigned char value = 0x28 + 33;

float jisuan_count (float data)
{
	float result = 0;	
	result = (K * data) + b;	
	return result;
}


float	adds = -5.11;
long b_value = 533;
float vol = 257.5;
unsigned char shuju1 = 0x34;
unsigned char shuju2 = 0x21;
unsigned char shuju3 = 0;

int shuju4 = 120;
float shuju5 = 1.35;

uint8_t tx_buff[50] = {0x01,0x03,0x00,0x00,0x00,0x04};
uint16_t crc = 0;

uint8_t a55 = 0x44;

uint8_t a66 = 0x90;

uint16_t result6 = 0; 
uint8_t addr = 1;
char charbuff[100]={0x31};

int main (void)
{
	
	for (uint8_t i = 0; i < 100; i++) {
		charbuff[i] = '1';
	}	
	charbuff[0] = 'c';	
	charbuff[1] = 'c';	
	charbuff[2] = 'c';	
	charbuff[3] = 'c';	
	charbuff[4] = 'c';
	for (uint8_t i = 0; i < 100; i++) {
		printf("%c ", charbuff[i]);
	}	
	printf("\n%s\n", charbuff);
	printf("0x%02x", addr << 2);	
	
//	crc = modbus_calc_crc(tx_buff, 6);
//	printf("%x\n",crc);
	// printf("shuju4:%lf\n",(float)5/2);
	
	// printf("adds:%lf\n",adds);
	// shuju3 = vol;
	// printf("shuju3:%d\n",shuju3);
	
	// printf(":%s\n",gdg);
	
	// printf("%x\n",b_value);
	
	
	// shuju1 = (b_value & 0xff00) >> 8;
	// shuju2 = b_value & 0x00ff;
	
	// printf("%x\n", shuju1);
	// printf("%x\n", shuju2);
	// shuju5 = (shuju1 << 8) | shuju2;
	// printf("%d\n", (int)(shuju5*100) );
	
	// vol = ((float)533 / 100) - 5.00;
	// printf("%lf",vol);
	
	
	
	// if (calculateLineEquation(1.242, 0, 0.638, 2.4)) {
		
		// printf("%.2f\n" , jisuan_count(0.341));
		
	// } else {
		// printf("er\n");	
		
	// }
	
	
	// printf("%x\n", ((unsigned char)(((float)0xa2/(float)0x64) * 100)) + 0x28);
	
	// printf("%x\n", 0x4f + 0x28);
	// printf("%02x\n", (unsigned char)( 0x28 + 50 * ((0xCA - 0x28) / 100.0)));
	
	
	// int e = 0;
	// printf("xudada!");	
	
	// crc_result = ymodem_calc_crc16(ceshi,9);
	// printf("0x%04x \n", crc_result);
	// ceshi[10] = (crc_result & 0xFF00) >> 8;
	// ceshi[11] =  crc_result & 0x00FF;

	// printf("%s", ceshi);
	
	// for (int i = 0; i<12; i++) {
		
		// printf(" %x ", ceshi[i]);
		
	// }
	// testdata2 = testdata|0X01;
	
	// printf("%02x",testdata2);
	
	// printf("0x%x\n", testdata3);
	// printf("0x%d\n", sizeof(testdata3));
	// printf("0x%x\n", (testdata3 & 0x00ff0000)  >> 16);
	// printf("0x%x\n", (testdata3 & 0x0000ff00)  >> 8 );
	
	
	// printf("0x%x\n", testdata4  << 16 | testdata5 << 8);
	
	
	// printf("0x%x\n", ((0xa2/100)*50)+0x28);

	// int num = 9710;
    // float result = -(float)num / 10000;
 
    // printf("%.4f\n", result);  // ���1.1060
    
	
	// LEL_Value = (4.477-(3.634*result))*20;
	// printf("%.4f\n", LEL_Value);  // ���1.1060
	
	// LEL_Value = 4.949 - (3.791*result) - (2.169*result*result) + (1.666*result*result*result);
	// printf("%.4f\n", LEL_Value);  // ���1.1060
	
    return 0;
	
	// printf(" %d ",add2);
	
	// add2 = 2+(add2++);
	// printf(" %d ",add2);


						
	for( ; ; )
	{
	
		testdata6++;
		// printf("testdata6: %d\n",testdata6);
		
		// printf("value:%x\n", ((testdata6/1)*0x0a)+0x28);
		usleep(1000*1000);
		
		printf("0x%x\n", ((0xa2/0x64)*0x64)+0x28);
		
		if (testdata6 >= 100) {
			testdata6 = 100;
			
		}
		// printf("test");
		// printf("%s",gdg);
		// printf("%d",sizeof(gdg));
		// printf("%d",strlen(gdg));
		// do {
			// printf(" %d \n",e);
			// usleep(1000000);
				// e++;
		// } while (e < 10);
			// e = 0;
			
	}

	return 0;
}



unsigned char calculateLineEquation(float x1, float y1, float x2, float y2)
{
	
	if ((x1 != 0 && y1 != 0) || (x2 != 0 && y2 != 0) 
		
		|| (x1 != 0 || y1 != 0) && (x2 != 0 || y2 != 0) ) {
		
		K = (y2 - y1) / (x2 - x1);
		b = y1 - K * x1;
		
		// K = -4.41;
		// b = 5.33;
		printf("The equation of the line is: y = %.2fx + %.2f\n", K, b);
		return 1;
		
	} else {	
	
		printf("11\n");
		return 0;
		
	}
	
}


// unsigned int _crc16_table[] = {
	// 0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50A5, 0x60C6, 0x70E7,
	// 0x8108, 0x9129, 0xA14A, 0xB16B, 0xC18C, 0xD1AD, 0xE1CE, 0xF1EF,
	// 0x1231, 0x0210, 0x3273, 0x2252, 0x52B5, 0x4294, 0x72F7, 0x62D6,
	// 0x9339, 0x8318, 0xB37B, 0xA35A, 0xD3BD, 0xC39C, 0xF3FF, 0xE3DE,
	// 0x2462, 0x3443, 0x0420, 0x1401, 0x64E6, 0x74C7, 0x44A4, 0x5485,
	// 0xA56A, 0xB54B, 0x8528, 0x9509, 0xE5EE, 0xF5CF, 0xC5AC, 0xD58D,
	// 0x3653, 0x2672, 0x1611, 0x0630, 0x76D7, 0x66F6, 0x5695, 0x46B4,
	// 0xB75B, 0xA77A, 0x9719, 0x8738, 0xF7DF, 0xE7FE, 0xD79D, 0xC7BC,
	// 0x48C4, 0x58E5, 0x6886, 0x78A7, 0x0840, 0x1861, 0x2802, 0x3823,
	// 0xC9CC, 0xD9ED, 0xE98E, 0xF9AF, 0x8948, 0x9969, 0xA90A, 0xB92B,
	// 0x5AF5, 0x4AD4, 0x7AB7, 0x6A96, 0x1A71, 0x0A50, 0x3A33, 0x2A12,
	// 0xDBFD, 0xCBDC, 0xFBBF, 0xEB9E, 0x9B79, 0x8B58, 0xBB3B, 0xAB1A,
	// 0x6CA6, 0x7C87, 0x4CE4, 0x5CC5, 0x2C22, 0x3C03, 0x0C60, 0x1C41,
	// 0xEDAE, 0xFD8F, 0xCDEC, 0xDDCD, 0xAD2A, 0xBD0B, 0x8D68, 0x9D49,
	// 0x7E97, 0x6EB6, 0x5ED5, 0x4EF4, 0x3E13, 0x2E32, 0x1E51, 0x0E70,
	// 0xFF9F, 0xEFBE, 0xDFDD, 0xCFFC, 0xBF1B, 0xAF3A, 0x9F59, 0x8F78,
	// 0x9188, 0x81A9, 0xB1CA, 0xA1EB, 0xD10C, 0xC12D, 0xF14E, 0xE16F,
	// 0x1080, 0x00A1, 0x30C2, 0x20E3, 0x5004, 0x4025, 0x7046, 0x6067,
	// 0x83B9, 0x9398, 0xA3FB, 0xB3DA, 0xC33D, 0xD31C, 0xE37F, 0xF35E,
	// 0x02B1, 0x1290, 0x22F3, 0x32D2, 0x4235, 0x5214, 0x6277, 0x7256,
	// 0xB5EA, 0xA5CB, 0x95A8, 0x8589, 0xF56E, 0xE54F, 0xD52C, 0xC50D,
	// 0x34E2, 0x24C3, 0x14A0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405,
	// 0xA7DB, 0xB7FA, 0x8799, 0x97B8, 0xE75F, 0xF77E, 0xC71D, 0xD73C,
	// 0x26D3, 0x36F2, 0x0691, 0x16B0, 0x6657, 0x7676, 0x4615, 0x5634,
	// 0xD94C, 0xC96D, 0xF90E, 0xE92F, 0x99C8, 0x89E9, 0xB98A, 0xA9AB,
	// 0x5844, 0x4865, 0x7806, 0x6827, 0x18C0, 0x08E1, 0x3882, 0x28A3,
	// 0xCB7D, 0xDB5C, 0xEB3F, 0xFB1E, 0x8BF9, 0x9BD8, 0xABBB, 0xBB9A,
	// 0x4A75, 0x5A54, 0x6A37, 0x7A16, 0x0AF1, 0x1AD0, 0x2AB3, 0x3A92,
	// 0xFD2E, 0xED0F, 0xDD6C, 0xCD4D, 0xBDAA, 0xAD8B, 0x9DE8, 0x8DC9,
	// 0x7C26, 0x6C07, 0x5C64, 0x4C45, 0x3CA2, 0x2C83, 0x1CE0, 0x0CC1,
	// 0xEF1F, 0xFF3E, 0xCF5D, 0xDF7C, 0xAF9B, 0xBFBA, 0x8FD9, 0x9FF8,
	// 0x6E17, 0x7E36, 0x4E55, 0x5E74,
	// 0x2E93, 0x3EB2, 0x0ED1, 0x1EF0,
// };

// unsigned int ymodem_calc_crc16(const unsigned char *p, int n)
// {
	// unsigned int crc = 0x0000;
	// for (int i = 0; i < n; ++i) {
		// crc = ((crc << 8) ^ _crc16_table[((crc >> 8) ^ (0xff & p[i+1]))]) & 0xFFFF;
	// }

	// return crc;
// }


static const uint8_t _crc_hi[] = {
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81,
	0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,
	0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01,
	0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81,
	0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,
	0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01,
	0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81,
	0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,
	0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01,
	0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81,
	0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,
	0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01,
	0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81,
	0x40
};

static const uint8_t _crc_lo[] = {
	0x00, 0xC0, 0xC1, 0x01, 0xC3, 0x03, 0x02, 0xC2, 0xC6, 0x06, 0x07, 0xC7, 0x05, 0xC5, 0xC4,
	0x04, 0xCC, 0x0C, 0x0D, 0xCD, 0x0F, 0xCF, 0xCE, 0x0E, 0x0A, 0xCA, 0xCB, 0x0B, 0xC9, 0x09,
	0x08, 0xC8, 0xD8, 0x18, 0x19, 0xD9, 0x1B, 0xDB, 0xDA, 0x1A, 0x1E, 0xDE, 0xDF, 0x1F, 0xDD,
	0x1D, 0x1C, 0xDC, 0x14, 0xD4, 0xD5, 0x15, 0xD7, 0x17, 0x16, 0xD6, 0xD2, 0x12, 0x13, 0xD3,
	0x11, 0xD1, 0xD0, 0x10, 0xF0, 0x30, 0x31, 0xF1, 0x33, 0xF3, 0xF2, 0x32, 0x36, 0xF6, 0xF7,
	0x37, 0xF5, 0x35, 0x34, 0xF4, 0x3C, 0xFC, 0xFD, 0x3D, 0xFF, 0x3F, 0x3E, 0xFE, 0xFA, 0x3A,
	0x3B, 0xFB, 0x39, 0xF9, 0xF8, 0x38, 0x28, 0xE8, 0xE9, 0x29, 0xEB, 0x2B, 0x2A, 0xEA, 0xEE,
	0x2E, 0x2F, 0xEF, 0x2D, 0xED, 0xEC, 0x2C, 0xE4, 0x24, 0x25, 0xE5, 0x27, 0xE7, 0xE6, 0x26,
	0x22, 0xE2, 0xE3, 0x23, 0xE1, 0x21, 0x20, 0xE0, 0xA0, 0x60, 0x61, 0xA1, 0x63, 0xA3, 0xA2,
	0x62, 0x66, 0xA6, 0xA7, 0x67, 0xA5, 0x65, 0x64, 0xA4, 0x6C, 0xAC, 0xAD, 0x6D, 0xAF, 0x6F,
	0x6E, 0xAE, 0xAA, 0x6A, 0x6B, 0xAB, 0x69, 0xA9, 0xA8, 0x68, 0x78, 0xB8, 0xB9, 0x79, 0xBB,
	0x7B, 0x7A, 0xBA, 0xBE, 0x7E, 0x7F, 0xBF, 0x7D, 0xBD, 0xBC, 0x7C, 0xB4, 0x74, 0x75, 0xB5,
	0x77, 0xB7, 0xB6, 0x76, 0x72, 0xB2, 0xB3, 0x73, 0xB1, 0x71, 0x70, 0xB0, 0x50, 0x90, 0x91,
	0x51, 0x93, 0x53, 0x52, 0x92, 0x96, 0x56, 0x57, 0x97, 0x55, 0x95, 0x94, 0x54, 0x9C, 0x5C,
	0x5D, 0x9D, 0x5F, 0x9F, 0x9E, 0x5E, 0x5A, 0x9A, 0x9B, 0x5B, 0x99, 0x59, 0x58, 0x98, 0x88,
	0x48, 0x49, 0x89, 0x4B, 0x8B, 0x8A, 0x4A, 0x4E, 0x8E, 0x8F, 0x4F, 0x8D, 0x4D, 0x4C, 0x8C,
	0x44, 0x84, 0x85, 0x45, 0x87, 0x47, 0x46, 0x86, 0x82, 0x42, 0x43, 0x83, 0x41, 0x81, 0x80,
	0x40
};

uint16_t modbus_calc_crc(const uint8_t *p, uint16_t n)
{
	uint8_t h = 0xFF;
	uint8_t l = 0xFF;
	uint16_t i;

	while (n--) {
		i = l ^ *(p++);
		l = h ^ _crc_hi[i];
		h = _crc_lo[i];
	}

	return ((uint16_t)(h << 8) | l);
}

*/

/*
#include <stdio.h>

#define u8 		unsigned char
#define u16		unsigned int

u8 test1;
u8 result;

typedef struct __sd_hc32_pin {
	 u8 port;
	 u16 pin;
} sd_hc32_pin;

const sd_hc32_pin _segment_pins[] = {
	{0},
	{1},
	{2},
	{3},
	{4},
	{5},
	{6},
	{7},
};

u8 lb_invert_uint8(u8 v)
{
		int i;
		// u8 iv = 0;
		
		const sd_hc32_pin *pin;
		
		for (i = 0; i < 8; i++)
		{
			pin = _segment_pins + i;
			// test1 =  1 << 6;
			// printf("%2x\n",test1);
			
			if (v & (1 << i)) {
				
				printf("1 %d\n",(v & (1 << i)));
				// printf("%d\n",i);
				// test1 = 1 << (7 - i);
				// printf("%2x",test1);				
				// iv |= 1 << (7 - i);
				// printf("%2x",iv);
			} else {
				
				printf("0 %d\n",(v & (1 << i)));
			}
			
		}
		// return iv;
	
}

int chushi_addr=0x2000;

int main(void)
{
	
		printf("------^--^------\n");
		lb_invert_uint8(0x40);
		// result = lb_invert_uint8(2);
		// printf("       %2x         ",result);
		// printf("%4x",chushi_addr);
	
}


// u8 		flash1[600]={0};
// u16		cnt=0;
// for (cnt = 0;cnt++;cnt < 512)
// {
	
		// flash[cnt] = *((unsigned char *)0x2000 + cnt);
	
// }


/***********************************************************************//**/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h> 
#include <conio.h>
#include <unistd.h>
#include <time.h>


uint8_t 	send_buff[252]={0x31,0X49}; 
uint16_t 	ticks=0;
uint32_t 	num1=0;
uint16_t 	cnt=0;

uint8_t     buff[10];
uint16_t    buff2[150]={0};
uint16_t    maxnum=0;
uint16_t    minnum=100;

double  d1=5/2;
double	total_t;


uint8_t	add1=0;
uint8_t	jishu=21;

struct  clk
{
		int a;
		
}clkt;

enum	tim1
{
		one=1,
		two,
		three
};

int main(void){ 
		
		
		time_t curtime;
		
		int  ch;
		int  ddd=666;
		char *buffer;
		// printf("%.3f",0.61234);
		
		total_t = CLOCKS_PER_SEC;
		time(&curtime);
		printf("%s\n",ctime(&curtime));
		
		
		strcpy( buff , "adfavadv");
		strcat( buff , "123");
		
		printf("%s\nlength=:%d\n",buff,strlen(buff));
		// printf("%d\n",clkt.a);
		
		printf("%d\n",two);
		printf("%d\n",three);
		
		printf("%.4f\n",(double)CLOCKS_PER_SEC);	//1000.0000
		
		// sprintf(buffer,"result=0x%04x;",ddd);	//
		// printf("%s\n",buffer);					//
		// printf("%9.1f\n",d1);					//��ʾ9���ֽ�  ����һλС��
		
		for(cnt=1;cnt<=100;cnt++)
		{
				buff2[cnt]=rand()%10;				//+((rand()/10)%10)*10+((rand()/100)%10)*100								
		}
		
		for(cnt=1;cnt<=100;cnt++)
		{
				printf(" %-4d ",buff2[cnt]);
				if(cnt%10==0){
						printf("\n");
				}
				if(buff2[cnt]>maxnum){
						maxnum = buff2[cnt];								
				}
				if(minnum>buff2[cnt]){
						minnum = buff2[cnt];						
				}								
		}
		
		
		
				
		printf("\n max: %d",maxnum);
		printf("\n min: %d",minnum);
	
	
	
		
	
	
		// FILE *fp = NULL;
	    // fp = fopen("/C/test9.txt", "w+");					//��һ���ļ��������զ�򿪣����û���½�һ���ļ�
	    // fprintf(fp, "This is testing for fprintf...\n");		//��һ���ַ���д���ļ���
		// for(cnt=1;cnt<=100;cnt++)
		// {
			// fputc(buff2[cnt],fp);							//д��һ��ʮ������
			// fputc(0x20,fp);
		// }		  									
		// fputs("\nThis is testing for fputs...\n", fp);		//���ַ���д�뵽fp��ָ�����������
	    // fclose(fp);											//�ر��ļ�	
		
		
		
		
		for( ; ; ){
			
			// time(&curtime);
			// usleep(1000*1000); 			//  *1000us
			// printf("%s\n",ctime(&curtime));
			// printf("%d\n",rand());
			
			// printf("1 ");
			// if(_kbhit()!=0){				
				// ch = _getch();
				// printf("0x%02x\n",ch);				
			// }
			// printf("%f",0.6);	
			
			if(add1<jishu){
				
				add1++;
				printf("\n%d",add1);
				
				
			}
			
			
		}
		
		
		// return 0;
		// printf("1324567");
}


/*
#include <stdio.h>

unsigned char i;
unsigned char a=0xff;
unsigned char b;
int		c=0x00B4;
int 	d;
int		c1=0x01,c2=6,c3=5;
int 	ma1=0;

unsigned char f=0x11;
unsigned char f1;
unsigned char f2;

unsigned char	X1=0x02;
int main()
{
	
	
	// b=a&=0x0e;
	// printf("0x%02x",b);
	
	// printf("0x%04x\n",c);
	// c=c&=0x8fff;
	// printf("0x%04x\n",c);
	
	
	
	// for(i=0;i<8;i++)
	// {
		 // a>>=1;
		 // printf("0x%02x\n",a);
	// }
	
	// ma1=c1?c2:c3;
	// printf("%d\n",ma1);
	// while(1)
	// {
		
		// if(c1<c3){
			
			
			// c1++;
			// printf("%d\n",c1);
		// }
		// printf("0x%02x",f);		
	// }
	f2=c>>8;
	f1=c&0xff;
	
	printf("0x%02x\n",f1);	
	printf("0x%02x\n",f2);	
	
	// f2=(f&0x0f);
	// printf("0x%02x\n",f2+0x30);
	
	// if(f<0x09){	
		// printf("0x%02x\n",f2+f1+0x30);	
	// }else{
		// printf("0x%02x\n",f2+f1*10+0x30);
		
		
	// }
	
	// if(X1>0X02){
			// printf("1\n");	
		
	// }else{
			// printf("2\n");	
		
	// }
	
	
	
	
}







/*
#include<stdio.h>
#include<string.h>

int dec2hex(int n)
{
	char str[100];
	int p;
	int i;
	int digit;
	char c;
	p=0;
	do{
		digit=n%16;
		if(digit<10)
		{
			str[p]=digit+'0';
		}else
		{
			str[p]=digit-10+'A';
		}		   
		p++;
		n=n/16;
	}while(n>0);
	str[p]='\0';
	for(i=0;i<p/2;i++)
	{
		c=str[i];
		str[i]=str[p-1-i];
	    str[p-1-i]=c;
	}
	return (int)str;
	puts(str);
}
 
int a = 0;

char str[100]="1544";
int main()
{	

	int n;
 
	n=12;
	printf(" \n ʮ������ %d ת��Ϊʮ������ Ϊ: %d",n,a);
	dec2hex(n);
	puts(str);
	n=2022;
	printf(" \n ʮ������ %d ת��Ϊʮ������ Ϊ: ",n);
	dec2hex(n);
	printf("132");
	
}


*/










/***********************************************************************//**/


// #include<stdio.h>
// #include<string.h>
// char s[4];
// int ret;
// char str[10];

// int main()
// {	

	// ret = snprintf(str, sizeof(str), "%s", "abc");
	
	// sprintf(s, "%d", 123);
	// printf("%s\n",s);
	// printf("%d:%s => %d\n",strlen(str), str, ret);
	// printf("%s",ret);
	
// }

/*
#include<stdio.h>

// char a[]={0x68,0x99,0x99,0x99,0x99,0x99,0x99,0x68,0x05,0x01,0x61};
// char b=0;
// unsigned char cl=0x56;
// unsigned char dh=0x45;
unsigned int e=0;

// int a1=0x4501;
int X=0;
int Y=0;
int main()
{	
	// printf("g1:");
	// scanf("%X",&X);
	// printf("g2:");
	// scanf("%Y",&Y);
	// b=sizeof(a);///sizeof(a)
	// printf("%d\n",b);
	// e=((cl<<8)+dh);
	// e=dh*10000+cl;
	// e=(0xAA+X+Y+0x00)%256;
	e=(0xAA+0x00+0x08+0x00)%256;
	// e=(0xAA+0x01+0x06+0x07+0x01+0x07+0xE6+0x0C+0x10+0x10+0x39)%256;
	// e=a1>>8;
	// printf("\n%x",0XAA);
	// printf("%x",X);
	// printf("%x",Y);
	// printf("%x",0X00);
	printf("%x",e);
	// printf("%x\n",0X55);	
}

/***********************************************************************//**/
// #include<stdio.h>
// char a=0x01;
// char b=0x02;
// char c=0x03;
// int main()
// {  

	// printf("%x",a*100+b*10+c*1);	
// }

/***********************************************************************//**/
// #include<stdio.h>
// int a=0;  /* a+100      */
// int b=0;  /* b*b=a+100  */
// int c=0;  /* c*c=a+268*/
// int main()
// {  
    // for(a=0;a<10000;a++)
	// {
	  // for(b=0;b<10000;b++)
	  // {
		// for(c=0;c<10000;c++)
	    // {  
	  	// if(a+100==b*b)
		 // {
			// if(a+268==c*c)
			// {
			// printf("a:%d\n",a);
			// printf("b:%d\n",b);
			// printf("c:%d",c);
			// }
		 // }
		// }		
	  // }			
	// }		
// }
/***********************************************************************//**/
// #include<stdio.h>
// int X=0;
// int Y=0;
// int main()
// {
	// scanf("%X",&X);
	// Y=X<<2;            /*������λ*/
	// printf("%X\n",Y);  /*���ƽ��*/
	// printf("X:%d\n",X);
	// printf("Y:%d",Y);	
// }
/***********************************************************************//**/
// #include<stdio.h>
// #include<math.h>
// int incp[8]={1980,1780,0,1850,1670,1954,1840,1620};
// int onepiece=0;
// char i=0;
// char n=-6;
// #define PI 3.14159265

// double cosresult;                         //����
// double sinresult;                         //����
// double tanresult;                         //����
// double x = -1;                            //��ֵ

// double number = 123.01;                   //��ȡ����ֵ
// double down, up;

// double eresult;                           //
// double y = 4.0;                           //
                        

// int main()
// {	
	// for(i=0;i<8;i++)
	// {	
	  // printf("%d ",incp[i]);	  
	// }
		
	// onepiece=incp[1]+incp[2]+incp[3]+incp[4]+incp[5]+incp[6]+incp[7]+incp[0];
	// printf("%d\n",onepiece/8);	
	// printf("%d\n",abs(n));      /*�����ֵ*/

    // cosresult = acos(x)*180/PI;    /*    cos()*180/PI     cos(��)=1/2   */ 
	// sinresult = asin(x)*180/PI;    /*    sin()*180/PI     sin(��)=      */
	// tanresult = atan(x)*180/PI;    /*    tan()*180/PI     tan(��)=      */
		
    // printf("The arc cosine  of %lf is %lf\n", x, cosresult);	
	// printf("The arc sin     of %lf is %lf\n", x, sinresult);	
	// printf("The arc tangent of %lf is %lf\n", x, tanresult);	
	// /*%.3lf  ������λС��  %lf  ������λС��*/
	// printf("/********************************************/\n");	
	
	// down = floor(number);                                  /*����ȡ��*/
    // up = ceil(number);									   /*����ȡ��*/
	// printf("original number %5.2lf\n", number);
    // printf("number rounded down %5.2lf\n", down);          /*����ȡ��*/
    // printf("number rounded up %5.2lf\n", up); 			   /*����ȡ��*/
	// /*%5.2lf  ������λС��  5 ������ʽ����*/
	// printf("/********************************************/\n");	
	
    // eresult = exp(y);  	      							   /*�����e��x�η�ֵ������������*/
	// printf("'e' raised to the power  of %lf (e ^ %lf) = %lf\n", y, y, eresult);
	
	
    // return 0;	
// }

/***********************************************************************//**/


/************************************************//**/
// #include<stdio.h>

// int add=0;
// int buff[8]={0x01,0x05,0x04,0x08,0x07,0x00,0x02,0x00};
// static const int crc_table[] = {

    // 0x00,0x31,0x62,0x53,0xc4,0xf5,0xa6,0x97,0xb9,0x88,0xdb,0xea,0x7d,0x4c,0x1f,0x2e,
    // 0x43,0x72,0x21,0x10,0x87,0xb6,0xe5,0xd4,0xfa,0xcb,0x98,0xa9,0x3e,0x0f,0x5c,0x6d,
    // 0x86,0xb7,0xe4,0xd5,0x42,0x73,0x20,0x11,0x3f,0x0e,0x5d,0x6c,0xfb,0xca,0x99,0xa8,
    // 0xc5,0xf4,0xa7,0x96,0x01,0x30,0x63,0x52,0x7c,0x4d,0x1e,0x2f,0xb8,0x89,0xda,0xeb,
    // 0x3d,0x0c,0x5f,0x6e,0xf9,0xc8,0x9b,0xaa,0x84,0xb5,0xe6,0xd7,0x40,0x71,0x22,0x13,
    // 0x7e,0x4f,0x1c,0x2d,0xba,0x8b,0xd8,0xe9,0xc7,0xf6,0xa5,0x94,0x03,0x32,0x61,0x50,
    // 0xbb,0x8a,0xd9,0xe8,0x7f,0x4e,0x1d,0x2c,0x02,0x33,0x60,0x51,0xc6,0xf7,0xa4,0x95,
    // 0xf8,0xc9,0x9a,0xab,0x3c,0x0d,0x5e,0x6f,0x41,0x70,0x23,0x12,0x85,0xb4,0xe7,0xd6,
    // 0x7a,0x4b,0x18,0x29,0xbe,0x8f,0xdc,0xed,0xc3,0xf2,0xa1,0x90,0x07,0x36,0x65,0x54,
    // 0x39,0x08,0x5b,0x6a,0xfd,0xcc,0x9f,0xae,0x80,0xb1,0xe2,0xd3,0x44,0x75,0x26,0x17,
    // 0xfc,0xcd,0x9e,0xaf,0x38,0x09,0x5a,0x6b,0x45,0x74,0x27,0x16,0x81,0xb0,0xe3,0xd2,
    // 0xbf,0x8e,0xdd,0xec,0x7b,0x4a,0x19,0x28,0x06,0x37,0x64,0x55,0xc2,0xf3,0xa0,0x91,
    // 0x47,0x76,0x25,0x14,0x83,0xb2,0xe1,0xd0,0xfe,0xcf,0x9c,0xad,0x3a,0x0b,0x58,0x69,
    // 0x04,0x35,0x66,0x57,0xc0,0xf1,0xa2,0x93,0xbd,0x8c,0xdf,0xee,0x79,0x48,0x1b,0x2a,
    // 0xc1,0xf0,0xa3,0x92,0x05,0x34,0x67,0x56,0x78,0x49,0x1a,0x2b,0xbc,0x8d,0xde,0xef,
    // 0x82,0xb3,0xe0,0xd1,0x46,0x77,0x24,0x15,0x3b,0x0a,0x59,0x68,0xff,0xce,0x9d,0xac,
// };

// int calc_crc_table(const int *p, int n)                      //CRC�����
// {
	// int crc = 0x00;

	// while (n) {
		// crc = crc_table[crc ^ (*p)];
		// ++p;
		// printf(" %x \n",p); 
		// --n;
		// printf(" %x \n",n); 
	// }
	// return crc;
// }


// int j=0;
// int main()
// {
     // buff[7]=0x00;
	 // buff[7]=calc_crc_table(buff, 7);
	 // for(j=0;j<8;j++)
	 // {
		// printf(" %X \n",buff[j]); 	 
	 // }
// }



/************************************************//**/
/************************************************//**/

/************************************************//**/


// /************************************************//***/
// #include <stdio.h>

// int a=0,i=0;
// int abt[10]={11,12,55,44,66,99,88,77,20,13};
		
// int main()
// {

// /*	while(i<10){	
	// printf("%d\n",abt[i]);	
	// i++;	
	// }
// */
	
// /*	a++       0    
	// a=a+1     1
	// ++a       1*/
	
	// for(a=100;a<255;a++){
	// printf("%d,",a);			
	// }
// }



/************************************************//*�ж�����ż��*/

// #include<stdio.h>
// int main()
// {
    // int num;
    // printf("������һ������: ");
    // scanf("%d",&num);
    // (num%2==0)?printf("ż��"):printf("����");
// }

/************************************************//*Whileѭ�� */
// #include <stdio.h>
// int main ()
// {
   // /* �ֲ��������� */
   // int a = 10;
   // /* while ѭ��ִ�� */
   // while( a < 20 )
   // {
      // printf("a ��ֵ�� %d\n", a);
      // a++;
   // }
   // return 0;
// }
/************************************************//*whileǶ��*/

// #include <stdio.h>
// int main()
// {
    // int i=1,j;
    // while (i <= 5)
    // {
        // j=1;
        // while (j <= i )
        // {
            // printf("%d ",j);
            // j=j+1;
			// j++;
			// ++j;
        // }
        // printf("\n");
        // i=i+1;
		// i++;
		// ++i;
    // }
    // return 0;
// }

/************************************************//*ָ��*/
// #include <stdio.h>
 
// int main ()
// {
   // int  var = 20;   /* ʵ�ʱ��������� */
   // int  *ip;        /* ָ����������� */
 
   // ip = &var;  /* ��ָ������д洢 var �ĵ�ַ */
 
   // ip=NULL;        //000000000       
 
   // printf("var �����ĵ�ַ: %p\n", &var  );
 
   // /* ��ָ������д洢�ĵ�ַ */
   // printf("ip �����洢�ĵ�ַ: %p\n", ip );
 
   // /* ʹ��ָ�����ֵ */
   // printf("*ip ������ֵ: %d\n", *ip );
 
   // return 0;
// }
/************************************************//*ð������*/

// #include <stdio.h>
// void bubble_sort(int arr[], int len) {
    // int i, j, temp;
    // for (i = 0; i < len - 1; i++)
        // for (j = 0; j < len - 1 - i; j++)
            // if (arr[j] > arr[j + 1]) {
                // temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
            // }
// }
// int main() {	
    // int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 1, 64, 35, 9, 70 };
	
	// printf("%d\n",sizeof(arr));      //�������*4	
	// printf("%d\n",sizeof(*arr));     //4
	// printf("%d\n",sizeof(arr[0]));   //4	
	
    // int len = (int) sizeof(arr) / sizeof(*arr);         // 56/4
	// printf("���鳤�ȣ�%d\n",len);	
    // bubble_sort(arr, len);        //���� + ����
    // int i;
    // for (i = 0; i < len; i++)
    // printf("%d ", arr[i]);
    // return 0;	
// }

/************************************************//*����*/

// #include <stdio.h>
	// char a[6]="abcdef";
	// int i=0;
	// int main()
// {	
    // for( i=0;i<6;i++){
	// printf("%c",a[i]);
	// }
// }

/************************************************/
/*һ��������������100����һ����ȫƽ������
  �ټ���168����һ����ȫƽ������
  ���ʸ����Ƕ��٣�                              */
// #include <stdio.h>
// int main (void)
// {
    // int  i, j, m, n, x;
    // for (i = 1; i < 168 / 2 + 1; i++)
    // {
        // if (168 % i == 0)
        // {
            // j = 168 / i;
            // if ( i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
            // {
                // m = (i + j) / 2;
                // n = (i - j) / 2;
                // x = n * n - 100;
                // printf ("%d + 100 = %d * %d\n", x, n, n);
                // printf ("%d + 268 = %d * %d\n", x, m, m);
            // }
        // }
    // }
    // return 0;
// }

/************************************************//*��101��200֮�������*/

// #include <stdio.h>
// int main()
// {
    // int i,j;
    // int count=0;
	
    // for (i=101; i<=200; i++) 
    // {
        // for (j=2; j<i; j++) 
        // {
        /* ��� j �ܱ� i ����������ѭ��*/
            // if (i%j==0) 
                // break;
        // }
        /* �ж�ѭ���Ƿ���ǰ��������� j<i ˵���� 2~j ֮��,i �п���������*/
        // if (j>=i) 
        // {
            // count++;
            // printf("%d ",i);
			// printf("%d ",j);
        /* ���У��� count ������ÿ���������*/
            // if (count % 5 == 0) 
            // printf("\n");
        // }
    // }    
    // return 0;
// }

/************************************************//*ˮ�ɻ�*/
// /*100-999*/
// #include<stdio.h>
// int main()
// {
    // int i,x,y,z;
    // for(i=100;i<1000;i++)
    // {
        // x=i%10;          //��
        // y=i/10%10;       //ʮ
        // z=i/100%10;      //��
		
        //   i/1000%10      //ǧ
		//   i/10000%10     //��
		
        // if(i==(x*x*x+y*y*y+z*z*z))
        // printf("%d\n",i);       
    // }
    // return 0;
// }
/************************************************//**/

/*(a>b)?a:b     ���a>b���� ���a          ��֮���b*/
// #include<stdio.h>

// int t; 
// char acc; 
// int main()
// {
	// printf("����һ������\n");	
	// scanf("%d",&t);                                            //scanf ��Ҫ��\n  ��Ȼ����ִ��

/*  if(t<30)printf("A");
	   else if(t<50)printf("B");
	      else if(t<100)printf("C");
	          else printf("D");
*/
	
	// acc=(t<60)?'D':((t<80)?'C':((t<90)?'B':'A' ));             //ע����ĸҪ�ӵ�����	
	// printf("%c\n",acc);	
    // return 0;
// }

/************************************************//**/
// #include <stdio.h>

// #define SIZE 255     //���峤��

// int main()
// {
 // int a[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};//������
 // int b[SIZE] = {1,2,3,4,5,7,8,9,10,11,12,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,31,30};                   //B �Ӽ�
 // int c[SIZE];                                       //ȡ����           
 // int i,j,k,d,n;                                      //����
 

 // for(i = 0, j = 0; i < SIZE; ++i)                   //forѭ�� 
 // {
  // for(k = 0; k<SIZE; ++k)                    //forѭ�� 
  // {
   // if(a[i] ==b[k])break;
  // }

  // if(k ==SIZE )
   // c[j++] = a[i];
 // }


 // for(i = 0, j = 0; i < SIZE; ++i)                   //forѭ�� 
 // {
  // for(p = b; p != b + SIZE; ++p)                    //forѭ�� 
  // {
   // if(a[i] == *p)break;
  // }

  // if(p == b + SIZE)
   // c[j++] = a[i];
 // }


 // printf("a - b = { ");
 
 // for(n = 0; n < j; ++n)
 // {
  // printf("%d, ", c[n]);
 // }
 
 // printf("}");
// }	


/************************************************//**/

/************************************************//**/
// #include <stdio.h>
// #define SIZE 100     //���峤��
// int main()
// {
 // int a[SIZE] = {1,2,3,4,9,2,6,8,7,3,6,5,4,1,2,5,63};//������
 // int b[SIZE] = {1,3,5,6,9,5,4,2};                   //B �Ӽ�
 // int c[SIZE];                                       //ȡ����           
 // int i, j, *p;                                      //����

 // for(i = 0, j = 0; i < SIZE; ++i)                   //forѭ�� 
 // {
  // for(p = b; p != b + SIZE; ++p)                    //forѭ�� 
  // {
   // if(a[i] == *p)break;
  // }

  // if(p == b + SIZE)
   // c[j++] = a[i];
 // }

 // printf("a - b = { ");
 // for(i = 0; i < j; ++i)
 // {
  // printf("%d ", c[i]);
 // }
 // printf("}");
// }

/************************************************//**///��ʮ�����Ƶ��ַ���ת��������  
// #include <stdio.h>

// int b[8] = {0x46,0x50,0x46,0x06,0x09,0x05,0x04,0x02}; 

// int htoi(char* str)
// {
	// int n = 0;
	// if (str == NULL) return -1;
	// if (*str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X'))
	// {
		// str += 2;
	// }
	// while (1)
	// {
		// if (*str >= '0' && *str <= '9')
		// {
			// n = 16 * n + (*str - '0');
		// }
		// else if (*str >= 'A' && *str <= 'F')//ʮ�����ƻ�Ҫ�ж��ַ��ǲ�����A-F����a-f֮��
		// {
			// n = 16 * n + (*str - 'A' + 10);
		// }
		// else if (*str >= 'a' && *str <= 'f')
		// {
			// n = 16 * n + (*str - 'a' + 10);
		// }
		// else
		// {
			// break;
		// }
		// str++;
	// }
	// return n;
// }

// int main(void)
// {
	
		
	// char str1[] = "0X4650";
	// int data = 0;
	// data = htoi(str1);
	// printf("%s\r\n",str1);       //ԭ����
	// printf("data=%d\r\n", data); //ת�����
	// /*
		// adc_result_1[6]=((adc_value(3))>>8)&0xff; //ȡ��λ
		// adc_result_1[7]=(adc_value(3))&0xff;      //ȡ��λ
	// */
	// int data2 = 0;
	// data2=b[2]<<8|b[1];          //����ʮ�����ƺϳ�һ��    4650
	// printf("data2=%x\r\n", data2); //ת�����
	

	
	// return 0;
// }


/************************************************//**/

/************************************************//**/


/************************************************//**/

/************************************************//**/

/************************************************//**/



/************************************************//**/


/********************************
 * 
 * Notes: CRC16-Modbus
 * 
 * x16+x15+x2+1    0x8005 -> 0xA001         
 *                 0x1021 -> 0x8408
 * 
 * Example�� HEX
 * 
 * In -> 12 34 
 * Out-> 12 34 0C C7
 * 
 *******************************/
// (
    // function main() {
        // source = this.SourceDataBuffer;                //Source data buffer;  //Դ���ݻ�����
        // var buf = new ArrayBuffer(source.length + 2);  //Create a new array   //����һ��������
        // var newBuffer = new Uint8Array(buf);           //

        // Adding check
        // for (var i = 0; i < source.length; i++)
            // newBuffer[i] = source[i];

        // var crc = 0xFFFF;
        // for (var i = 0; i < source.length; i++) {
            // crc ^= (source[i] & 0x00FF);
            // for (var j = 0; j < 8; j++) {
                // if (crc & 0x01) {
                    // crc >>= 1;
                    // crc ^= 0xA001;
                // }
                // else
                    // crc >>= 1;
            // }
        // }
        // newBuffer[source.length] = crc;
        // newBuffer[source.length + 1] = crc >> 8;
        // return newBuffer;
    // }
// )()


/************************************************//**/



// #include<stdio.h>
// #include<string.h>
// int main(){
  
    // char *str = "  OK  ";
    // char *substr = "OK";
    // char *s = strstr(str, substr);
    // printf("%s\n", s);
    // return 0;
// }

/************************************************//**/


/************************************************//**/
/************************************************//**/

/************************************************//**/


/************************************************//**/
/************************************************//**/

/************************************************//**/


/************************************************//**/
/************************************************//**/

/************************************************//**/


/************************************************//**/
/************************************************//**/

/************************************************//**/


/************************************************//**/
/************************************************//**/

/************************************************//**/


/************************************************//**//************************************************//**/

/************************************************//**/


/************************************************//**/




