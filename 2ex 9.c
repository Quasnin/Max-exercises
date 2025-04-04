#include <stdio.h>
#include <stdbool.h>

bool regular(int n) {
    if (n <= 0) return false;
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;
    return n == 1;
}

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (regular(num)){
        printf("%d éregular.\n", num);
    } 
    else{
        printf("%d não é regular.\n", num);
    }
    return 0;
}
