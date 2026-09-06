#include <stdio.h>
#include <string.h>

int main(void){

    char name[50];
    
    printf("Enter word: ");
    fgets(name,50,stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Length: %zu\n", strlen(name));
    
    return 0;
}