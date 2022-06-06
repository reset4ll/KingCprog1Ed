/* Ejercicio 12.4b */

#include <stdio.h>
#include <stdlib.h>

#define N 25 /* Límite del mensaje */

int main()
{
    char array[N];
    char *p = array; /* array = &array[0] */
    char letra;

    printf("Escribir mensaje (max 25 letras): ");

    /* Fín de línea */
    while ((letra = getchar()) != '\n') {
        *p = letra;  /* Usando aritmética de pointers */
        p++;
    }

    printf("Mensaje invertido: ");

    /* Imprime el mensaje al revés */
    while (*(--p) >= 0) {
        putchar(*p);  /* printf("%c", *p); */
    }
    printf("\n");
    return 0;
}
