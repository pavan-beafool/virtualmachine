#include <stdio.h>
#include "stack.h"
#include "types.h"
#include "opcodes.h"
#include "object.h"

void main(void){
    int command;
   /* while(1){
        scanf("%s",command);

        switch (command){

            case PRINT:
                printf("PRINT");
                break;            
            case PUSH:
                printf("PUSH");
                break;
            case POP:
                printf("POP");
                break;
            case INT:
                printf("INT");
                break;
        }
    }*/
    scanf("%d",&command);

        switch (command){

            case PRINT:
                printf("PRINT\n");
                break;            
            case PUSH:
                printf("PUSH\n");
                break;
            case POP:
                printf("POP\n");
                break;
            case INT:
                printf("INT\n");
                break;
            
        }
    printf("%d\n",command);
    printf("%d\n",PRINT);
    //printf("hello world");

}
