#include <stdio.h>
#include "encrypt.h"

int main(){
    printf("Your passcode: %d\nPrint message: ", passcode);

    char msg[80];
    while (fgets(msg, 80, stdin))
    {   
        encrypt(msg);
        printf("\nEncrypted message: %s\n",msg);
    }
}