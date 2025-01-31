#include <stdio.h>
#include <string.h>
int main(){

    int arr[10]={2,2,5,20,5,5,9,8,8,2};
    int max_element = 10;
    int hash[max_element + 1];
    int length=sizeof(arr)/sizeof(arr[0]);
    memset(hash, 0, sizeof(hash));
    // for (int i =0;i<length;i++){
    //     hash[arr[i]]=0;
    // }
    
    for (int i = 0; i < length; i++) {
        hash[arr[i]]++;
    }
    
    int smallest = length;
    int smallest_value = 0;
    int largest_value = 0;
    int largest = 0;
    for (int j = 1; j <= max_element; j++)
    {   

        if (hash[j]>0){
            // printf("value  %d is %d\n",j,hash[j]);
        if (smallest > hash[j]) {
                smallest = hash[j];
                smallest_value = j;
            }
        if (largest<hash[j]){
            largest=hash[j];
            largest_value=j;
        }

    }
    }
    
    printf("higher frequency %d element %d\n ",largest,largest_value);
    printf("lower  frequency %d element %d \n",smallest,smallest_value);


    return 0;


}