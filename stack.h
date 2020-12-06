#ifndef STACK
#define STACK

#include "object.h"
#include "types.h"

typedef struct {
	uint64 top;
	OBJECT data;

} STACK;

OBJECT pop_out(void);

int16 push_in(OBJECT value);

int16 gettop(void);

int16 isfull(void);



#endif
