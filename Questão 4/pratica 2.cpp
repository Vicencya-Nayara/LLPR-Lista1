#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float n1, n2, n3, n4, produto;
	
	printf("Calcular o produto de 4 n�meros\n\n");
	
	printf("Primeiro n�mero: ");
	scanf ("%f", &n1);
	
    printf("Segundo n�mero: ");
	scanf ("%f", &n2);
	    
	printf("terceiro n�mero: ");
	scanf ("%f", &n3);
	
	printf ("Quarto n�mero: ");
	scanf ("%f", &n4);
	
	produto = (n1 * n2 * n3 * n4);
	
	printf("O valor calculado do produto entre os numeros %.2f, %.2f, %.2f e %.2f foi: %.2f", n1, n2, n3, n4, produto);
	        
	return 0;       
	        
}
