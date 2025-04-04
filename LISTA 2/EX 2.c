#include <stdio.h>
#include <math.h>

double volume_esfera(double r) {
    double volume = (4.0 / 3.0) * M_PI * pow(r, 3);
    return volume;
}

int main() {
    double r, resultado;
    printf("Digite o raio:");
    scanf("%lf", &r);
    resultado = volume_esfera(r);
    printf("Volume da esfera: %lf\n", resultado);
    return 0;
}
