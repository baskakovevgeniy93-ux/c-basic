#include <stdio.h>

double average_array(int numbers[], int size){
        double sum = 0;
        double average;
        for(int i = 0; i<size; i++){
           sum = sum + numbers[i];
           
        }
        average = sum/size;
    return average;
    }

int main(void){
    
    int numbers[5];
    
     for(int i = 0; i<5; i++){
       printf("Enter number %d: ", i+1);
       scanf("%d", &numbers[i]);
    }
    
    double result = average_array(numbers, 5);

     printf("Average = %.2f\n", result);

    return 0;
}