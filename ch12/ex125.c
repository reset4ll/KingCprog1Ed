#include <stdio.h>
#include <string.h> /* strlen() */

#define N 25 /* Límite del mensaje */

int main()
{
	char array[N] = {0}; /* Inicializa el array con 0's */
	int i = 0;
	char letra;
	unsigned long longitud; /* El tipo 'ul' para strlen() */

	printf("Escribir mensaje (max 25 letras): ");

	/* Crea el mensaje hasta el fín de línea */
	while ((letra = getchar()) != '\n') {
		array[i] = letra;
		i++;
	}
	/* Calcula el tamaño del mensaje */
	longitud = strlen(array);
	/* printf("Longitud del array es: %lu\n", longitud); */

	/* Iteradores para el recorrido del mensaje*/
	char *p = &array[0]; /* Apunta al comienzo */
	char *q = &array[longitud]; /* Apunta al final */

	/* Compara elementos individuales del array */
	while (*p++ != *--q) {
		/* printf("P -> %c y Q -> %c\n", *p, *q); */
		p++;
		--q;
		printf("No es palindromo\n"); goto done;
		break;
	}

	printf("Es palindromo\n");

	/* Test */
	// printf("Mensaje invertido: ");

	/* Imprime el mensaje al revés */
	// while (--i >= 0) {
	//	 putchar(array[i]); /* printf("%c", *p); */
	// }
	// printf("\n");

done:

	return 0;
}
