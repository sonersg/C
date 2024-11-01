#include <stdio.h>

void sortArray(int array[], int size){

    int dupliganger[] = array;
            
    for (int i = 0; i < size - 1; i++)
    {

        int min_element = array[i];

        for (int j = 0; j < size - 1; j++)
        {
            // 22, 3, 233, 3, 434, 43, 22 

            if(array[j] < min_element) min_element = array[j];

        }   
        dupliganger[i] = min_element;
    }
    
}

int main()
{
    int array[] = {22, 3, 233, 3, 434, 43, 22};
    // char array[] = {'F', 'D', 'F', 'R', 'T', 'X', 'M'};

    int size = sizeof(array)/sizeof(array[0]);

    printf("size of array : %d", size);

    sortArray(array, size);

    return 0;
}