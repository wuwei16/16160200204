#include "LPC11xx.h"                    // Device header
int main (void){
 LPC_GPIO2->DIR=0xFF;
	LPC_GPIO0->DATA=0x55;
}
