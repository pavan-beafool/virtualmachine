#include <stdio.h>
#include "register.h"
#include "types.h"
int main()
{
	uint16 i;
	printf("%d\n",i);
	for(i = 0; i < VRMAX;i++){
		printf("The value of the %d is %d\n",i,Registers[i]);
	}
	printf("%d\n", sizeof(uint16));
}
