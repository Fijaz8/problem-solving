#include <stdio.h>


void fibonacci(int i,int j , int length){
    
    if (length<=0)
        return; 
    printf("%d ",i);

    fibonacci( j, i+j , length-1);
}

int main(){
    int length=8;
    int  j;
    fibonacci(0,1,length);

return 0;
}