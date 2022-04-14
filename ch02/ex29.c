/* Ejercicio 2.9 */

#include <stdio.h>

#define PI 3.1416 /* Constante */

int main(void)
{
    float radio;
    float volumen;

    /* Valor introducido por el usuario */
    printf("Introduce el radio de la esfera: ");
    scanf("%f", &radio);

    /* Computa el volumen */
    volumen = ((4.0 / 3.0) * PI * (radio * radio * radio));

    printf("El volumen  de la esfera es: %.2f\n", volumen);

    return 0;
}
