/* Ejercicio 4.5 */

#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("Introduzca un número de 3 dígitos: ");
	scanf("%1d%1d%1d", &num1, &num2, &num3);

	/* Imprime los números a la inversa */
	printf("El número introducido a la inversa es: %d%d%d\n", num3, num2, num1);

	return 0;
}
