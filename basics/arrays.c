#include <stdio.h>

int main()
{
    int ages[5] = {22, 33, 44};

    ages[3] = 55;

    printf("%d\n", ages[4]); // 0

    for (int i = 0; i < sizeof(ages) / sizeof(ages[0]); i++)
    {
        printf("%d ", ages[i]);
    }
    
    return 0;
}
