#include <stdio.h>

//05.05.2022 Stuctures 

struct exercise
{
    const char *description;
    float duration;
};

struct meal
{
    const char *ingredients;
    float weight;
};

struct preferences
{
    struct meal food;
    struct exercise exercise;
};

struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};


void label(struct fish f)
{
    printf("Кличка: %s\n",f.name);
    printf("Разновидность: %s\n", f.species);
    printf("%d года, %d зубов\n\n",f.age,f.teeth);
    printf("Давать %.2f %s и разрешать %s на протяжении %.1f часов\n", f.care.food.weight, f.care.food.ingredients, f.care.exercise.description, f.care.exercise.duration);
}

typedef struct 
{
    float tank_capacity;
    int tank_psi;
    const char *suit_material;
}equipment;

typedef struct scuba
{
    const char *name;
    equipment kit; 
}diver;

typedef struct 
{
    const char *name;
    int age;
}turtle;


void badge(diver d)
{
    printf("Кличка: %s Резервуар: %.1f(%i) Костюм: %s\n", d.name,d.kit.tank_capacity,d.kit.tank_psi,d.kit.suit_material);
}

void happy_birhtday(turtle *t){
    t->age = t->age + 1; // equals (*t).age
    (*t).name = "hello";
    printf("%s, %d\n", (*t).name, (*t).age);
}

typedef struct
{
    const char *description;
    float value;
}swag;

typedef struct
{
   swag *swag;
   const char *sequence;
}combination;

typedef struct
{   
    combination numbers;
    const char *make;
}safe;


int main()
{
    struct fish snappy = {"Зубастик", "пиранья", 69, 4, {{"мяса", 0.09}, {"купаться в джакузи", 7.5}}};
    //label(snappy);
    //diver randy = {"Рэнди", {5.5, 3500, "неопрен"}};
    //turtle myrtle = {"Tortilla",99};
    //happy_birhtday(&myrtle);
    //printf("%d", myrtle.age);
    swag gold = {"gold", 1000000.0};
    combination numbers = {&gold, "6502"};
    safe s = {numbers, "Ramacon250"};
    printf("Inside: %s",s.numbers.swag->description); //return "gold"
    return 0;
}
