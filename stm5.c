#include "stm32f10x.h"
#include "Delay.h"
#include"LED.H"//自建库
#include"KEY.H"

uint8_t KeyNum;

int main()
{
	LED_Init();
	Key_Init();
    while(1)
    {
		KeyNum=Key_GetNum();
		
		//用两个按键实现
		//if(KeyNum==1){   
		//LED1_ON();
		//}
		//if(KeyNum==2){   
		//LED1_OFF();
		//}
		
		//一个按键实现
		if(KeyNum==1){   
		LED1_Turn();
		}
		if(KeyNum==2){   
		LED2_Turn();
		}
    }
	
	
	
} 

