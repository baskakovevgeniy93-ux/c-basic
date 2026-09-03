#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
       if(i % 2 == 0){
        sum  = sum + i;
       }
      
    }

    printf("Sum: %d\n", sum);

    return 0;
}