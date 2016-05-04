#include <stdio.h>

double fatorial(double);

double fatorial(double n) {
	if (n < 2)
		return 1;

	double x = n;
	double resultado = 1;

	while (x > 0) {
		resultado = resultado * x;
		x = x - 1;
	}

	return resultado;
}

int main(void) {

	double valor = 0;
	double resultado = 1;

	do {
		printf("Digite o valor: ");
		scanf("%lf", &valor);

		resultado = fatorial(valor);
	
		printf("O fatorial de %lf é: %lf\n", valor, resultado);
	} while (valor != -1);

	return 0;
}
