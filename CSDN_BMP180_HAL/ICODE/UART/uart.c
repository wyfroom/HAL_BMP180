/* Includes ------------------------------------------------------------------*/
#include "uart.h"
#include "usart.h"

/* printf��ӳ�� */
#include <stdio.h>
#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif
PUTCHAR_PROTOTYPE
{
    //�����ĸ����ڿ��Ը���huart1Ϊ��������
    HAL_UART_Transmit(&huart1, (uint8_t *)&ch, 1 , 0xffff);
    return ch;
}


