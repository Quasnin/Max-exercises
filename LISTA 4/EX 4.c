#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *unida(const char *str1, const char *str2){
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    char *result = (char*)malloc(len1 + len2);
    
    
    int i=0;
    while(str1[i] != '\0'){
        result[i] = str1[i];
        i++;
    }
    
    int j=0;
    while(str2[j] != '\0'){
        result[i + j] = str2[j];
        j++;
    }
    
    result[i + j] = '\0';
    return result;
}


int main()
{
    char str1[1000], str2[1000];
    
    scanf("%[^\n] %[^\n]",str1,str2);
    char* result = unida(str1, str2);
    
    printf("%s",result);
    
    return 0;
}
