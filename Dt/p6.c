#include <stdio.h>
// Função para realizar uma busca sequencial na matriz
int buscaSequencial(int matriz[4][4], int valor, int *linha, int *coluna) {
for (*linha = 0; *linha < 4; (*linha)++) {
for (*coluna = 0; *coluna < 4; (*coluna)++) {
if (matriz[*linha][*coluna] == valor) {
return 1; // Valor encontrado
}
}
}
return 0; // Valor não encontrado
}
int main() {
int matriz[4][4] = {
{45, 32, 83, 95},
{26, 14, 37, 42},
{40, 43, 65, 77},
{74, 79, 48, 55}
};
int valorProcurado;
int linha, coluna;
printf("Informe o valor a ser procurado na matriz: ");
scanf("%d", &valorProcurado);
if (buscaSequencial(matriz, valorProcurado, &linha, &coluna)) {
printf("Valor encontrado na posição (%d, %d).\n", linha, coluna);
} else {
printf("Valor não encontrado na matriz.\n");
}
return 0;
}
