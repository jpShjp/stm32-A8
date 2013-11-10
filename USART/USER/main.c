/**
  ******************************************************************************
  * ����    ����λ��_
  *         
  * ʵ��ƽ̨��stm32f103c8t6
  * Ӳ�����ӣ�------------------------
  *          | PA9  - USART1(Tx)      |
  *          | PA10 - USART1(Rx)      |
  *           ------------------------
  * ��汾  ��ST3.5.0
  * ����    ��zhangwj   
  ******************************************************************************
  *  
  * �����ǵ� main.c �ļ���Ҫ�� stdio.h ���ͷ�ļ�������������Ҫ��
  * ������������һ��ѡ�� Use MicroLIB (ʹ��΢��)���� Options for target��
  * ���΢���� keil MDK ΪǶ��ʽӦ���������� C �⣬����Ҫ�Ⱦ��п⣬�����ض���
  * ��ѡʹ��֮�����ǾͿ���ʹ�� printf() ��������ˡ�
  *
  **/	
/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "usart1.h"
#include "led.h"

int main(void)
{
	USART1_Config();
	LED_GPIO_config();

	while (1)
	{
		if(USART_GetFlagStatus(USART1 , USART_IT_RXNE) == SET)
		{
			if(USART_ReceiveData(USART1)==0x00)
			{
				GPIO_SetBits(GPIOA, GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);	
				LED1(ON);
				printf("LED1 ON \n");
			}
			else if(USART_ReceiveData(USART1)==0x01)
			{
				GPIO_SetBits(GPIOA, GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);	
				LED2(ON);
				printf("LED2 ON \n");
			}
			else if(USART_ReceiveData(USART1)==0x02)
			{
				GPIO_SetBits(GPIOA, GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);	
				LED3(ON);
				printf("LED3 ON \n");
			}

			else if(USART_ReceiveData(USART1)==0x03)
			{
				GPIO_SetBits(GPIOA, GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);	
				LED4(ON);
				printf("LED4 ON \n");
			}
		}
	}

}


/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/
