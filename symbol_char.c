#include <stdio.h>

int main(void){

    char c;

    printf ("Enter char: A");
    scanf (" %c", &c);
    
if(c!='A'){
    printf("invalid operation\n");
    }
    else{
    printf("You entered: %c\n", c);
    }

    return 0;
}