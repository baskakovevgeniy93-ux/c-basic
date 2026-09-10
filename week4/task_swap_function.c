#include <stdio.h>
#include <stdlib.h>

void swap_first_last(int *p, int size){
    int temp;
    temp = *p;
    *p = *(p+size - 1);
    *(p+size -1) = temp;
}

int main(void){
    
   int numbers[5];

   for(int i = 0; i < 5; i++){
    printf("Enter number %d: ", i +1);
    scanf("%d", &numbers[i]);
   }

   swap_first_last(numbers,5);

for(int i = 0; i < 5; i++){
   printf("numbers: %d\n", numbers[i]);
}
    return 0;
}