/* Ejercicio 6.2
 *
 * El teorema de recursión del MCD de dos números enteros números no
 * negativos viene dado por: mcd(a,b) = mcd(b, a % b) siendo % el módulo.
 *
 *   Algoritmo: Euclides(a, b)
 *
 *   if b == 0
 *      then return a;
 *      else return Euclides(b, a mod b);
 *
 */

#include <stdio.h>
int main(void)
{
	int dividendo, divisor, resto;

	printf("Introducir dos números enteros no negativos:\n");
	printf("Introduce el dividendo: ");
	scanf("%d", &dividendo);
	printf("Introduce el divisor: ");
	scanf("%d", &divisor);

	resto = dividendo % divisor; /*  Inicialización */
	while (resto != 0) {  /* Test */
		/* Declaración */
		dividendo = divisor;
		divisor = resto;
		resto = dividendo % divisor;
	}

	printf("El mcd de los dos números es: %d\n", divisor);

	return 0;
}
