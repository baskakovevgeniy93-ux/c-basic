#include <stdio.h>
#include <stdlib.h>

int count_positive(int *p, int size){
    int count = 0;
    for(int i = 0; i < size; i++){
       if(*(p+i) > 0){
         count ++;
       }
   }
   return count;
}

int main(void){
    
   int numbers[5];

   for(int i = 0; i < 5; i++){
    printf("Enter number %d: ", i +1);
    scanf("%d", &numbers[i]);
   }

   int result = count_positive(numbers,5);

   printf("positive nembers: %d\n", result);

    return 0;
}