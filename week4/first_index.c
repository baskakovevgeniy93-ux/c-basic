#include <stdio.h>

int main(void){
    
    int number = 10;
    int *p = &number;
    

    printf("Number: %d\n", number);
    printf("Address: %p\n", (void*)p);
    printf("Value through pointer: %d\n", *p);

    *p = 50;

    printf("Number after change: %d\n", number);

    return 0;
}