#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int opcao, desconto;
	float prova1, prova2, trabalho1, trabalho2, media1, media2, mediafinal, rec, valor, valorfinal;
	printf("Menu\n");
	printf("01 - Media FATEC\n02 - Media FATEC[IF/ELSE]\n03 - Descontos\n04 - Descontos [SWITCH]\nEscolha o exercicio desejado : ");
	scanf("%i", &opcao);
	switch(opcao){
		case 1:
			printf("Media FATEC (IF) \n");
			printf("1 Bimestre\n");
			printf("Nota da primeira prova : ");
			scanf("%f", &prova1);
			printf("Nota do primeiro trabalho : ");
			scanf("%f", &trabalho1);
			media1 = ((prova1 * 0.7) + (trabalho1 * 0.3));
			printf("2 Bimestre\n");
			printf("Nota da segunda prova : ");
			scanf("%f", &prova2);
			printf("Nota do segundo trabalho : ");
			scanf("%f", &trabalho2);
			media2 = ((prova2 * 0.6) + (trabalho2 * 0.4));
			mediafinal = (media1 + media2) / 2;
			if(mediafinal >= 6) {
				printf("O aluno foi aprovado, com media final de : %.2f", mediafinal);
			}
			if(mediafinal < 6) {
				printf("O aluno foi reprovado, com media final de : %.2f", mediafinal);
				printf("\nE necessario fazer a prova de recuperacao...");
				printf("\nQual foi a nota da prova de recupercao? : ");
				scanf("%f", &rec);
				mediafinal = (mediafinal + rec) / 2;
				printf("Com a nota da recuperacao a nota final foi de : %f", mediafinal);
				if(mediafinal >= 6) {
					printf("\nO aluno foi aprovado apos a recuperacao");
				}
				if(mediafinal < 6) {
					printf("\nO aluno foi reprovado mesmo apos a recuperacao");
				}
			}
			break;
		case 2:
			printf("Media FATEC (IF) \n");
			printf("1 Bimestre\n");
			printf("Nota da primeira prova : ");
			scanf("%f", &prova1);
			printf("Nota do primeiro trabalho : ");
			scanf("%f", &trabalho1);
			media1 = ((prova1 * 0.7) + (trabalho1 * 0.3));
			printf("2 Bimestre\n");
			printf("Nota da segunda prova : ");
			scanf("%f", &prova2);
			printf("Nota do segundo trabalho : ");
			scanf("%f", &trabalho2);
			media2 = ((prova2 * 0.6) + (trabalho2 * 0.4));
			mediafinal = (media1 + media2) / 2;
			if(mediafinal >= 6) {
				printf("O aluno foi aprovado, com media final de : %.2f", mediafinal);
			}
			else {
				printf("O aluno foi reprovado, com media final de : %.2f", mediafinal);
				printf("\nE necessario fazer a prova de recuperacao...");
				printf("\nQual foi a nota da prova de recupercao? : ");
				scanf("%f", &rec);
				mediafinal = (mediafinal + rec) / 2;
				printf("Com a nota da recuperacao a nota final foi de : %f", mediafinal);
				if(mediafinal >= 6) {
					printf("\nO aluno foi aprovado apos a recuperacao");
				}
				else {
					printf("\nO aluno foi reprovado mesmo apos a recuperacao");
				}
			}
			break;
		case 3:
			printf("Desconto de preco\n");
			printf("Entre com um valor : R$");
			scanf("%f", &valor);
			printf("Valores de desconto \n01 - [5%%] \n02 - [8%%] \n03 - [15%%] \n04 - [30%%]\nEscolha um dos valores acima : ");
			scanf("%i", &desconto);
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
			break;
		case 4:
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
			break;
		default:
			printf("Erro, opcao invalida...");
	}
	return 0;
}