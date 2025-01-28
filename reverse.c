#include <stdio.h>

void recursiveprint(int i ){
    if (i==0) return;
    printf("%d\n",i);

    recursiveprint(i-1);  
    }

int main(){
    recursiveprint(10);
    return 0;
}