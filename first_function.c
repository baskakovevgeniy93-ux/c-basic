#include <stdio.h>

int max(int a, int b){
    if(a > b){
        return a;
    }
    else if(a < b){
        return b;
    }
}

int main(void){
    
    int a;
    int b;
    int result;

    printf("Enter number: ");
    scanf("%d %d", &a, &b);
    result = max(a,b);

    printf("Result: %d\n", result);

    return 0;
}