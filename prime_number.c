#include <stdio.h>
#include <math.h>


int prime_number(int num){
    int count;
    for (int i=1;i<num;i++){
        // ITERATING EVERY POOSIBLE VALUE BELOW THE NUMBER AND CHECK IT
        if (num%i ==0){
            count++;
        }
    }
    return count;
}

int optimized_prime(int num){
    if (num==1){
        return 1;
        }
    if ( num ==2){
        return 1;
    }
    if (num%2 ==0){
        return 2;
    }

    for (int i =3 ; i<=sqrt(num);i+=2){
        if (num % i==0){
            return 2;
        }
    
    }
    return 1;
}

int main(){
    int num;
    printf("enter the number to check :");
    scanf("%d",&num );
    int result=optimized_prime(num);

    if (result==1){
        printf("its  prime number ");
    }else{
        printf("its not prime number");
    }
    return 0;
}