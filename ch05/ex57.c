/* Ejercicio 5.7 */

#include <stdio.h>

int main(void)
{
	int acciones = 0;;
	float precio, comision = 0.0;

	printf("Introduzca el número de acciones: ");
	scanf("%d", &acciones);
	printf("Introduzca el precio por acción: ");
	scanf("%f", &precio);

	if (acciones < 2000)
		comision = 33.00 + (acciones * .03); /* 33$ + 3c/accion */
	else if (acciones >= 2000)
		comision = 33.00 + (acciones * .02); /* 33$ + 2c/accion */

	printf("El valor de la comision es de: %.2f $\n", comision);

	return 0;
}
