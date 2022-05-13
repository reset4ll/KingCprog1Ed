/* Ejercicio 9.4 */

#include <stdio.h>

/* Números mágicos */
#define M1  31 /* Enero */
#define M3  31 /* Marzo */
#define M4  30 /* Abril */
#define M5  31 /* Mayo */
#define M6  30 /* Junio */
#define M7  31 /* Julio */
#define M8  31 /* Agosto */
#define M9  30 /* Septiembre */
#define M10 31 /* Octubre */
#define M11 30 /* Noviembre */
#define M12 31 /* Diciembre */

/* Prototipo */
int day_of_year(int, int, int);

/* Variables globales */
int resultado = 0;
int day, month, year;
int M2; /* Febrero */

int main(void)
{
	printf("Introducir la fecha (dd/mm/yy): ");
	scanf("%2d/%2d/%4d", &day, &month, &year);

	/* LLamada a la función */
	day_of_year(day, month, year);

	printf("El día es el %dº del año.\n", resultado);

	return 0;
}

/* Definición de la función */
int day_of_year(int day, int month, int year)
{
	/* Test, año bisiesto? */
	if (!( year % 4) && ((year % 100) || !(year % 400)))
		M2 = 29; /* Es bisiesto */
	else
		M2 = 28; /* No es bisiesto */

	switch (month) {
	case 1: resultado = day;
		return resultado;
		break;
	case 2: resultado = (M1 + day);
		return resultado;
		break;
	case 3: resultado = (M1 + M2 + day);
		return resultado;
		break;
	case 4: resultado = (M1 + M2 + M3 + day);
		return resultado;
		break;
	case 5: resultado = (M1 + M2 + M3 + M4 + day);
		return resultado;
		break;
	case 6: resultado = (M1 + M2 + M3 + M4 + M5 + day);
		return resultado;
		break;
	case 7: resultado = (M1 + M2 + M3 + M4 + M5 + M6 + day);
		return resultado;
		break;
	case 8: resultado = (M1 + M2 + M3 + M4 + M5 + M6 + M7 + day);
		return resultado;
		break;
	case 9: resultado = (M1 + M2 + M3 + M4 + M5 + M6 + M7 + M8 + day);
		return resultado;
		break;
	case 10: resultado = (M1 + M2 + M3 + M4 + M5 + M6 + M7 + M8 + M9 + day);
		return resultado;
		break;
	case 11: resultado = (M1 + M2 + M3 + M4 + M5 + M6 + M7 + M8 + M9 + M10 + day);
		return resultado;
		break;
	case 12: resultado = (M1 + M2 + M3 + M4 + M5 + M6 + M7 + M8 + M9 + M10 + M11 + day);
		return resultado;
		break;
	default: printf("Mes incorrecto, pruebe otra vez.\n");
		break;
	}
}













