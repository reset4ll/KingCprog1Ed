/* Ejercicio 5.4 */

#include <stdio.h>

int main(void)
{
	/* Para i < j */
	int ia = 0, ja = 1;
	printf("%d\n", (ia >= ja) - (ia <= ja)); /* Imprime (-1) */

	/* Para i == j */
	int ib = 0, jb = 0;
	printf("%d\n", (ib >= jb) - (ib <= jb)); /* Imprime (0) */

	/* Para i > j */
	int ic = 1, jc = 0;
	printf("+%d\n", (ic >= jc) - (ic <= jc)); /* Imprime (+1) */

	return 0;
}
