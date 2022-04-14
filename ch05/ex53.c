/* Ejercicio 5.3 */

#include <stdio.h>

int main(void)
{
	/* apartado (a) */
	int ia = 3, ja = 4, ka = 5;
	printf("%d ", ia < ja || ++ja < ka);
	printf("%d %d %d\n", ia, ja, ka);

	/* apartado (b) */
	int ib = 7, jb = 8, kb = 9;
	printf("%d ", ib - 7 && jb++ < kb);
	printf("%d %d %d\n", ib, jb, kb);

	/* apartado (c) */
	int ic = 7, jc = 8, kc = 9;
	printf("%d ", (ic = jc) || (jc = kc));
	printf("%d %d %d\n", ic, jc, kc);

	/* apartado (d) */
	int id = 1, jd = 1, kd = 1;
	printf("%d ", ++id || ++jd && ++kd);
	printf("%d %d %d\n", id, jd,kd);

	return 0;
}

/** Imprime
 * 1 3 4 5
 * 0 7 8 9
 * 1 8 8 9
 * 1 2 1 1
 */
