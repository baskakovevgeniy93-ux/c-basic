#include <stdio.h>

int main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if(number > 0){
        printf("POSITIVE\n");
    }
    else if(number < 0){
        printf("NEGATIVE\n");
    }
    else{
        printf("ZERO\n");
    }

    return 0;
}