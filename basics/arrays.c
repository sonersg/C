#include <stdio.h>

int main()
{
    int ages[5] = {22, 33, 44};

    ages[3] = 55;

    printf("%ld", ages[4]); // 0

    for (int i = 0; i < sizeof(ages) / sizeof(ages[0]); i++)
    {
        printf("%.2ld\n", ages[i]);
    }
    
    return 0;
}
