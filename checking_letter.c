#include <stdio.h>

int main(void){

    char c;

    printf ("Enter char: ");
    scanf (" %c", &c);
    
if(c == 'a' || c == 'e' || c == 'i'|| c == 'o'||c == 'u'){
    printf(" %c Vowel\n",c);
    }
    else{
    printf(" %c consonant\n",c);
    }
    

    return 0;
}