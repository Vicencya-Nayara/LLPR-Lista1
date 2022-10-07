#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, media;
	
	printf("Calcular a média de 2 números\n\n");
	
	printf("Primeiro número: ");
	scanf ("%f", &n1);
	
    printf("Segundo número: ");
	scanf ("%f", &n2);
	
	media = (n1 + n2 )/2;
	
	printf("O valor calculado da média entre os numeros foi %.2f e %.2f foi: %.2f", n1, n2, media);
	        
	return 0;       
	        
}

