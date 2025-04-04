#include <stdio.h>

void to_lower_case(char *texto) {
    for (int i=0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] += 32;
        }
    }
}

int main() {
    
    char texto[100];
    scanf(" %[^\n]",texto);
    
    to_lower_case(texto);

    printf("%s\n", texto);

    return 0;
}
