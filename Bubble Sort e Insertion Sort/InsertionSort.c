#include <stdio.h>
#include <stdlib.h>


void insertionsort(int *lista, int tamnho)// lista e o vetor com os item desordenados, e o tamanho e literal o tamanho
{
    int i;// controla o laço principal
    int j;// controla o laço interno
    int aux;// item de comparação 

    for ( i = 0; i < tamnho-1; i++)
    {
       if(lista[i]>lista[i+1])
       {
          aux=lista[i+1];
          lista[i+1]=lista[i]; 
          lista[i]=aux;
          j=i-1;
          while (j>=0)
          {
            if (aux<lista[j])
            {
                lista[j+1]=lista;
                lista[j]=aux;
            }else{
                break;
            }
            j=j-1;
          }
       }
    }
}