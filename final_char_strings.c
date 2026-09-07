#include <stdio.h>
#include <string.h>

int count_a(char text[]){
    int count = 0;
    int i =0;
    while(text[i]!='\0'){
        if(text[i] == 'a' || text[i] == 'A'){
            count++;
        }
        i++;
    }
return count;
}

int count_digits(char text[]){
    int count = 0;
    int i =0;
    while(text[i]!='\0'){
        if(text[i] >= '0' && text[i] <= '9'){
            count++;
        }
        i++;
    }
return count;
}

void replace_spaces(char text[]){
    int i =0;
    while(text[i]!='\0'){
        if(text[i] == ' '){
            text[i] = '_';
        }
        i++;
    }
}

void reverse_string(char text[]){
    int left = 0;
    int right = strlen(text)-1;
    char temp;

    while(left<right){
         temp = text[left];
         text[left] = text[right];
         text[right] = temp;
         left++;
         right--;
    }
}

int main(void){

    char text[100];
    
    printf("Enter text: ");
    fgets(text,100,stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Length: %zu\n", strlen(text));
    printf("A/a count: %d\n",count_a(text));
    printf("Digits: %d\n",count_digits(text));

    replace_spaces(text);
    

    printf("Modified text: %s\n", text);

    reverse_string(text);
    printf("%s\n", text);
    
    return 0;
}