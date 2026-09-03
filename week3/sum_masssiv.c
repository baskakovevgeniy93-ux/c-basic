#include <stdio.h>

int main(void){
    
    int sum = 0;
    int numbers[5];

    for(int i = 0; i<5; i++){
       printf("Enter numbers %d: ", i+1);
       scanf("%d", &numbers[i]);
    }

    for(int i=0; i<5; i++){
        sum = sum + numbers[i];
    }
    printf("Sum = %d\n", sum);

    return 0;
}