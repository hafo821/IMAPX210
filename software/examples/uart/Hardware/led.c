#include "led.h"


void LED_GPIO_Config(void)
{
 GPECON&=~(0x03<<4);   //����GPE�ĸ���λΪGPIO���
 GPECON|=(0x01<<4);   //����GPE�ĸ���λΪGPIO���
 GPEDAT|=0x01<<2;      //����GPK�ĸ���λ����ߵ�ƽ���ر�LED

}