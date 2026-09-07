#include <stdio.h>

int main(void){

    char c;

    printf ("Enter: ");
    scanf (" %c", &c);
    
if(c >= '0' && c<='9'){
    printf(" %c Digit\n",c);
    }
    else if(c>='a' && c<='z'|| c>='A' && c<= 'Z'){
    printf(" %c Letter\n",c);
    }
    else{
        printf("Other\n");
    }
    
    return 0;
}