/* Ejercicio 2.8 */

#include <stdio.h>

int main(void)
{
    float dolares, porcentaje;

    printf("Introduce una cantidad de dólares: ");
    scanf("%f", &dolares);

    /* Computa el porcentaje */
    porcentaje = ((dolares * 5) / 100); /* 5% de impuesto */

    printf("Aplicándole el porcentaje resultado es: %.2f\n",
           (dolares + porcentaje));

    return 0;
}
