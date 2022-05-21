/* Ejercicio 11.5 */

#include <stdio.h>

/* Prototipo de la función */
void split_time(long int, int *, int *, int *);

/* Variables globales */
long int total_seg;
int hr, min, seg;

int main(void)
{
	printf("Introducir número de segundos:");
	scanf("%ld", &total_seg);

	/* Funcall */
	split_time(total_seg, &hr, &min, &seg);

	printf("La hora es: %dh:%dm:%ds\n", hr, min, seg);

    return 0;
}

/* Definición de la función split_time() */
void split_time(long int total_seg, int *hr, int *min, int *seg)
{
	int resto_seg = 0; /* Variable local */

    /* Define la hora y los segundos restantes */
	*hr = total_seg / 3600;
	resto_seg = total_seg % 3600;

	/* Define los minutos y los segundos restantes */
	if (resto_seg >= 60) {

		*min = resto_seg / 60;
		*seg = resto_seg % 60;

	} else {

        /* Asigna los últimos segundos restantes */
		*min = 0;
		*seg = resto_seg;
	}

}


