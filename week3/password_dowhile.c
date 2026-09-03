#include <stdio.h>

int main(void){

    int number;

    printf ("Enter password: ");
    
    do{
        scanf ("%d", &number);
    }
    while(number != 1234);

    return 0;
}