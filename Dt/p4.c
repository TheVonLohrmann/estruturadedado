#include <stdio.h>

struct Mercadoria {
char nome[100];
float precoCompra;
float precoVenda;
};
int main() {

struct Mercadoria produto;

printf("Informe o nome do produto: ");
scanf("%s", produto.nome);
printf("Informe o preço de compra: ");
scanf("%f", &produto.precoCompra);

produto.precoVenda = produto.precoCompra * 1.25;

printf("Produto: %s\n", produto.nome);
printf("Preço de Compra: R$ %.2f\n", produto.precoCompra);
printf("Preço de Venda: R$ %.2f\n", produto.precoVenda);
return 0;
}