/*
Desafio: implementar o método de busca binária para
encontrar um dos números do vetor demostrado na figura a
seguir e a sua posição no vetor.

|  2 |  3 |  4 |  5 |  8 |

*/

#include <stdio.h>
#include <stdlib.h>
// Função de busca binaria
int buscaBinaria(int arr[], int tamanho, int elemento){
    int inicio = 0;
    int fim = tamanho-1;

    while (inicio <= fim)
    {
        int meio = inicio +(fim - inicio)/2;
        // se o elemento estiver no meio, retorne sua posição
        if (arr[meio] == elemento)
        {
            return meio;
        }
        // se o elemento for menor, ignore a metade direito
        if (arr[meio]>elemento)
        {
            fim = meio - 1;
        }
        // se o elemento for maior, ignore a metade esquerda
        else{
            inicio = meio + 1;
        }  
    }
    // Se o elemento não estiver na lista, retorne -1
    return -1;
}

int main(){
    int arr[] = {2, 3, 4, 5, 8};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int elemento = 4;

    int resultado = buscaBinaria(arr, tamanho, elemento);

    if (resultado != -1)
    {
        printf("elemento encontrado na posicao %d. \n", resultado);
    }else
    {
        printf("elemento nao encontrado. \n");
    }
   return 0;
}