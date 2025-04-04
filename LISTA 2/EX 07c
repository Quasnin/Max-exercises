#include <stdio.h>
#include <stdbool.h>

bool primo(int n) {
    if(n < 2) return false;
    
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    printf("Digite um número inteiro:");
    scanf("%d", &num);
    if (primo(num)) {
        printf("%d é primo.\n", num);
    } 
    else{
        printf("%d não é primo.\n", num);
    }
    return 0;
}
