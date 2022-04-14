/* Ejercicio 2.7 */

#include <stdio.h>

int main(void)
{
    const float PI = 3.1416;
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
