#include <stdio.h>

int factorial(int n ){
    if ( n ==1) return 1 ;
    
    
    return  n*factorial(n-1);

}

int main(){
    
    int val = factorial(5);

    printf("%d", val);
    return 0;
}