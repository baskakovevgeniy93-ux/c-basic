#include <stdio.h>

int main(void){

    int hight;
    int width;

    printf("Enter Hight: ");
    scanf("%d",&hight);

    printf("Enter width: ");
    scanf("%d", &width);

    for(int i= 1; i<=hight; i++)
    {
       for(int j = 1; j<=width; j++){
        printf("*");
       }
       printf("\n");
    }
    return 0;
}