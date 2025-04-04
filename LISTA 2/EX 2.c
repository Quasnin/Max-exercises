#include <stdio.h>
#include <math.h>

double area_circulo(double r) {
    return M_PI * r * r;
}

int main() {
    double r;
    printf("Digite o raio: f");
    scanf("%lf", &r);
    printf("Área do círculo: %lf\n", area_circulo(r));
    return 0;
}
