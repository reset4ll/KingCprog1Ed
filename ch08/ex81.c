/* Ejercicio 8.1 */

#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define N 10

typedef int Bool; /* Nuevo tipo booleano */

int main(void)
{
	int digito, index;
	long int numero;

    /* Arrays utilizados */
	Bool digito_visto[10] = {0};
	Bool es_repetido[10] = {0};

	printf("Introduzca un número: ");
	scanf("%ld", &numero);

    /* Comienzo de la búsqueda*/
	while (numero > 0) {
		digito = numero % 10; /* Resto */
		if (digito_visto[digito])
			es_repetido[digito] = TRUE; /* Está repetido */
		digito_visto[digito] = TRUE;
		numero = numero / 10; /* Siguiente dígito */
	}

	printf("Dígitos repetido(s): ");

    /* Búsqueda de los números repetidos */
	for (index = 0; index < N; index++) {
        /*  Si es verdad que está repetido, imprímelo */
		if (es_repetido[index])
			printf("%d ", index);
	}
    printf("\n");

	return 0;
}

