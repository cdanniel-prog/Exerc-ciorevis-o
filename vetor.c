#include <stdio.h>

int main(){
    int vetor[] = {1, 7, 3, 9, 2, 8, 10, 4};
    int numero;
    int encontrado = 0;
    printf("Digite um número para ser buscado no vetor: ");
    scanf("%i", &numero);

    for(int cont = 0; cont <= 8; cont++){
        if(vetor[cont] == numero){
            printf("Elemento encotrado: indice %i", cont);
            encontrado = 1;
            break;
        }
    }
    if(!encontrado){
        printf("Elemento não encotrado: indice -1");
    }

    return 0;
}