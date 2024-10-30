#include <stdio.h>
#include <string.h>

int main(){

    int age;
    char name[25];

    // printf("\nHow old are you? \n");
    // scanf("%d", &age);
    // printf("You are %d years old.", age);

    printf("\nWhat is your name? \n");
    fgets(name, 25, stdin);
    // name[strlen(name) - 1] = '\0';
    printf("Your name is %s ", name);

    return 0;
}


