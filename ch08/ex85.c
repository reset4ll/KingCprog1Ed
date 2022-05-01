/* Ejercicio 8.5 */

#include <stdio.h>

/* Macro que define la longitud del array */
#define SIZE sizeof(array) / sizeof(array[0]) /* 'Unsigned long' */
/* Número de elementos */
#define N 10

int main(void)
{
	int array[N] = {0};
	int index;

	printf("Introduzca %d números: ", N);
	for (index = 0; index < SIZE; index++)
		scanf("%d", &array[index]);

    /* printf("La longitud del array es: (%lu)\n", SIZE); */
	printf("En orden inverso:     ");
	for (index = SIZE - 1; index >= 0; index--)
		printf(" %d", array[index]);

	printf("\n");

	return 0;
}
