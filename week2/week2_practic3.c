#include <stdio.h>

int main()
{
    int number1;
    int number2;

    printf ("Enter the number: ");
    scanf ("%d", &number1);

    printf ("Enter second number: ");
    scanf ("%d", &number2);
    
    if (number1 > number2 ){
        printf("Greater: %d\n ", number1);
    }
    else if(number2 > number1) {
        printf("Greater: %d\n", number2);
    }
    else {
        printf("Equel\n");
    }

    return 0;
}
