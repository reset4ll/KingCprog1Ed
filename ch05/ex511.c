#include <stdio.h>

int main(void)
{
	int n = 0;

	/* El resultado de comparar 10 con la expresión boleana
	 * siempre es verdadera.
	 */
	if(n >= 1 <= 10)
		printf("n is between 1 and 10\n");

	return 0;
}

/* Compila pero tiene comportamiento indefinido. */
