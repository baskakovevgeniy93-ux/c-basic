#include <stdio.h>

int main()
{
    int number1;
    int number2;
    int number3;

    printf ("Enter the number: ");
    scanf ("%d %d %d", &number1, &number2, &number3);
    
    if (number1 > number2 && number1 > number3 ){
        printf( "%d\n ", number1);
    }
    else if(number2 > number1 && number2 > number3) {
        printf("%d\n", number2);
    }
    else {
        printf("%d\n", number3);
    }

    return 0;
}