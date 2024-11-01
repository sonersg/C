#include <stdio.h>

int main()
{
    // POINTER:
    // A "variable-like" reference that holds a memory adress.

    // Some tasks are performed more easily with pointers.

    // * : indirection operator

    // address => the box itself
    // value => stuff inside the box

    // When declaring a variable, "*" says, this variable will hold an address.
    // When reading a variable,   "*" says, gimme the value at the address.

    int age = 44;
    printf("value of age: %d\n", age);
    printf("address of age: %p\n", &age);

    int *pAge = &age; // we assigned the address to a variable "pAge"

    // int *pAge = NULL;
    // pAge = &age;
    // good practice to assign NULL if declaring a pointer

    printf("\naddress of age = value of pAge :\n");
    printf("address of age: %p\n", &age);
    printf("value of pAge : %p\n", pAge);
    printf("value at pAge : %d\n", *pAge);
    // pAge holds address
    // *pAge shows the value at the addres

    printf("\nsize of age (value) : %d\n", sizeof(age));
    printf("size of pAge (address) : %d\n", sizeof(pAge));
    // person is smaller than the house duhh

    return 0;
}
