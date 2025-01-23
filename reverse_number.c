#include <stdio.h>

int main(){
    int num = 45623,reversed=0;
    while (num>0)
    {
        // reversing 
        int temp= num%10;
        reversed = reversed*10+temp;
        num = num/10;

    }
    printf("%d", reversed);
    
}