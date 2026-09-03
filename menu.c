#include <stdio.h>

int main(void){

    int number;

    printf ("1.Sum\n2.Max\n3.Exit\n");
    scanf ("%d", &number);
    
    switch(number){
      case 1:
        printf("Sum selected\n");
    break;

       case 2:
        printf("Max selected\n");
    break;

       case 3:
        printf("Exit selected\n");
    break;

    default:
        printf("Invalid operator\n");
    }
    
    return 0;
}