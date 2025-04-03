#include <stdio.h>

char* muda(char* str){
    int i=0;
    
    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}


int main()
{
    char str[1000];
    scanf("%[^\n]",str);
    printf("%s\n", muda(str));
    
    return 0;
}
