#include <stdio.h>

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // printf("%d  ", array[i]);
        printf("%c  ", array[i]);
    }
}

void sortArray(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_max = array[i];
        int indx = 0;

        for (int j = i; j < size; j++)
        {
            // 22, 3, 233, 3, 434, 43, 22

            if (array[j] < min_max)
            {
                min_max = array[j];
                indx = j;

                array[indx] = array[i];
                array[i] = min_max;
            }
        }
    }
    printArray(array, size);
}

int main()
{
    // int array[] = {22, 3, 233, 3, 434, 43, 22, 2, 3, 1, -2};
    int array[] = {'F', 'D', 'F', 'R', 'T', 'X', 'M'};

    int size = sizeof(array) / sizeof(array[0]);

    sortArray(array, size);

    return 0;
}
