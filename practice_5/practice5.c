#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "practice5.h"
#include <string.h>


float total = 0.0;
short count = 0;
short tax_percent = 6;

int main(){

    restaurant();
    
}

int restaurant(){
    float val;
    printf("Dish price: ");
    while (scanf("%f", &val) == 1){
        printf("Current price: %.2f\n", add_with_tax(val));
        printf("Dish price: ");
    }
    printf("Final receipt: %.2f\n", total);
    printf("Number of dishes: %hi\n", count);
    return 0;
}

float add_with_tax(float f){
    float tax_rate = 1 + tax_percent/100.0;
    total = total + (f * tax_rate); //multiple
    count = count + 1;
    return total;
}
