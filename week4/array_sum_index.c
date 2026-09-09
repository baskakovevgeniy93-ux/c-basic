#include <stdio.h>
#include <stdlib.h>

int sum_array(int *p, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
       sum += *(p+i);
   }
   return sum;
}

int main(void){
    
   int numbers[5];

   for(int i = 0; i < 5; i++){
    printf("Enter number %d: ", i +1);
    scanf("%d", &numbers[i]);
   }

   sum_array(numbers,5);

   int result = sum_array(numbers,5);

   printf("Sum array: %d\n", result);

    return 0;
}