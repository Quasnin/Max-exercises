#include <stdio.h>
#include <string.h>

int lexo(const char* str1, const char* str2){
    
    while(*str1 && *str2){
        if(*str1 < *str2) return -1;
        if(*str1 > *str2) return 1;
        str1++;
        str2++;
    }
    
    if(*str1 == '\0' && *str2 == '\0') return 0;
    if(*str1 == '\0') return -1;
    return 1;
}


int main()
{
    char str1[1000], str2[1000];
    
    scanf("%[^\n] %[^\n]", str1, str2);
    int result = lexo(str1, str2);
    
    printf("Resultado: %d\n", result);
    
    return 0;
}
