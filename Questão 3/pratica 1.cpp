#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, media;
	
	printf("Calcular a m�dia de 2 n�meros\n\n");
	
	printf("Primeiro n�mero: ");
	scanf ("%f", &n1);
	
    printf("Segundo n�mero: ");
	scanf ("%f", &n2);
	
	media = (n1 + n2 )/2;
	
	printf("O valor calculado da m�dia entre os numeros foi %.2f e %.2f foi: %.2f", n1, n2, media);
	        
	return 0;       
	        
}

