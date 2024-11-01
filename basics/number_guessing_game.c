
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     const int MIN = 1;
//     const int MAX = 10;

//     srand(time(0));

//     int answer = (rand() % MAX) + MIN;
//     int guess;

//     do
//     {
//         printf("Guess a number in between %d and %d:\n", MIN, MAX);
//         scanf("%d", &guess);
            
//         if(guess > answer) printf("\nToo High!\n");
//         else if(guess < answer) printf("\nToo Low!\n");
//         else printf("\nCorrect!\n\n");

//     } while (guess != answer);
    
//     return 0;
// }

/////////////////////////////////////////////////
/* ERROR HANDLING AGAINST NON-NUMERICAL INPUTS */
/////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 10;

    srand(time(0));

    int answer = (rand() % MAX) + MIN;
    int guess;

    do
    {
        printf("Guess a number in between %d and %d:\n", MIN, MAX);
        // printf("\n%d\n", scanf("%d", &guess));

        if(scanf("%d", &guess) == 1){
            if(guess > answer) printf("\nToo High!\n");
            else if(guess < answer) printf("\nToo Low!\n");
            else printf("\nCorrect!\n\n");
        }
        else
        {
            printf("Invalid input! Please enter a numeric value.\n");
            while (getchar() != '\n'); // Clear the input buffer
        }

    } while (guess != answer);
    
    return 0;
}
