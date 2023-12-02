#include <stdio.h>
#include <stdlib.h>


int main (){
    int matriz[3][3]={{1,2,3},
                      {4,5,6},
                      {7,8,9}};
    int i, j;

    printf("imprimindo primeira linha da matriz:\n");
    for ( i = 0; i < 3; i++)
    {
        printf(" %d", matriz[0][i]);
    }
    printf("\nimprimindo toda a matriz\n");
    for ( i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
        {
            printf(" %d", matriz[j][i]);
        }
    }
    
}