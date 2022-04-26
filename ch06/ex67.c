/* Ejercicio 6.7
 *
 * Algoritmo: Se usa la propiedad de que el cuadrado
 * de un número es la suma de los primeros números
 * impares que lo contienen.
 *
 */

#include <stdio.h>

int main(void)
{
	int i, n, impar = 3, cuadrado = 1;

	/* Imprime una tabla de cuadrado solo con sumas */
    printf("Introduzca el número de entradas en la tabla: ");
	scanf("%d", &n);

	/* Inicio del bucle anidado 'for' */
	for (i = 1; i <= n; i++) {
		for (cuadrado = 1; i <= n; impar += 2) {
			printf("#:%d^%d%10d\n", i, i, cuadrado);
			++i;
			cuadrado += impar;
		}
	}

	return 0;
}
