#include <stdio.h>
#include <string.h>
int sub(const char *str1, const char *str2){
    int i, j;
    
    for (i = 0; str1[i] != '\0'; i++){
        for (j = 0; str2[j] != '\0'; j++){
            if (str1[i + j] != str2[j]){
                break;
            }
        }
        if (str2[j] == '\0'){
            return i;
        }
    }
    return -1;
}

int main()
{
    char str1[1000], str2[1000];
    
    printf("Digite as duas strings:\n");
    scanf("%[^\n] %[^\n]", str1, str2);

    int indice = sub(str1, str2);
    
    if (indice != -1){
        printf("A substring foi encontrada no índice: %d\n", indice);
    } 
    else{
        printf("A substring não foi encontrada.\n");
    }
    
    return 0;
}
