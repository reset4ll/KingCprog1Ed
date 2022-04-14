/* Ejercicio 5.6 */

#include <stdio.h>

int main(void)
{
	int hora, minutos;

	printf("Introduzca una hora en formato de 24 hrs (hh:mm): ");
	scanf("%2d:%2d", &hora, &minutos);

	/* Entre las 0:00 y 0:59 se suman 12 hrs y se añade AM */
	if ((hora == 0) && (minutos >= 0 && minutos <= 59)) {
		hora += 12;
		printf("El equivalente en formato de 12 hrs es: %d:%.2d AM\n",
		       hora, minutos);
	}
	/* Entre las 1:00 y 11:59 y se añade AM */
	else if ((hora >= 1 && hora <= 11) && (minutos >= 0 && minutos <= 59)) {
		printf("El equivalente en formato de 12 hrs es: %d:%.2d AM\n",
		       hora, minutos);
	}
	/* Entre las 12:00 y 12:59 hrs y se añade PM */
	else if ((hora == 12) && (minutos >= 0 && minutos <= 59)) {
		printf("El equivalente en formato de 12 hrs es: %d:%.2d PM\n",
		       hora, minutos);
	}
	/* Entre las 13:00 y 23:59 hrs se restan 12 hrs y se añade PM */
	else if ((hora >= 13 && hora <= 23) && (minutos >= 0 && minutos <= 59)) {
		hora -= 12;
		printf("El equivalente en formato de 12 hrs es: %d:%.2d PM\n",
		       hora, minutos);
	}

	return 0;
}
