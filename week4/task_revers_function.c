#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *p, int size){
    int left = 0;
    int right = size -1;
    int temp;
    while(left < right){
    temp = *(p+left);
    *(p+left) = *(p+right);
    *(p+right) = temp;
    left++;
    right--;
    }
}

int main(void){
    
   int numbers[5];

   for(int i = 0; i < 5; i++){
    printf("Enter number %d: ", i +1);
    scanf("%d", &numbers[i]);
   }

   reverse_array(numbers,5);

for(int i = 0; i < 5; i++){
   printf("numbers: %d\n", numbers[i]);
}
    return 0;
}