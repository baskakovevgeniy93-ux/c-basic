#include <stdio.h>

int main(void){
    
    int numbers[5];

    for(int i=0; i<5; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);   
    }
    
    for(int i=0; i<5; i++){
        printf("%d\n", numbers[i]);
    }

    return 0;
}