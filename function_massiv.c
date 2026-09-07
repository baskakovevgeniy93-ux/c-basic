#include <stdio.h>

int find_max(int numbers[], int size){
        int max = numbers[0];
        for(int i = 0; i<size; i++){
           if(max < numbers[i]){
              max = numbers[i];
        }
     }
     return max;
    }

int main(void){
    
    int numbers[5];
    
     for(int i = 0; i<5; i++){
       printf("Enter number %d: ", i+1);
       scanf("%d", &numbers[i]);
    }
    
    int result = find_max(numbers, 5);

     printf("Max = %d\n", result);

    return 0;
}