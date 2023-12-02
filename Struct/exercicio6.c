#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N_diciplinas 3

typedef struct 
{
    char nome[50];
    char matricula[50];
    float nota[N_diciplinas];
}Estudante;

float Cmedia(Estudante aluno){
float somarnota = 0;
    for (int i = 0; i < N_diciplinas; i++)
    {
        somarnota += aluno.nota[i];
    }
    return somarnota / N_diciplinas;
}

bool aprovado(Estudante aluno){
    float media = Cmedia(aluno);
    return media >= 7.0;
}

int main(){
    
    Estudante aluno;
    printf("|----------------------------------------------------|\n");
    printf("|                Calculadora de media                |\n");
    printf("|----------------------------------------------------|\n");
    printf("| Informe o nome do estudante: ");
    fflush(stdin);
    fgets(aluno.nome,50,stdin);
    fflush(stdin);
    printf("| Informe a matricula: ");
    fgets(aluno.matricula,50,stdin);
    fflush(stdin);
    printf("|----------------------------------------------------|\n");
    printf("| Informe as notas do estudante em %d disiplinas     |\n", N_diciplinas);
    printf("|----------------------------------------------------|\n");
    for (int i = 0; i < N_diciplinas; i++)
    {
        printf("| Nota da disciplina %d: ", i + 1);
        scanf("%f", &aluno.nota[i]);
    }
    printf("|----------------------------------------------------|\n");
    printf("| Media do estudante: %.2f\n", Cmedia(aluno));
    if (aprovado(aluno))
    {
        printf("| O estudante esta aprovado!\n");
        printf("|----------------------------------------------------|\n");
    } else {
        printf("| O estudante esta reprovado!\n");
        printf("|----------------------------------------------------|\n");
    }

    return 0;

}