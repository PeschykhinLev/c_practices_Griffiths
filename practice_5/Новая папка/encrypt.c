#include "encrypt.h"
#include <math.h>
#include <stdio.h>

char encrypt(char *message){
    char c;
    printf("Loading....");
    while (*message)
    {
        *message = *message ^31;
        message ++;
    }
    return *message;
}

int passcode = 323;
