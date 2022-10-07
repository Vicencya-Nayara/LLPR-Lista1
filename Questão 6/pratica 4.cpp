#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int n1 , n2, n3 ,soma, subtracao;
	
	printf("Calcular a soma e depois subtrair do resultado entre os numeros \n\n");
	
	printf("Primeiro numero: ");
	scanf ("%d", &n1);
	
	printf("Segundo numero: ");
	scanf ("%d", &n2);
	
	soma = n1 +n2;
	
	printf("Informar um numero e subtraia da soma calculada\n\n");
	scanf("%d", &n3 );
	
	subtracao = soma - n3;
	
	printf ("o resultado da subtracao calculada foi: %d", subtracao);
	
	return 0;
	
	}
	
