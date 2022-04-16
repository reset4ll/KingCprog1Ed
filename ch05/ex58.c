/* Ejercicio 5.8 */

#include <stdio.h>

int main(void)
{
	int velocidad;

	printf("Introduzca la velocidad del viento: ");
	scanf("%d", &velocidad);

	if (velocidad < 1)
		printf("Viento en calma\n");

	else if (velocidad >= 1 && velocidad <= 3)
		printf("Brisa ligera\n");

	else if (velocidad >= 4 && velocidad <= 27)
		printf("Brisa\n");

	else if (velocidad >= 28 && velocidad <= 47)
		printf("Viento fuerte\n");

	else if (velocidad >= 48 && velocidad <= 63)
		printf("Tormenta\n");

	else if (velocidad > 63)
		printf("Huracán\n");

	else
		printf("La velocidad introducida no es correcta, pruebe otra vez\n");

	return 0;
}
