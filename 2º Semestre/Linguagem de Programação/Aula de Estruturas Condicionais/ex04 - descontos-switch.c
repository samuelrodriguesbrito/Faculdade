#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int desconto;
	float valor;
	printf("Descontos\n");
	printf("Entre com o valor : R$");
	scanf("%f", &valor);
	printf("Tabela de descontos\n01 - [5%%]\n02 - [8%%]\n03 - [15%%]\n04 - [30%%]\nEscolha um dos descontos acima : ");
	scanf("%i", &desconto);
	switch(desconto){
		case 1: 
			valor = valor - (valor * 0.05);
			printf("O valor final com desconto foi de : R$%.2f", valor);
			break;
		case 2:
			valor = valor - (valor * 0.08);
			printf("O valor final com desconto foi de : R$%.2f", valor);
			break;
		case 3: 
			valor = valor - (valor * 0.15);
			printf("O valor final com desconto foi de : R$%.2f", valor);
			break;
		case 4: 
			valor = valor - (valor * 0.30);
			printf("O valor final com desconto foi de : R$%.2f", valor);
			break;
		default: printf("Erro, opcao inexistente...");
	}
	return 0;
}