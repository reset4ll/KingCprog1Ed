/* Ejercicio 9.2 */

#include <stdio.h>

int x, y, n;

/* Prototipo */
int check(int, int, int);

int main(void)
{
	printf("Introducir un número: ");
	scanf("%d", &n);
	printf("Introducir dos números más: ");
	scanf("%d%d", &x, &y);

	/* Llamada a la función check() */
	check(x, y, n);

    /* Test */
	if (check(x, y, n))
		printf("Están comprendidos\n");
	else
		printf("No están comprendidos\n");

	return 0;
}

/* Definición de la función */
int check(int x, int y, int n)
{
    /* Idioms para comprobar que un número está en
     * el rango de (0 - n)
     */
	if ((0 <= x && x < n) && (0 <= y && y < n))
		return 1;
	else
		return 0;
}
