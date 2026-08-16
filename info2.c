#include <stdio.h>
int age;
float hight;
char name[10];

int main()
{
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your hight:");
    scanf("%f", &hight);
    printf("your age %d years old\n", age);
    printf("your name is %s\n", name);
    printf("your hight is %f\n", hight);
return 0;
}