#ifndef REGISTER
#define REGISTER
#include <"types.h"
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


uint_16 Registers[VRMAX];

#endif
