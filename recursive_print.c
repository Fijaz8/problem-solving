#include <stdio.h>

void recursiveprint(int i , int n){
    if (i>n) return;
    printf("%d",i);

    recursiveprint(i+1,n);  
    }

int main(){
    recursiveprint(0,6);
    return 0;
}