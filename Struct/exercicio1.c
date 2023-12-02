#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct // cria uma struc para armazenar os dados de uma pessoa
{
    char nome[50];
    int idade;
    float altura;
} Pessoa; // define o nome do novo tipo criado

Pessoa SetPessoa(char nome[], int idade, float altura)
{
    Pessoa P; // esse P referencia a ponteiro 
    strcmp(P.nome, nome); // Copia o conteúdo do array 'nome' para o campo 'nome' da estrutura Pessoa
    P.idade = idade;
    P.altura = altura;
    return P; // retorna a struct contendo os dados passados por parametros
}

void ImprimirPessoa(Pessoa p) // declara o parametro como struct
{
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("altura: %.2f\n", p.altura);
}

int main(){

    Pessoa Lucas;
    
    // Declarando os valores 
    printf("|--------------------------------------------|\n");
    printf("|           Declaracao de individuo          |\n");
    printf("|--------------------------------------------|\n");
    printf("| Escreva o nome:");
    fflush(stdin); // é usada para limpar o buffer de entrada do teclado em C.
    fgets(Lucas.nome, 50, stdin);
    //scanf(" %[^\n]s", Lucas.nome); // caracteres não são valores únicos por isso não precisam do &
    printf("| Escreva a idade:");
    scanf(" %d", &Lucas.idade);
    printf("| Escreva a altura:");
    scanf(" %f", &Lucas.altura);

    ImprimirPessoa(Lucas);


}