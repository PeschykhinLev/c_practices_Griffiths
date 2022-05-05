#include <stdio.h>
//03.05.2022
struct preferences
{
    const char *food;
    float exercise_hours;
};

struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care; //New name, but the old meaning
};

void catalog(struct fish f)
{
    printf("%s - это %s с %i зубами. Ему %i года\n\n", f.name, f.species, f.teeth, f.age);
}

void label(struct fish f){
    printf("Кличка: %s\nРазновидность: %s\n%d года\n%d зубов\n",f.name,f.species,f.age,f.teeth);
}

int main()
{
    struct fish snappy = {"Зубастик", "пиранья", 69, 4, {"MEAT", 7.6}};
    catalog(snappy);
    label(snappy);
    printf("Зубастик кушает: %s\n", snappy.care.food);
    printf("Тренируется: %.1f", snappy.care.exercise_hours);
    return 0;
}