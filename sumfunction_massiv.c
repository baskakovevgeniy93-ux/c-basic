#include <stdio.h>

int sum_massiv(int numbers[], int size){
        int sum = 0;
        for(int i = 0; i<size; i++){
           sum = sum + numbers[i];
        }
     
    return sum;
    }

int main(void){
    
    int numbers[5];
    
     for(int i = 0; i<5; i++){
       printf("Enter number %d: ", i+1);
       scanf("%d", &numbers[i]);
    }
    
    int result = sum_massiv(numbers, 5);

     printf("sum = %d\n", result);

    return 0;
}