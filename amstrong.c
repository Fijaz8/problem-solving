#include <stdio.h>
#include <math.h>

int amstrong(int num){

    int count=0, val = num, amstg=0;
    // while (val>0){
    //     count++;
    //     val=val/10;
    //} 
    count=  log10(num) + 1;
    val= num;
    
    for (int i =0;i<count;i++){
        //taking last value
        int temp=val%10;
        //taking power of last value + amstrong
        amstg=amstg+pow(temp,count);
        // removing last value
        val= val/10;
        
    }
    return amstg;
}

int main(){
    int number = 153;
    int ams =  amstrong(number);
    printf("%d",ams);
    return 0;

}