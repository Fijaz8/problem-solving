#include <stdio.h>

int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if (num %27 == 0){
        printf("it is divisiblr by 27");
    }else{
        printf("it is not  divisiblr by 27");
    }
    return 0;
}