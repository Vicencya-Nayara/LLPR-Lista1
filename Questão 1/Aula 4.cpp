#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, n3, media;
	
	printf("Calcular a m�dia de 3 n�meros\n\n");
	
	printf("Primeiro n�mero");
	scanf ("%f", &n1);
	
    printf("Segundo n�mero");
	scanf ("%f", &n2);
	    
	printf("terceiro n�mero");
	scanf ("%f", &n3);
	
	media = (n1 + n2 + n3)/3;
	
	printf("O valor calculado da m�dia entre os numeros foi %.2f, %.2f e %.2f foi: %.2f", n1, n2, n3, media);
	        
	return 0;       
	        
}
