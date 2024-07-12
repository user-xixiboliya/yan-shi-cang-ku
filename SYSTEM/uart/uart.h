#ifndef __UART_H
#define __UART_H
#include "stdio.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//Mini STM32开发板
//串口1初始化		   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2010/5/27
//版本：V1.3
//版权所有，盗版必究。
//Copyright(C) 正点原子 2009-2019
//All rights reserved
//********************************************************************************
//V1.3修改说明 
//支持适应不同频率下的串口波特率设置.
//加入了对printf的支持
//增加了串口接收命令功能.
//修正了printf第一个字符丢失的bug
////////////////////////////////////////////////////////////////////////////////// 
#include "stm32f10x.h"
#include "bool.h"

//extern u8 UART_RX_BUF[64];     //接收缓冲,最大63个字节.末字节为换行符 
extern u8 UART_RX_STA;         //接收状态标记	

void uartInit(u32 bound);
void uartWriteBuf(uint8_t *buf, uint8_t len);
bool isRxCompleted(void);
#endif
