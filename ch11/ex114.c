/* Ejercicio 11.4 */

#include <stdio.h>

/* Prototipo de la función */
void cambiar(int *, int *);

/* Pointers como variables globales */
int a, b;

int main(void)
{
    int x = 1, y = 2;

    printf("\nEl valor antes para 'x' e 'y' es: %d y %d \n", x, y);

    printf("\n*** Llamada a la funcion 'cambiar()'\n");
    cambiar(&x, &y);

    printf("\nEl valor después para 'x' e 'y' es: %d y %d \n", x, y);

    return 0;
}

/* Definición de cambiar() */
void cambiar(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;  /* Intercambia los valores */
    *b = temp;
}
