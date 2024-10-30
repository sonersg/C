#include <stdio.h>

int main()
{
    int ages[5] = {22, 33, 44};

    ages[3] = 55;

    printf("%ld", ages[4]); // 0
    
    return 0;
}
