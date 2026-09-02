#include <stdio.h>

int sum_array(int numbers[], int size){
    int sum = 0;
    for(int i =0; i<size; i++){
        sum += numbers[i];
    }
    return sum;
}

double average_array(int numbers[], int size){
    double sum = 0;
    double average;
    for(int i = 0; i<size; i++){
       sum += numbers[i];
    }
     return sum/size;      
}

int find_max(int numbers[], int size){
    int max = numbers[0];
    for(int i = 0; i<size; i++){
       if(max < numbers[i]){
        max = numbers[i];
       }
    }
    return max;
}

int count_even(int numbers[], int size){
        int count = 0;
        for(int i = 0; i<size; i++){
           if(numbers[i] % 2 == 0){
            count += 1;
           }
           
        }
    return count;
}

int main(void){
    
    int numbers[10];
    
     for(int i = 0; i<10; i++){
       printf("Enter number %d: ", i+1);
       scanf("%d", &numbers[i]);
    }
    
    int sum = sum_array(numbers, 10);
    printf("Sum = %d\n", sum);
    
    double average = average_array(numbers, 10);
    printf("Average = %.2f\n", average);

    int max = find_max(numbers, 10);
    printf("Max = %d\n", max);

    int even = count_even(numbers, 10);
    printf("Even = %d\n", even);

    return 0;
}