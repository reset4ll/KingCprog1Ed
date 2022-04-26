/* Ejercicio 6.6 */

#include <stdio.h>

int main(void)
{
	int i, cuadrado = 0, numero;

	printf("Introduzca un número entero: ");
	scanf("%d", &numero);

    /* Inicio bucle for */
	for (i = 2; cuadrado <= numero; cuadrado = i * i) {

		/* Imprime los cuadrados por debajo del número */
		cuadrado = i * i;
		printf("%d\n", cuadrado);
		i += 2;
	}
	return 0;
}
