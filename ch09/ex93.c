/* Ejercicio 9.3
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

/* Prototipo */
void mcd(int, int);

int main(void)
{
	int dividendo, divisor;

	printf("Introducir dos números enteros no negativos: \n");
	printf("Introduce el dividendo: ");
	scanf("%d", &dividendo);
	printf("Introducir el divisor: ");
	scanf("%d", &divisor);

	/* Máximo común divisor de dos números enteros */
	mcd(dividendo, divisor);

	return 0;
}

/* Definición de la función */
void mcd(int dividendo, int divisor)
{
	int resto = 0;
	resto = dividendo % divisor; /* Inicialización */
	while (resto != 0) {
		/* Declaración */
		dividendo = divisor;
		divisor = resto;
		resto = dividendo % divisor;
	}
	printf("El mcd de los dos números es: %d\n", divisor);
}
