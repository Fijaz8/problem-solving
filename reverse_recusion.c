#include <stdio.h>
#include <string.h>

void reverseString(char str[], int i, int j) {
    
    if (i >= j) {
        return;
    }
    
    
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    reverseString(str, i + 1, j - 1);
}


int main(){
    char str[] = "hello world";
    printf("%s",str);
    int j=strlen(str);
    reverseString(str,0,j-1);
  
    printf("Reversed string: %s\n", str);
    return 0;
}