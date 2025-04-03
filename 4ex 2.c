#include <stdio.h>
#include <string.h>
#include <ctype.h>

void tantan(char *str){
    
    int inicio = 0;
    int fim = strlen(str) - 1;
    
    while(isspace(str[inicio])){
        inicio++;
    }
    while(isspace(str[fim])){
        fim--;
    }
    
    int j=0;
    for(int i=inicio; i<=fim; i++){
        str[j++] = str[i]; 
    }
    str[j] = '\0';
    
} 

int main()
{
    char str[1000];
    scanf("%[^\n]",str);
    tantan(str);
    printf("string alterada:\n%s\n",str);

    return 0;
}
