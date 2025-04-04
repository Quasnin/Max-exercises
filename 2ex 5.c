#include <stdio.h>
#include <math.h>

double log_base(double a,double b) {
    double resultado = log(a) / log(b);
    return resultado;
}

int main() {
    double a, b, resultado;
    printf("Digite o log: ");
    scanf("%lf", &a);
    printf("Digite a base: ");
    scanf("%lf", &b);
    resultado = log_base(a, b);
    printf("Log de %lf na base %lf = %lf\n",a,b,resultado);
    return 0;
}
