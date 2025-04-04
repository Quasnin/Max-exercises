#include <stdio.h>

int func(char c){
    if((c=='a' || c=='e' || c=='i' || c=='o' || c=='u')){
        return 1;
    }
    return 0;
}


int main()
{
    char c;
    scanf(" %c",&c);
    if(func(c)){
        printf("%c é vogal minuscula\n", c);
    }
    else{
        printf("%c não é vogal minuscula\n", c);
    }
    
    return 0;
}