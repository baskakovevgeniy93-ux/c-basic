#include <stdio.h>

int main(void){
    
    int numbers[5];
    
     for(int i = 0; i<5; i++){
       printf("Enter number %d: ", i+1);
       scanf("%d", &numbers[i]);
    }

    int max = numbers[0];

     for(int i = 0; i<5; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
     }

     printf("Max = %d\n", max);

    return 0;
}