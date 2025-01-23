#include <stdio.h>

int main(){
    int number=45654,reverse=0,num=number;

    // reversing the number
    while (num>0){
        int temp = num%10;
        reverse=reverse*10+temp;
        num=num/10;        
    }

    //checking both reversed and given number are same
    if (number == reverse){
        printf("given number is palindrome");

    }else{
        printf("given number is not a pallindrome");
    }

    return 0;
}