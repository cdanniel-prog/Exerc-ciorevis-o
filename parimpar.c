#include<stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    if(numero % 2 == 0){
        printf("Número é Par.");
    }
    else{
        printf("O número é Impar.");
    }
    return 0;
}