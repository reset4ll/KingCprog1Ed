/* Ejercicio 5.9 */

#include <stdio.h>

int main(void)
{
	float ingresos, impuestos;

	printf("Introduzca los ingresos: ");
	scanf("%f", &ingresos);

	/* 1% de los ingresos */
	if (ingresos < 750) {
		impuestos = ingresos / 100;
		printf("Los impuestos serán: %.2f $\n", impuestos);
	}

	/* 7.50 + 2% de la cantidad que supere los 750 $ */
	else if (ingresos >= 750 && ingresos < 2250) {
		impuestos = 7.50 + ((ingresos - 750) * 2 / 100);
		printf("Los impuestos serán: %.2f $\n", impuestos);
	}

	/* 37.50 + 3% de la cantidad que supere los 2250 $ */
	else if (ingresos >= 2250 && ingresos < 3750) {
		impuestos = 37.50 + ((ingresos - 2250) * 3 / 100);
		printf("Los impuestos serán: %.2f $\n", impuestos);
	}

	/* 82.50 + 4% de la cantidad que supere los 3750 $ */
	else if (ingresos >= 3750 && ingresos < 5250) {
		impuestos = 82.50 + ((ingresos - 3750) * 4 / 100);
		printf("Los impuestos serán: %.2f $\n", impuestos);
	}

	/* 142.50 + 5% de la cantidad que supere los 5250 $ */
	else if (ingresos >= 5250 && ingresos <= 7000) {
		impuestos = 142.50 + ((ingresos - 5250) * 5 / 100);
		printf("Los impuestos serán: %.2f $\n", impuestos);
	}

	/* 230.00 + 6% de la cantidad que supere los 7000 $ */
	else if (ingresos > 7000) {
		impuestos = 230.00 + ((ingresos - 7000) * 6 / 100);
		printf("Los impuestos serán: %.2f $\n", impuestos);
	}

	return 0;
}
