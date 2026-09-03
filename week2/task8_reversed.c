#include <stdio.h>

int main()
{
    int number;
    int reversed = 0;
    int digit;

    printf("Enter N: ");
    scanf("%d", &number);

    while(number != 0){
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
        
    }
    printf("%d\n", reversed);
    
    return 0;
}