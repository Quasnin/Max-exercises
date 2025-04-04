#include <stdio.h>

long long fibonacci(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    
    long long a = 0, b = 1, temp;
    for (int i=2; i<=n; i++){
        temp = a + b;
        a=b;
        b=temp;
    }
    return b;
}

int main() {
    int num;
    long long resultado;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (num<0) {
        printf("ERRO - Digite um valor maior ou igual a zero.\n");
    } 
    else{
        resultado = fibonacci(num);
        printf("O termo %d da sequência de Fibonacci é %lld\n", num,resultado);
    }
    return 0;
}
