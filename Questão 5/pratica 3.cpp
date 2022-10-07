#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int n1, n2, resto;
	float quociente;
	
	printf("Calcular quociente e o resto entre 2 numeros\n\n");
	
	
	printf("Primeiro número: ");
	scanf ("%d", &n1);
	
    printf("Segundo número: ");
	scanf ("%d", &n2);
	
	quociente = (float) n1 / n2;
	resto = n1 % n2;
	
	printf("calcular o quociente entre os numeros %d , %d foi: %f\n\n", n1, n2, quociente);
	printf("O valor calculado é o quociente resto entre os numeros %d , %d foi: %d\n\n", n1, n2, resto);
	
	return 0;
	}
	
