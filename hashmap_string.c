#include <stdio.h>
#include <string.h>
int main(){
    int hash[256] = {0};
    char strings[]="hello world";
    int length=strlen(strings);
    //storing hashing value
    for (int i=0;i<length;i++){
        hash[strings[i]]++;
    }
    
    for (int i=0;i<256;i++){
        if (hash[i]>0){
    printf("Frequency of '%c': %d\n", i , hash[i]);
        }
    }

    return 0;
}