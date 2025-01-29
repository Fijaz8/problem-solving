#include <stdio.h>

int main(){
    int arr[10]={1,3,4,5,8,9,77,56};

    for(int i =0;i<sizeof(arr);i++){
        
        printf("%d ",arr[i]);
    }


    return 0;
}