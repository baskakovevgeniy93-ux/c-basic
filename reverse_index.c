#include <stdio.h>

void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    
    int number1 = 10;
    int number2 = 20;
    int *a = &number1;
    int *b = &number2;
    

    printf("Number1: %d\n", number1);
    printf("Number2: %d\n", number2);

    swap(&number1,&number2);


    printf("New number1: %d\n", number1);
    printf("New number2: %d\n", number2);

    return 0;
}