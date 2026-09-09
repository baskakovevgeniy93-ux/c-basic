#include <stdio.h>
#include <stdlib.h>

int main(void){
    
   int numbers[5];
   int x = 10;

   for(int i = 0; i < 5; i++){
    scanf("%d", &numbers[i]);
   }

   int *p = numbers;

   for(int i = 0; i < 5; i++){
    printf("%d\n", *(p+i) = *(p+i)*2);
   }

    return 0;
}