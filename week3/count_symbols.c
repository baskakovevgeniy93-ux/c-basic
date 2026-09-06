#include <stdio.h>

int main(void){

    char name[50];
    int count = 0;
    int i = 0;
    

    printf("Enter your name: ");
    scanf("%49s",name);

    while(name[i] != '\0'){
        count++;
        i++;
    }

    printf("%d\n", count);
    
    return 0;
}