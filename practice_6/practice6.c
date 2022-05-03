#include <stdio.h>
//03.05.2022
struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
};

void catalog(struct fish f)
{
    printf("%s - это %s с %i зубами. Ему %i года\n", f.name, f.species, f.teeth, f.age);
}

int main()
{
    struct fish snappy = {"Зубастик", "пиранья", 69, 4};
    catalog(snappy);
    return 0;
}