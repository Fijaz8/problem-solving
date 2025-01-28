#include <stdio.h>
#include <string.h>


int  palindrome(char word[] , int i , int wordlen){

    
    //loop return condition
   if (i >= wordlen) {
        return 1;
    }

    //checking weather iterating value getting zero    
    if (word[i] != word[wordlen]) {
        return 0;
    }



        return palindrome(word,i+1,wordlen-1);


}

int main(){
    char word[]="malayalam";
    int worldlen=strlen(word);
    int val=palindrome(word,0,worldlen-1);
    if (val)
        printf("the word is palindrome");
    else
        printf("not palindrome");

}