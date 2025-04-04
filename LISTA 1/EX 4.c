#include <stdio.h>

void desenha_retangulo(int linhas, int colunas, char c) {
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(i == 0 || i == linhas - 1 || j == 0 || j == colunas - 1) {
                printf("%c",c);
            } 
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int altura, largura;
    char c;

    printf("escreva altura e largura:\n");
    scanf("%d%d",&altura,&largura);
    printf("escreva o caractere desejavel:\n");
    scanf(" %c",&c);
    desenha_retangulo(altura, largura, c);

    return 0;
}
