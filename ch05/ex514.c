/* Ejercicio 5.14 */

#include <stdio.h>

int main(void)
{
	int numero, resultado;

	printf("Introduzca la nota en número; ");
	scanf("%3d", &numero);

	/* Error? */
	if (numero >= 100 || numero <= 0) {
		printf("Error, pruebe otra vez\n");
		return -1;
	}

	/* Algorítmo para la evaluación -> dígito de la decena */
	resultado = numero / 10;

	/* Test */
	switch (resultado) {

	case 9: printf("La letra de la nota es A\n"); break;

	case 8: printf("La letra de la nota es B\n"); break;

	case 7: printf("La letra de la nota es C\n"); break;

	case 6: printf("La letra de la nota es D\n"); break;

	case 5: case 4: case 3: case 2: case 1:
		printf("La letra de la nota es F\n"); break;

	/* ¿Nota por debajo de 10? */
	default: printf("La letra de la nota es F\n"); break;

	}

	return 0;
}
