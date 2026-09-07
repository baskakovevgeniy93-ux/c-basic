#include <stdio.h>

int main(void){

    char name[50];
    int count = 0;
    int i = 0;
    

    printf("Enter word: ");
    scanf("%49s",name);

    while(name[i] !='\0'){
        if(name[i] == 'a'){
        count++;
        }
        i++;
    }

    printf("Letter a: %d\n", count);
    
    return 0;
}