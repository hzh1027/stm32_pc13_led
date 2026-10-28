/*#include"stm32f10x.h"
#include"Delay.h"

int main(){
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;//推挽输出下高低电平可以正常闪烁
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;//GPIO_Pin_0|GPIO_Pin_1等等
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);


while (1)
{
	// ~取反符号 0000 0000 0000 0000 0001->1111 1111 1111 1110
	//根据自主接法(低电平点亮)
	//闪烁的实现
	GPIO_Write(GPIOA,~0x0001);// 0000 0000 0000 0001 A0
	Delay_ms(800);
	GPIO_Write(GPIOA,~0x0002);// 0000 0000 0000 0010 A1
	Delay_ms(800);
	GPIO_Write(GPIOA,~0x0004);// 0000 0000 0000 0100 A2
	Delay_ms(800);
	GPIO_Write(GPIOA,~0x0008);// 0000 0000 0000 1000 A3
	Delay_ms(800);
	GPIO_Write(GPIOA,~0x0010);// 0000 0000 0001 0000 A4
	Delay_ms(800);
	GPIO_Write(GPIOA,~0x0020);// 0000 0000 0010 0000 A5
	Delay_ms(800);
	GPIO_Write(GPIOA,~0x0040);// 0000 0000 0100 0000 A6
	Delay_ms(800);
	GPIO_Write(GPIOA,~0x0080);// 0000 0000 1000 0000 A7
	Delay_ms(800);
	
	
}

} */
