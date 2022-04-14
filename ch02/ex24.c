/* Ejercicio 2.4 */

#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume;

    /* Cacula el volumen */
    volume = height * length * width;

    printf("Dimensiones: %dx%dx%d\n", length, width, height);
    printf("Volumen (pulgadas cúbicas):, %d\n", volume);
    printf("Peso dimensional (libras): %d\n", (volume + 165 / 166)); // Peso

    return 0;
}
