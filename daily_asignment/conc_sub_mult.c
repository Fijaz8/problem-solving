#include <stdio.h>
int main(){
    int num1;
    int num2,add;
    printf("enter the number");
    scanf("%d  %d",&num1,&num2);
    add=num1+num2;
    int  sub= num1-num2;
    if(sub<0){
        printf("addition: %d\n substraction %d\n",add*-1,sub*-1);

    }
    else{
        printf("addition: %d\n substraction %u\n",add,sub);

    }



    
    return 0;
    }