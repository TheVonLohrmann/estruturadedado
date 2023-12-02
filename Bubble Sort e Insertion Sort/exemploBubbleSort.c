#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[5][50], aux[50];
    int i, n;

    for ( i = 0; i <= 4; i++){
        printf("Digite a letra: ", i+1);
        scanf("%s", &str[i]);
    }
    for ( n = 0; n <= 4; n++){
        for ( i = 0; i <= 3; i++){
            if (strcmp(str[i], str[i+1]) > 0){
                strcpy(aux, str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], aux);
            }
        }
    }
    for ( i = 0; i <= 4; i++){
        printf("%s \t", str[i]);
    }
    system("pause");
}