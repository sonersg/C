#include <stdio.h>

int main()
{
    // FILE *pF = fopen("test.txt", "w");
    // FILE *pF = fopen("test.txt", "a");
    FILE *pF = fopen("C:\\Users\\Soner\\Desktop\\test.txt", "a");

    fprintf(pF, "\nwho is there");
    
    fclose(pF);

    // if(remove("C:\\Users\\Soner\\Desktop\\test.txt") == 0) printf("\nThe file deleted successfully!");
    // else printf("\nThe file was't deleted!");
    
    return 0;
}
