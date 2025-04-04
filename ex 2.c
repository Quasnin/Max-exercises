#include <stdio.h>

void linha2(char k){
    for (int i = 0; i < 25; i++) {
        printf("%c",k);
    }
    printf("\n");
}

int main(){
    linha2('*');
    printf("CMP 1048\n");
    linha2('@');
    printf("Técnicas de Programação\n");
    linha2('+');

    return 0;
}
