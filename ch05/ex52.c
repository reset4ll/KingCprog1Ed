/* Ejercicio 5.2 */

#include <stdio.h>

int main(void)
{
	/* apartado (a) */
	int ia = 10, ja = 5;
	printf("%d\n", !ia < ja);

	/* apartado (b) */
	int ib = 2, jb = 1;
	printf("%d\n", !!ib + !jb);

	/* apartado (c) */
	int ic = 5, jc = 0, kc = -5;
	printf("%d\n", ic && jc || kc);

	/* apartado (d) */
	int id = 1, jd = 2, kd =3;
	printf("%d\n", id < jd || kd);

	return 0;
}

/* Imprime todo a (1) -- True */
