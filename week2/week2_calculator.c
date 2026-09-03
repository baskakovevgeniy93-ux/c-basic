#include <stdio.h>

int main()
{
    int number1;
    int number2;
    int result;
    char op;

    printf ("Enter: ");
    scanf ("%d %c %d", &number1, &op, &number2);
    
    if (op == '+'){
        result = number1 + number2;
        printf("%d + %d = %d\n", number1, number2, result);
    }
    else if (op == '-'){
        result = number1 - number2;
        printf("%d - %d = %d\n", number1, number2, result);
    }
    else if (op == '*'){
        result = number1 * number2;
        printf("%d * %d = %d\n", number1, number2, result);
    }
    else if (op == '/'){
        if (number2 != 0){
            result = number1 / number2;
            printf("%d / %d = %d\n", number1, number2, result);
        }
        else{
            printf("ERROR\n");
        }
        
    }
    else {
        printf("Invalid operator\n");
    }
    
    return 0;
}