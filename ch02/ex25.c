/*  Ejercicio 2.5 */

#include <stdio.h>

#define PI 3.1416  /* Constante */

int main(void)
{
    int radio = 10;
    float volumen ;

    /* Computa el volumen */
    volumen = ((4.0 / 3.0) * PI * (radio * radio * radio));

    printf("El volumen de la esfera es: %.2f\n", volumen);

    return 0;
}
