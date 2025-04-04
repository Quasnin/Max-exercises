#include <stdio.h>


char* mes_do_ano(int num) {
    char *meses[]={
        "Janeiro", "Fevereiro", "Março", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    if(num>=1 && num<= 12){
        return meses[num-1];
    }
    return "ERRO";
}

int main() {
    int num;
    char *resultado;
    printf("Digite o numero do mes: ");
    scanf("%d", &num);
    resultado =mes_do_ano(num);
    
    printf("%s\n", resultado);
    return 0;
}
