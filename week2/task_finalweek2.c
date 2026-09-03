#include <stdio.h>

int main()
{
    int secret = 7;
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n != secret){
        scanf("%d", &n);
        if(n < secret){
            printf("Too low\n");
        }
        else if(n > secret){
            printf("Too high\n");
        }
        
    }
       
    printf("Correct! %d\n", secret);

    return 0;
}