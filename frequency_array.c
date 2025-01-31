#include <stdio.h>

int main(){
    int arr[20]={1,45,1,2,456,4,8,6,4,8,6,2};
    int hash[456]={0};
    int length= sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<length;i++){
        hash[arr[i]]++;
        }
    for (int i=0;i<10;i++){
       if (hash[i]>0){
        printf("%d : %d\n",i,hash[i]);
       }

    }
    printf("%d",hash[1]);
    return 0;
}