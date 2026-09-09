#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    char original[100];
    
    printf("Enter text: ");
    fgets(original,100,stdin);
    
     char *copy = malloc(100 * sizeof(char));
    
   int i =0;

   while(original[i] != '\0'){
    copy[i] = original[i];
    i++;
   }

   copy[i] = '\0';

   printf("Copyed text: %s", copy);

    free(copy);

    return 0;
}