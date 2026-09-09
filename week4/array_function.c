#include <stdio.h>
#include <stdlib.h>

void double_array(int *p, int size){
    for(int i = 0; i < size; i++){
    printf("%d\n", *(p+i) = *(p+i)*2);
   }
}

int main(void){
    
   int numbers[5];

   for(int i = 0; i < 5; i++){
    scanf("%d", &numbers[i]);
   }

   int *p = numbers;

   double_array(numbers,5);

    return 0;
}