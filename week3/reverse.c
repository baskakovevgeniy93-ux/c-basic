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