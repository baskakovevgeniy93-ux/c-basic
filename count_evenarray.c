#include <stdio.h>

int count_even(int numbers[], int size){
        int count = 0;
        for(int i = 0; i<size; i++){
           if(numbers[i] % 2 == 0){
            count += 1;
           }
           
        }
    return count;
    }

int main(void){
    
    int numbers[5];
    
     for(int i = 0; i<5; i++){
       printf("Enter number %d: ", i+1);
       scanf("%d", &numbers[i]);
    }
    
    int result = count_even(numbers, 5);

     printf("Even = %d\n", result);

    return 0;
}