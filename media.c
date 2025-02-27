#include<stdio.h>
int main(){
    int n1, n2, n3, media;
    for (int cont = 1; cont < 4; cont++){
        printf("Digite três números reais: ");
        scanf("%d, %d, %d", &n1, &n2, &n3);
    }
    media = n1 + n2 + n3 / 3;
    printf("A média é: %.1d", media);
    return 0;
}