#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c,cont, i, numero=0, conta=0;
	float vetor[1000], media=0, soma=0;
	
	cont=0;
	printf("digite um numero");
	scanf_s("%d", &numero);
	printf("\n");
	while((cont<1000) && (numero>=0))
{
	vetor[cont]=numero;
	printf("Digite um numero:");
    scanf_s("%d", &numero);
    cont++;
    	printf("\n");
    	
}
if (numero<0){
	soma = cont++ + numero;
	conta = soma / numero;
	media = conta - numero <=0;
	
}
	printf("\n");
		printf("A media dos numros digitados é %d\n",  &media);
		printf("\n");
system ("pause");
	return 0;
}
