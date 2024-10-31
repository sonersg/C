#include <stdio.h>
#include <string.h>

int main(){

    char cars[][10] = {"car1", "car2", "car3"};

    strcpy(cars[0], "porsche");

    int rows = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < rows; i++)
    {
        printf("%s\n", cars[i]);
    }
    
    return 0;
}

