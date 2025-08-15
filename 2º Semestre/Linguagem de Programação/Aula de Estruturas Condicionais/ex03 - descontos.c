#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float valor, desconto, valorfinal;
	printf("Desconto de preco\n");
	printf("Entre com um valor : R$");
	scanf("%f", &valor);
	printf("Valores de desconto \n01 - [5%%] \n02 - [8%%] \n03 - [15%%] \n04 - [30%%]\nEscolha um dos valores acima : ");
	scanf("%f", &desconto);
	if(desconto == 1) {
		valorfinal = valor - (valor * 0.05);
		printf("O valor final com desconto de [5%%] e : R$%.2f", valorfinal);
	}
	else if(desconto == 2) {
		valorfinal = valor - (valor * 0.08);
		printf("O valor final com desconto de [8%%] e : R$%.2f", valorfinal);
	}
	else if(desconto == 3) {
		valorfinal = valor - (valor * 0.15);
		printf("O valor final com desconto de [15%%] e : R$%.2f", valorfinal);
	}
	else if(desconto == 4) {
		valorfinal = valor - (valor * 0.30);
		printf("O valor final com desconto de [30%%] e : R$%.2f", valorfinal);
	}
	else {
		printf("Erro, opcao invalida, tente novamente...");
		return 0;
	}
	return 0;
}