

#include <stdio.h>

void hello(int count, char name[]){

    for(int i = 0; i < count; i++){
        printf("Hello %s \n", name);
    }
}

int main(){

    char name[] = "Soenr";
    int count = 3;

    hello(count, name);
    
    return 0;
}
