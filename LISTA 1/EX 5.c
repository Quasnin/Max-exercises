#include <stdio.h>

void desenha_retangulo_prenchido(int linhas, int colunas, char c, char h) {
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(i == 0 || i == linhas - 1 || j == 0 || j == colunas - 1) {
                printf("%c",c);
            } 
            else {
                printf("%c",h);
            }
        }
        printf("\n");
    }
}

int main() {
    int altura, largura;
    char c, h;
    
    printf("escreva altura e largura:\n");
    scanf("%d%d",&altura,&largura);
    printf("escreva bordas e interior:\n");
    scanf(" %c",&c);
    scanf(" %c", &h);
    desenha_retangulo_prenchido(altura, largura, c, h);

    return 0;
}
