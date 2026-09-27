#include <stdio.h>

int second_max(int numbers[], int size){
     int max = numbers[0];
     int second;

     for(int i = 0; i<size; i++){
        if(max<numbers[i]){
            second = max;
            max = numbers[i];
        }
        else if(second < numbers[i]){
               second = numbers[i];
        }    
        }
        return second;
     }
     

int main(void){

    int numbers[5];
    int size = 5;

   for(int i=0; i < 5; i++){ 
   printf("Enter number %d:", i+1);
   scanf("%d", &numbers[i]);
   }

   int max = second_max(numbers,size);

   printf("Second max: %d\n", max);


    return 0;
}