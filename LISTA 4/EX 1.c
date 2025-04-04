#include <stdio.h>

int caracter(const char *vai){
    int cont=0;
    
    while(vai[cont] != '\0'){
        cont++;
    }
    return cont;
}

int main()
{
    char string[1000];
    scanf("%[^\n]", string);
    printf("A string tem %d caracteres.\n", caracter(string));
    
    return 0;
}
