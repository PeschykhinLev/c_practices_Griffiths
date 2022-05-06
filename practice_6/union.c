#include <stdio.h>

typedef enum
{
    COUNT, POUNDS, PINTS
}unit_of_measures;

typedef union 
{
    short count;
    float weight;
    float volume;
}quantity;

typedef struct
{
    const char *name;
    const char *country;
    quantity amount;
    unit_of_measures units;
}fruit_order;

void display(fruit_order order)
{
    printf("Your order contains: ");

    switch (order.units)
    {
    case PINTS:
        printf("%.1f pints %s\n", order.amount.volume, order.name);
        break;
    case POUNDS:
        printf("%.1f pounds %s\n", order.amount.weight, order.name);
        break;
    default:
        printf("%d %s\n", order.amount.count, order.name);
        break;
    }

    puts("========================================"); // two options to use


    if (order.units == PINTS)
        printf("%.1f pints %s\n", order.amount.volume, order.name);
    else if (order.units == POUNDS)
        printf("%.1f pounds %s\n", order.amount.weight, order.name);
    else
        printf("%d %s\n", order.amount.count, order.name);
}

int main()
{
    fruit_order apples = {"apples", "England", .amount.count = 144, COUNT};
    fruit_order strawberries = {"strawberry", "Spain", .amount.weight = 17.5, POUNDS};
    fruit_order oj = {"orange juice", "USA",.amount.volume = 10.5, PINTS};

    display(apples);
    display(strawberries);
    display(oj);

    return 0;
    
}
