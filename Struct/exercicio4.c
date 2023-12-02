#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char nome[50];// isso e um vertor 
    char telefone[50];
}Contatos;

//O operador * antes de numcontato está sendo usado para acessar o valor apontado pelo ponteiro numcontato.
void addcontatos(Contatos agenda[], int *numcontato)
{
if (*numcontato < 10) // O ponteiro esta se limitando a 10 contatos por simplicidade.
    {
        printf("|-------------------------------------------|\n");
        printf("| Informe o nome do contato: ");
        scanf(" %[^\n]s", agenda[*numcontato].nome);
        printf("| Infome o telefone:");
        scanf(" %s", agenda[*numcontato].telefone);

        (*numcontato)++;
        printf("|-------------------------------------------|\n");
        printf("|      Contato adicionado com sucesso.      |\n");
        printf("|-------------------------------------------|\n");
    }else{
        printf("|Agenda sem espaco, nao e possivel adicionar mais contatos|\n");
    }
    system("pause");
    system("cls");
}

// Função para listar todos os contatos
void listacontatos(Contatos agenda[], int numcontato){

    printf("|--------------------------------------|\n");
    printf("|           lista de contatos          |\n");
    printf("|--------------------------------------|\n");
    for (int i = 0; i < numcontato; i++)
    {
    printf("| Nome: %s\n", agenda[i].nome);
    printf("| Telefone: %s\n", agenda[i].telefone);
    printf("|--------------------------------------|\n");
    }
    system("pause");
    system("cls");
}

void buscarcontato(Contatos agenda[], int numcontato, char buscar[]){

    int encontrados = 0;
    for (int i = 0; i < numcontato; i++)
    {
        if (strcmp(agenda[i].nome, buscar) == 0)
        {
          printf("|--------------------------------------|\n");
          printf("|         Contato encontrado.          |\n");
          printf("|--------------------------------------|\n");
          printf("| nome: %s\n", agenda[i].nome);
          printf("| telefone: %s\n", agenda[i].telefone);
          encontrados = 1;
          break;
        } 
    }
    if (!encontrados)
    {
    printf("|--------------------------------------|\n");
    printf("|        Contato nao encontrado.       |\n");
    printf("|--------------------------------------|\n"); 
    }
    system("pause");
    system("cls");
}

int main(){

    Contatos agenda[10]; // Armazenar até 10 contatos, vetor  com 10 espaços de memoria
    int numcontato = 0;
    int op;
    char buscar[50];
    // criando um menu para chamar os voids
    do
    {
       printf("|-------------------------------------|\n");
       printf("|           Menu de Contatos          |\n");
       printf("|-------------------------------------|\n");
       printf("| Adicionar contatos:             [1] |\n");
       printf("| Listar contatos:                [2] |\n");
       printf("| Buscar contato por nome:        [3] |\n");
       printf("| Sair da agenda:                 [0] |\n");
       printf("| Digite a opcao:");
       scanf(" %d", &op);

       switch (op)
       {
       case 1:
        system("cls");
        addcontatos(agenda, &numcontato);// chama o void addcontatos
        break;
       case 2:
        system("cls");
        listacontatos(agenda, numcontato);
        break;
       case 3:
        system("cls");
        printf("|-------------------------------------|\n");
        printf("| Infome o nome:");
        scanf(" %s", &buscar);
        buscarcontato(agenda, numcontato, buscar);
        break;
       case 0:
        system("cls");
        printf("|-------------------------------------|\n");
        printf("|          saindo da agenda           |\n");
        printf("|-------------------------------------|\n");
        break;
       
       default:
       printf("|------------------------------------------|\n");
       printf("| Opcao invalida. Escolha uma opcao valida.|\n ");
       printf("|------------------------------------------|\n");
       system("pause");
       system("cls");
        break;
       }

    } while (op != 0);
    return 0;
}