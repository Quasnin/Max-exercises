#include <stdio.h>

int func(char c){
    if(!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')){
        return 1;
    }
    return 0;
}


int main()
{
    char c;
    scanf(" %c",&c);
    if(func(c)){
        printf("%c é consoante\n", c);
    }
    else{
        printf("%c é vogal\n", c);
    }
    
    return 0;
}