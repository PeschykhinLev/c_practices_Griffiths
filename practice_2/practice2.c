#include <stdio.h>
#include <string.h>
#include <errno.h>
//#include <stdlib.h>

//25.04.2020 Using pointers to input data

void data_input(){
    char first_name[20];
    char second_name[20];
    puts("Enter ur name and surname: ");
    scanf("%19s %19s", first_name, second_name);
    printf("Your full name: %s %s\n", first_name, second_name);
  
    int age;
    printf("Enter ur age: ");
    scanf("%d", &age);
    printf("Ur age: %d", age);

    char food[5];
    scanf("%4s", food);
    printf("%s", food);
}

void fgets_func(){
    char dessert[15];
    //fgets(dessert, sizeof(dessert), stdin);
    scanf("%s", dessert);
    printf("%s", dessert);
}

void stack_deck(char cards[]){
    cards[0] = cards[1];
    printf("%s", cards);
}

void skip(){
    char masked_raider[] = "HELLO";
    char *jimmy = masked_raider;
    printf("%s\n", masked_raider);
    jimmy[0] = 'Q';
    printf("%s", jimmy);
}

char tracks[][80] = {"my music", "lady gaga", "imagine"};
void find_tracks(char search_for[]) {
    int i;
    for (i = 0; i<3 ; i++){
        if (strstr(tracks[i],search_for))
            printf("Песня номер: %d , название: %s", i, tracks[i]);
    }

}


void print_reverse(char *s){
    size_t len = strlen(s);
    char *t = s + len-1;
    while (t>=s)
    {
        printf("%c\n", *t);
        printf("%p", t);
        t = t-1;
    }
    
}

//27.04.2022 Chapter 3
int file(){
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("data = [");
    while ((scanf("%f,%f,%79[^\n]", &latitude, &longitude, info)) == 3){
        
        if (started)
            printf(",\n");
        else
            started = 1;
        
        if ((latitude < -90.0 || latitude > 90.0)){
            fprintf(stderr, "Incorrect latiture: %f\n", latitude);
            return 2;
        }
        if ((longitude < -180.0 || longitude > 180.0)){
            fprintf(stderr, "Incorrect latiture: %f\n", latitude);
            return 2;
        }
        printf("{latitude: %.2f, longtitude: %.2f, info: '%s'}", latitude, longitude, info);
    }
    puts("\n]");
   return 0;
}

int file_2(){
    char word[10];
    int i = 0;
    while (scanf("%9s", word) == 1){
        i = i + 1;
        if (i % 2){
        fprintf(stdout, "%s\n", word);
        }else{
            fprintf(stderr, "%s\n", word);
        }
    }
    return 0;
}

//28.04.2022
int geo(){
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("data = [");
    while ((scanf("%f,%f,%79[^\n]", &latitude, &longitude, info)) == 3){
        
        if (started)
            printf(",\n");
        else
            started = 1;
        
        if ((latitude < -90.0 || latitude > 90.0)){
            fprintf(stderr, "Incorrect latiture: %f\n", latitude);
            return 2;
        }
        if ((longitude < -180.0 || longitude > 180.0)){
            fprintf(stderr, "Incorrect latiture: %f\n", latitude);
            return 2;
        }
        printf("{latitude: %.2f, longtitude: %.2f, info: '%s'}", latitude, longitude, info);
    }
    puts("\n]");
   return 0;
}
int main() {
    //data_input();
    //fgets_func();
    //char cards_1[] = "JQK";
    //stack_deck(cards_1);
    //skip();

    //char search_for[80];
    //puts("enter: ");
    //fgets(search_for,80,stdin); 
    //search_for[strlen(search_for) - 1] = '\0';
    //find_tracks(search_for);

    //print_reverse("lev");
    geo();
    return 0;
} 