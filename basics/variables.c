#include <stdio.h>

int main(){

    int age = 27;
    float gpa = 2.21;
    char grade = 'C';
    char name[] = "Soner"; // array of characters
    // Strings are objects. C isn't object-oriented.

    printf("Hello %s!\n", name);
    printf("You aren't %d years old!\n", age);
    printf("Your gpa is %f !\n", gpa);
    printf("%c", grade);
    
    return 0;
}