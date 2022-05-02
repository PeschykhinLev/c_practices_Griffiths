//21.04.2022 practice 

#include <stdio.h> 
#include <stdlib.h>

void fun_1(){ // Massives

    char card_name[5];
    int val = 0;

    scanf("%2s", card_name);// read  2 elements only
    printf("%s", card_name);
    printf("%c",card_name[2]);
    val = atoi(card_name); // converts text into integer
    printf("%d\n",val);
}


//22.04.2022 practice "Conditions/Switch"
void func_2(){

    char x[] = "yes";
    printf("%s",x);
    x[2] = 'a'; // ' ' - for one symbole
    printf("%s",x);

}

void cards_if(){

    char card_name[3];
    puts("Enter card name: ");
    scanf("%2s", card_name);
    int val = 0;
    if (card_name[0] == 'K'){
        val = 10;
    }else if (card_name[0] == 'Q'){
        val = 10;
    }else if (card_name[0] == 'J'){
        val = 10;
    }else if (card_name[0] == 'A'){
        val = 11;
    }else{
        val = atoi(card_name);
    }
    printf("Card value: %i\n", val);

    if ((val >= 3) && (val <= 6)){
        puts("Счетчик увеличился");
    }else if (val == 10){
        puts("Счетчик уменьшился");
    }  
}

void cards_switch(){ //better readability 

    char card_name[3];
    puts("Enter card name: ");
    scanf("%2s", card_name);
    int val = 0;

    switch (card_name[0])
    {
    case 'K':
    case 'Q':
    case 'J':
        val = 11;
        break;
    case 'A':
        val = 11;
        break;  
    default:
        val = atoi(card_name);
    }

    printf("Card value: %i\n", val);

    if ((val >= 3) && (val <= 6)){
        puts("Счетчик увеличился");
    }else if (val == 10){
        puts("Счетчик уменьшился");
    }  
}

// 23.04.2022

void counter(){

    int counter;
    for(counter = 1; counter < 11; counter++){
        printf("Number: %d\n", counter);
    }

    puts("");

    char letter = 'A';
    while (letter < 'G')
    {
       printf("Letter: %c\n", letter);
       letter++;
    }  

}

/* page 70
 * 1 - 5, 2 - 6, 3 - 8, 4 - 2, 5 - 3; 
*/

void cards_with_while(){

    char card_name[3];
    int count = 0;
    while (card_name[0] != 'X')
    {
        puts("Enter card name: ");
        scanf("%2s", card_name);
        int val = 0;
        switch (card_name[0])
        {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;  
        case 'X':
            continue;
        default:
            val = atoi(card_name);
            if ((val>10) || (val<1)){
                puts("ERROR, BRO!");
                continue;
            }
        }

        if ((val >= 3) && (val <= 6)){
            count++;
        }else if (val == 10){
            count--;
        } 
        printf("Текущий счет: %d\n", count);
    }
}


// Chapter 2 "Pointers"
void go_south_east(int * lat, int * lon){
    *lat = *lat - 1;
    *lon = *lon +1;
}

void fortune_cookie(char msg[]){ 
    printf("Message: %s\n", msg);
    printf("Bytes: %lu\n", sizeof(msg));

}

void skip(char *msg){
    puts(msg+3);
}


int main(){

    //fun1();
    //func_2();
    //cards_if();
    //cards_switch();
    //counter();
    //cards_with_while();

    int latitude = 32;
    int longitude = -64;
    //go_south_east(&latitude, &longitude);
    //printf("Your coordinates: [%d, %d]", latitude, longitude);
    char quote[] = "Cookies remember you!";
    //fortune_cookie(quote);
    char s[] = "hello world";
    char *t = s;
    printf("%s\n", s);
    printf("%s", t);

    int dose[] ={1, 2, 4, 100, 1000};
    //printf("%d\n", *(dose + 4));
    //printf("%p\n", dose + 1);
    //printf("%p", dose + 2);

    char *msg_from_amy = "Не звони мне";
    //skip(msg_from_amy);
    return 0;
}