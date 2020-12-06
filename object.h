#include "types.h"
#ifndef OBJECTS
#define OBJECTS

typedef struct {
    int64 *address;
    union{
        int64 value_int;
        float value_float;
        char* value_string;
    }
} OBJECT;



#endif