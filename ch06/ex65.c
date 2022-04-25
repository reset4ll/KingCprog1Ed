/* Ejercicio 6.5
 *
 * Ejemplo de buble 'do - while'
 *
 */

#include <stdio.h>

int main(void)
{
	int numero, resto = 0;

	printf("Introduce un número entero: ");
	scanf("%d", &numero);

	/* Primer resto fuera del loop */
	resto = numero % 10;
	printf("%d", resto);

	/* Comienzo del bucle */
	do {
		/* Comienzo del bucle */
		numero = numero /  10;
		resto = numero % 10;
		/* Si no colocamos el 'if' nos imprimiría el 0 final.
		 * Cuando lo encuentra, sale del bucle.*/
		if (numero == 0) break;
		/* Imprime los sucesivos restos */
		printf("%d", resto);

	} while (numero != 0);  /* Final del bucle */

	printf("\n");

	return 0;
}
