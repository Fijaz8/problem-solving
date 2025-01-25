#include <stdio.h>

int main(){
    int num=70,i, divisor[100] , count=0;

    for(i=1;i<num;i++){
        if (num%i==0)
        {
            /* code */
            divisor[count]=i;
            count++;
        }
        
    }
    for (int i=0 ; i<count;i++){
    printf("%d ",divisor[i]);
    }
    return 0;
}