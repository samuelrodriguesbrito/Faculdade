#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float prova1, prova2, trabalho1, trabalho2, media1, media2, mediafinal, rec;
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
	return 0;
}