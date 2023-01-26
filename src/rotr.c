#include "rotr.h"

void rotr_uint32(uint32_t *number, unsigned int shift) {
	if(!shift)
		return;
	
	shift %= 32;

	*number = ((*number) >> shift) | ((*number) << (32 - shift));
}