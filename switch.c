#include <stdio.h>

int main(void){

    int number1;
    int number2;
    int result;
    char op;

    printf ("Enter: ");
    scanf ("%d %c %d", &number1, &op, &number2);
    
    switch(op){
      case'+':
        result = number1 + number2;
        printf("%d + %d = %d\n", number1, number2, result);
    break;

       case'-':
        result = number1 - number2;
        printf("%d - %d = %d\n", number1, number2, result);
    break;

       case'*':
        result = number1 * number2;
        printf("%d * %d = %d\n", number1, number2, result);
    break;

        case'/':
           if (number2 != 0){
            result = number1 / number2;
            printf("%d / %d = %d\n", number1, number2, result);
            }
        else{
            printf("ERROR\n");
        }
        break;

    default:
        printf("Invalid operator\n");
    }
    
    return 0;
}