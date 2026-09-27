#include <stdio.h>

int is_palindrom(int numbers[], int size){
    int left = 0;
    int right = size - 1;
    int result;

    while(left < right){
        if(numbers[left] != numbers[right]){
            return 0;
        }
         left++;
         right--;
    }
     
        return 1;
 }
     

int main(void){

    int numbers[5];
    int size = 5;

   for(int i=0; i < 5; i++){ 
   printf("Enter number %d:", i+1);
   scanf("%d", &numbers[i]);
   }

   int x = is_palindrom(numbers,size);

   printf("Answer: %d\n", x);


    return 0;
}