#include <stdio.h>

int main()
{
    // MEMORY:
    // An array of bytes within RAM (street)
    // MEMORY BlOCK:
    // A single unit (byte) within memory (person)
    // MEMORY ADDRESS:
    // The adress of where a memory block is located (house address)

    char a = 'A';
    short b = 'B';
    int c = 1;       // 4 bytes
    double d = 1;    // 8 bytes

    // values inside the addreses (person)
    printf("%c\n", a);
    printf("%c\n", b);
    // addresses  
    printf("%p\n", &a);
    printf("%p\n", &b);
    // size of the addresses (123 mêters cube house)
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));

    return 0;
}
