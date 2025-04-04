#include <stdio.h>

double calcular_media(double n1, double n2, double n3) {
    double media = (n1 + n2 + n3) / 3.0;
    return media;
}

int main() {
    double n1, n2, n3, resultado;
    printf("Digite três notas:");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    resultado = calcular_media(n1, n2, n3);
    printf("Média: %lf\n", resultado);
    return 0;
}
