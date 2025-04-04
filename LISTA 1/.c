#include <stdio.h>

void desenha_retangulo_solido(int altura, int largura, char c){
    for(int i=0; i<largura; i++){
        for(int j=0; j<altura; j++){
            printf("%c",c);
        }
        printf("\n");
    }
}



int main()
{
    int altura, largura;
    char c;
    scanf("%d%d",&largura,&altura);
    scanf(" %c",&c);
    desenha_retangulo(altura,largura,c);
    
    return 0;
}
