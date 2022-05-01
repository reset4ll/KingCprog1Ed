/* Ejercicio 8.2 */

#include <stdio.h>

#define N 10

int main(void)
{
	int digito, index = 0;
	long int num;

	/* Array utilizado */
	int digito_visto[10] = {0};

	printf("Introduzca un número: ");
	scanf("%ld", &num);

	/* Realizado a modo de experimentar con 'for'
	 * anidados, aunque se puede ir a lo más fácil:
	 * printf("Repeticiones:  0 1 2 3...9 0");
	 * pero... ;-)
	 */
	for (index = 0; index < N; index++) {
		printf("Digito:       ");
		for (index = 0; index < N; index++)
			printf("%d ", index);
		printf("\n");
	}


	    /*  /* Este bloque mostraría los números */
	    /*   * ingresados del array en pantalla. Usado para */
	    /*   * ver si la asignación al array era correcta. */
	    /*   */

	    /*  printf("Array es: "); */

	    /*  while (num > 0) { */
	    /*  digito = num % 10;  /* Resto */
	    /*  digito_visto[index] = digito;  /* Asignación */
	    /*  num = num / 10;     /* Siguiente dígito */
	    /*  printf("%d ", digito_visto[index]); */

	    /*  } */

	/* Comienzo de la búsqueda */
	while (num > 0) {
		digito = num % 10; /* Resto */
		digito_visto[digito]++; /* Iterando en el array */
		num = num / 10; /* Siguiente dígito */
	}

	printf("Repeticiones: ");

	/* Imprime los números repetidos secuencialmente */
	for (index = 0; index < N; index++) {
		printf("%d ", digito_visto[index]);
	}

	printf("\n");

	return 0;
}

