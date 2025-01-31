#include <stdio.h>
#include <string.h>

int main(){
    char vowel[10]={'a','e','i','o','u'};
    char name[] = "fijaz";
    int length=strlen(name);
    for(int i=0;i>length;i++){
    switch (name[i])
    {
    case 'a':
        printf("%c  :vowel",name[i] );
        break;
    
    case 'e':
        printf("%c  :vowel",name[i] );
        break;
    
    case 'i':
        printf("%c  :vowel",name[i] );
        break;
    
    case 'o':
        printf("%c  :vowel",name[i] );
        break;
    
    case 'u':
        printf("%c  :vowel",name[i] );
        break;
    
    default:
        printf("%c  :not vowel",name[i] );
        break;
    }

}
return 0;
}