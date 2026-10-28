/*#include"stm32f10x.h"
#include"Delay.h"

int main(){
    //GPIOC 常用PC13
	//GPIOA 常用PA0-PA15
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;//推挽输出下高低电平可以正常闪烁
	//GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_OD;//开漏输出高电平相当于高阻态,没驱动能力,低电平有驱动能力
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    //GPIO_ResetBits(GPIOA, GPIO_Pin_0); // PA0输出低电平(亮)-接负
	//GPIO_SetBits(GPIOA, GPIO_Pin_0);// PAO输出高电平(灭)
	//GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);
	
while (1)
{
	//闪烁的实现
	GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_RESET);//低电平
	Delay_ms(1000);//延时
	GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);//高电平
	Delay_ms(1000);
	
}

} */
