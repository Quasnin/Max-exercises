#include <stdio.h>

int perfeito(int num){
    int soma=0;
    
    for(int i=1; i<num; i++){
        if(num%i==0){
            soma=soma+i;
        }
    }
    if(soma == num){
        return 1;
    }
   
    return 0;
    
}

int main()
{
    int num;
    scanf("%d",&num);
    
    if(perfeito(num)){
        printf("%d é perfeito\n",num);
    }
    else{
        printf("%d não é perfeito\n",num);
    }

    return 0;
}
