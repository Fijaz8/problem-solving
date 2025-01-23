#include <stdio.h>

int gcd(int N1,int N2){
    int min=0 ,i,gcd=1;
    if (N1>N2){
        min=N2;
    }else{
        min=N1;
    }
    //iterating until same and largest divisor 
    for (i=1;i<=min;i++ ){
        if (N1%i==0 && N2%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int main(){
    int N1, N2;


    printf("Enter the two numbers: ");
    scanf("%d ",&N1);
    scanf("%d",&N2);
int GCD = gcd(N1,N2);
printf("the gcd is %d", GCD);

return 0;
}