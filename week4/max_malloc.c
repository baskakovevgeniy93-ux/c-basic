#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int size;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int *numbers = malloc(size * sizeof(int));
    
    for(int i = 0; i<size; i++){
        printf("Enter number %d : ",i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Array: ");

    for(int i = 0; i<size; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    

    int max = numbers[0];

    for(int i = 0; i<size; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
    }

    printf("Max: %d\n", max);

    free(numbers);

    return 0;
}