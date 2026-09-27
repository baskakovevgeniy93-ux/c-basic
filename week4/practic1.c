#include <stdio.h>

void remove_element(int *p, int *size, int index){
      for(int i = index; i < *size; i++){
        
            *(p+i) = *(p+i+1);
      } 
      (*size)--;
}

int main(void){

    int numbers[5];
    int size = 5;

   for(int i=0; i < 5; i++){ 
   printf("Enter number %d:", i+1);
   scanf("%d", &numbers[i]);
   }

   remove_element(numbers,&size, 2);


   for(int i = 0; i < size; i++){
   printf("numbers: %d\n", numbers[i]);
}

    return 0;
}