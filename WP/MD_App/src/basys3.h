#pragma once
#include "sensor.h"
#include "alarm.h"
#include "platform.h"

#define LED (*(volatile uint32_t*) 0x40000008)
#define SW  (*(volatile uint32_t*) 0x40000000)
#define JB  (*(volatile uint32_t*) 0x40010000)
#define AN  (*(volatile uint32_t*) 0x40020008)
#define SEG (*(volatile uint32_t*) 0x40020000)
#define BTN (*(volatile uint32_t*) 0x40030000)
#define JXADC (*(volatile uint32_t*) 0x44A10000)
#define REG_CTR (*(volatile uint32_t*) 0x44A20004) 



