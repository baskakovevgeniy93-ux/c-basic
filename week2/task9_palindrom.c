#include <stdio.h>

int main()
{
    int number;
    int reversed = 0;
    int digit;
    int original;

    printf("Enter N: ");
    scanf("%d", &number);
    original = number;
    
    while(number != 0){
        
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;  
    }

    if (original == reversed){
    printf("Palindrom\n");
    }
    else{
        printf("Not palindrom\n");
    }

    return 0;
}