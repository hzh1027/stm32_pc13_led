#include"stm32f10x.h"

int main(void){
	/*普通做法
	RCC->APB2ENR=0x00000010; //打开GPLOC时钟
	GPIOC->CRH=0x00300000;//把PC13设置成推挽输出模式
	//GPIOC->ODR=0x00000000;//低电平点亮
	GPIOC->ODR=0x00002000;//高电平熄灭
	*/
	//函数库做法
	//右键跳转(go to Definition)  没有就选中(contral + f ->查找)  有框放大
	//开启GPIOC外设时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	//定义一个结构体变量
	GPIO_InitTypeDef  GPIO_Initstructure;
	//设置模式:推挽输出
	GPIO_Initstructure.GPIO_Mode=GPIO_Mode_Out_PP;
	//设置引脚:PC13
	GPIO_Initstructure.GPIO_Pin=GPIO_Pin_13;
	//设置速度:50MHz
	GPIO_Initstructure.GPIO_Speed=GPIO_Speed_50MHz;
	//写入GPIOC端口,完成初始化
	GPIO_Init(GPIOC,&GPIO_Initstructure);
	//PC13输出高电平(LED灯灭)
	GPIO_SetBits(GPIOC,GPIO_Pin_13);
	//低电平
	//GPIO_ResetBits(GPIOC,GPIO_Pin_13);
	while(1){
	}
}
