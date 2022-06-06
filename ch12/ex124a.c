/* Ejercicio 12.4a */

#include <stdio.h>
#include <stdlib.h>

#define N 25 /* Límite del mensaje */

int main()
{
	char array[N];
	int i = 0;
	char letra;

	printf("Escribir mensaje (max 25 letras): ");

    /* Fin de línea */
	while ((letra = getchar()) != '\n') {
		array[i] = letra; /* Añade letra al array */
		i++;
	}

    printf("Mensaje invertido: ");

    /* Imprime el mensaje al revés */
    while (--i >= 0) {
        putchar(array[i]);
    }

	printf("\n");
	return 0;
}
