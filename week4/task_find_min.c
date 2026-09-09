#include <stdio.h>
#include <stdlib.h>

int find_min(int *p, int size){
    int min = *p;
    for(int i = 0; i < size; i++){
       if(min > *(p+1)){
        min = *(p+1);
       }
   }
   return min;
}

int main(void){
    
   int numbers[5];

   for(int i = 0; i < 5; i++){
    printf("Enter number %d: ", i +1);
    scanf("%d", &numbers[i]);
   }

   int result = find_min(numbers,5);

   printf("Min array: %d\n", result);

    return 0;
}