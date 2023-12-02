/*
Gerar um vetor de 5 números aleatórios e implementar o
método de busca sequencial para encontrar um dos números
gerados e a sua posição no vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vet[5], i, n;
    //Gerando os números diferentes com a função rand
    srand(time(NULL));
    for ( i = 0; i < 5; i++)
        vet[i]=rand() % 1001;
        printf("Vetor gerado: \n");
    for ( i = 0; i < 5; i++)
        printf("%d\t", vet[i]);
    
    printf("\n\nQual é o valor que deseja buscar? ");
    scanf("%d", &n);
    // Implementado o metódo de busca
    for ( i = 0; i < 5; i++)
    if (vet[i]==n){
        printf("%d ocorre na posicao %d do vetor. \n", n,i);
        return 0;
    }
}