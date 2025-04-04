#include <stdio.h>

long long fatorial(int n) {
    long long resultado = 1;
    for (int i=2; i<=n; i++) {
        resultado *=i;
    }
    return resultado;
}

int main() {
    int num;
    long long resultado;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
        resultado = fatorial(num);
        printf("%lld\n",resultado);
    return 0;
}
