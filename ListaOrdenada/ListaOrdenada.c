/*
Desafio: implementar o método de Inserir Lista Ordenada, que
cria a lista de forma ordenada, demostrada na figura a seguir.

|  3   8   4   2 |  5 |
*/

#include <stdio.h>
#define MAX_SIZE 100

// função para inserir um elemento em uma lista ordenada
void inserirOrdenado(int lista[], int *tamanho, int elemento){
    int i, j;

    // verificar se a lista esta cheia
    if (*tamanho >= MAX_SIZE)
    {
        printf("A lista esta cheia");
        return;
    }
    
    //Encontrar a posição correta para inserir o elemento
    for ( i = 0; i < *tamanho; i++)
    {
        if (elemento<lista[i])
        {
            for ( j = *tamanho; j > i; j--)
            {
                lista[j] = lista[j-1];
            }
            break;
        }
        
    }
    // inserir o elemento na posição correta 
    lista[i]= elemento;
    (*tamanho)++;
}

int main(){
    int lista[MAX_SIZE];
    int tamanho = 0;

    //inserir elementos na lista ordenada
    inserirOrdenado(lista, &tamanho, 3);
    inserirOrdenado(lista, &tamanho, 8);
    inserirOrdenado(lista, &tamanho, 4);
    inserirOrdenado(lista, &tamanho, 2);
    inserirOrdenado(lista, &tamanho, 5);

    //imprimir a lista ordenada
    printf("lista ordenada: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;

}