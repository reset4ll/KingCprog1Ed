/* Ejercicio 5.5 */

#include <stdio.h>

int main(void)
{
	int number;

	printf("Introduzca un número (0 - 999): ");
	scanf("%d", &number);

	if (number >= 0 && number <= 9) /* 1 dígito */
		printf("El número tiene 1 dígito\n");
	else if (number >= 10 &&  number <= 99)  /* 2 dígitos */
		printf("El número tiene 2 dígitos\n");
	else
		printf("El número tiene 3 dígitos\n");  /* 3 dígitos */

	return 0;
}
