#include <stdio.h>

long long fatorial(int num) {
    long long resultado = 1;
    for (int i = 2; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

long long combinacao(int n, int p) {
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

int main() {
    int n, p;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de p: ");
    scanf("%d", &p);
    printf("C(%d, %d) = %lld\n", n, p, combinacao(n, p));
    return 0;
}
