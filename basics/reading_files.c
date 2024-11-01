#include <stdio.h>

int main()
{
    // FILE *pF = fopen("test.txt", "w");
    // FILE *pF = fopen("test.txt", "a");
    FILE *pF = fopen("C:\\Users\\Soner\\Desktop\\test.txt", "r");

    char buffer[255];

    // fgets(buffer, 255, pF);
    // printf("%s", buffer);

    if(pF == NULL) printf("\nUnable to open the file!\n");
    else 
    {
        while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }
    
    fclose(pF);

    // if(remove("C:\\Users\\Soner\\Desktop\\test.txt") == 0) printf("\nThe file deleted successfully!");
    // else printf("\nThe file was't deleted!");
    
    return 0;
}
