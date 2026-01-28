/*
 * without_volatile.c
 *
 *  Created on: Jan 28, 2026
 *      Author: maksympetliukh
 */
/*
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#define SRAM_ADDR1 0x20000004UL

int main(void){
	uint32_t var = 0;
	uint32_t* pSRAM_ADDR1 = (uint32_t*)SRAM_ADDR1;

	/*Without volatile keyword the compiler may optimize
	this loop into an infinite one, assuming that the
	memory value never changes and execution will never
	reach the second while(1) loop*/

/*
	while(1){
		var = *pSRAM_ADDR1;
		if(var) break;
	}

	while(1);

	return EXIT_SUCCESS;
}
*/
