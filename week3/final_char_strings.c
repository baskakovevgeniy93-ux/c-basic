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

int replace_spaces(char text[]){
    int count = 0;
    int i =0;
    while(text[i]!='\0'){
        if(text[i] == ' '){
            text[i] = '_';
        }
        i++;
    }
return 0;
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
    
    return 0;
}