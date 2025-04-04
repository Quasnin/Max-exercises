#include <stdio.h>
#include <string.h>

int palin(const char *texto){
    
    int inicio=0;
    int fim= strlen(texto)- 1;
    
    while(inicio < fim){
        if(texto[inicio] != texto[fim]){
            return 0;
        }
        inicio++;
        fim--;
    }
    
    return 1;
}


int main()
{
    char texto[100];
    
    scanf(" %[^\n]", texto);
    if(palin(texto)){
        printf("é palindromo\n");
    }
    else{
        printf("não é palindromo\n");
    }

    return 0;
}
