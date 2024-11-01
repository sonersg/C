

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    printf("%d",rand()); // 56453

    int rand_number = (rand() % 6) + 1;

    printf("\n%d", rand_number);
}
