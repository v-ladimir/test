#ifndef __SPI_EE_H_
#define __SPI_EE_H_

#include "stdafx.h"
#include "ftd2xx.h"

// pin definition
// NEW HW

#define CS   ((unsigned char)((1<<4)|(1<<6)))
#define CLK  ((unsigned char)(1<<6))
#define MOSI ((unsigned char)(1<<3))
#define MISO ((unsigned char)(1<<0))


// OLD HW
/*
#define CS   ((unsigned char)((1<<3)|(1<<0)))
#define CLK  (1<<0)
#define MOSI (1<<2)
#define MISO (1<<1)
*/

/* 93cxx EEPROM
1k - 46
2k - 56
4k - 66
8k - 76
16k - 86
*/


//EEPROM routines prototypes
unsigned char getStatus(FT_HANDLE ftDevice);
void writeEnable(FT_HANDLE ftDevice);
void writeDisable(FT_HANDLE ftDevice);
void devWriteByte(FT_HANDLE ftDevice, unsigned char wByte, unsigned short address);
unsigned char devReadByte(FT_HANDLE ftDevice, unsigned short address);

#endif