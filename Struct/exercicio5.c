#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char tirulo[50];
    char autor[50];
    char anoP[15];
}Livro;

void addlivros(Livro Biblioteca[], int *Nlivros){
    if(*Nlivros<10){
        printf("|-------------------------------------------|\n");
        printf("| Informe o titulo do livro: ");
        fflush(stdin);
        fgets(Biblioteca->tirulo,50,stdin);
        fflush(stdin);
        printf("| Informe o nome do autor: ");
        scanf(" %[^\n]s", Biblioteca[*Nlivros].autor);
        printf("| Infome o ano de publicacao:");
        scanf(" %s", Biblioteca[*Nlivros].anoP);

        (*Nlivros)++;

        printf("|-------------------------------------------|\n");
        printf("|       Livro adicionado com sucesso.       |\n");
        printf("|-------------------------------------------|\n");
    }else{
        printf("|A biblioteca esta cheia, nao e possivel adicionar mais livros|\n");
    }
    system("pause");
    system("cls");
}

void Listaracervo(Livro Biblioteca[], int Nlivros)// não e um ponteiro
{
    printf("|--------------------------------------|\n");
    printf("|           lista de contatos          |\n");
    printf("|--------------------------------------|\n");
    for (int i = 0; i < Nlivros; i++)
    {
    printf("| Titulo: %s\n", Biblioteca[i].tirulo);
    printf("| Autor: %s\n", Biblioteca[i].autor);
    printf("| Ano publicado: %s\n", Biblioteca[i].anoP);
    printf("|--------------------------------------|\n"); 
    }
    system("pause");
    system("cls");
}

void Buscarlivro(Livro Biblioteca[], int Nlivros, char Bautor[50]){
    int LivrosE = 0;
    for (int i = 0; i < Nlivros; i++)
    {
        if (strcmp(Biblioteca[i].autor, Bautor) == 0){
        printf("|--------------------------------------|\n");
        printf("|         Contato encontrado.          |\n");
        printf("|--------------------------------------|\n");
        printf("| Titulo: %s\n", Biblioteca[i].tirulo);
        printf("| Autor: %s\n", Biblioteca[i].autor);
        printf("| Ano publicado: %s\n", Biblioteca[i].anoP);
        LivrosE = 1;
        break;
        }
    }
    if (!LivrosE)
    {
    printf("|--------------------------------------|\n");
    printf("|         Autor nao encontrado.        |\n");
    printf("|--------------------------------------|\n"); 
    }
    system("pause");
    system("cls");
}


int main(){
    Livro Biblioteca[10];
    int Nlivros = 0;
    char Bautor[50];
    int op;

    do
    {
       printf("|-------------------------------------|\n");
       printf("|         Menu da Biblioteca          |\n");
       printf("|-------------------------------------|\n");
       printf("| Adicionar livro:                [1] |\n");
       printf("| Listar Livros:                  [2] |\n");
       printf("| Buscar Livro por autor:         [3] |\n");
       printf("| Sair da Biblioteca:             [0] |\n");
       printf("| Digite a opcao:");
       scanf(" %d", &op);

       switch (op)
       {
       case 1:
        system("cls");
        addlivros(Biblioteca, &Nlivros);// chama o void addcontatos
        break;
       case 2:
        system("cls");
        Listaracervo(Biblioteca, Nlivros);
        break;
       case 3:
        system("cls");
        printf("|-------------------------------------|\n");
        printf("| Infome o nome:");
        scanf(" %s", &Bautor);
        Buscarlivro(Biblioteca, Nlivros, Bautor);
        break;
       case 0:
        system("cls");
        printf("|-------------------------------------|\n");
        printf("|        saindo da Biblioteca         |\n");
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
