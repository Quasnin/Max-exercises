#include <stdio.h>

char conv(char* str){
    int result=0;
    
    while(*str){
        result=result * 10 +(*str - '0');
        str++;
    }
    return result;
}


int main()
{
    char str[1000];
    scanf("%s",str);
    
    int num = conv(str);
    printf("%d\n",num);
    
    return 0;
}
