#include <stdio.h> 
#include <stdint.h> 
#include "platform.h"


#define LED (*(unsigned volatile*) 0x40000008)
#define SW  (*(unsigned volatile*) 0x40000000)
#define JB  (*(unsigned volatile*) 0x40010000)
#define AN  (*(unsigned volatile*) 0x40020008)
#define SEG (*(unsigned volatile*) 0x40020000)
#define BTN (*(unsigned volatile*) 0x40030000)
#define JXADC 0x44A10000
#define JXADC 0x44A10000
#define PMOD (*(uint32_t volatile*) 0x44A20000)
#define REG_CTR (*(uint32_t volatile*) 0x44A20004) 



