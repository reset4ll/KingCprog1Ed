/* Ejercicio 5.1 */

#include <stdio.h>

int main(void)
{
	/* apartado (a) */
	int ia = 2, ja = 3;
	int ka = ia * ja == 6;
	printf("%d\n", ka); /* Imprime (1) -- True */

	/* apartado (b) */
	int ib = 5, jb = 10, kb = 1;
	printf("%d\n", kb > ib < jb); /* Imprime (1) -- True */

	/* apartado (c) */
	int ic = 3, jc = 2, kc = 1;
	printf("%d\n", ic < jc == jc < kc); /* Imprime (1) -- True */;

	/* apartado (d) */
	int id = 3, jd = 4, kd = 5;
	printf("%d\n", id % jd + id < kd); /* Imprime (0) -- False */

	return 0;
}
