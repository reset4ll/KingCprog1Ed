/** Ejercicio 6.4 
 * 
 * Añadir bucle al ejercicio 'broker.c' pg.71
 * 
 */

#include <stdio.h>

int main(void)
{
    float comision, valor;

    printf("Introducir el valor a negociar: ");
    scanf("%f", &valor);

    /* Bucle finaliza si el valor a negociar es 0 */
    while (valor != 0 ) {
    
    /* Diferentes rangos de valores */
    if (valor < 2500.00)
      comision = 30.00 + .017 * valor;

    else if (valor < 6250.00)
      comision = 56.00 + .0066 * valor;

    else if (valor < 20000.00)
      comision = 76 + .0034 * valor;

    else if (valor < 50000.00)
      comision = 100.00 + .0022 * valor;

    else if (valor < 50000.00)
      comision = 155.00 + .0011 * valor;

    else 
      comision = 255.00 + .0009 * valor;

    if (comision < 39.00)
      comision = 39.00;

    printf("Comision: $% .2f\n", comision);

    /* Reinicia el bucle */
    printf("Introducir el valor a negociar: ");
    scanf("%f", &valor);
    }
    
    return 0;
}