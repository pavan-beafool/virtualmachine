#ifndef REGISTER
#define REGISTER
#include "types.h"
enum {
	VAX =0,
	VBX,
	VCX,
	VDX,
	VSI,
	VBI,
	VSP,
	VBP,
	VIP,
	VRMAX
};


uint16 Registers[VRMAX];

#endif
