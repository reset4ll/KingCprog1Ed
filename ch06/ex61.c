/* Ejercicio 6.1 */

#include <stdio.h>

int main(void)
{
    float numero = 1, superior = 0;
 
    printf("Introduce un número (0 para acabar): ");
    scanf("%f", &numero);

    if (numero == 0) { return -1; } /* Salida */

    while (numero != 0) {  
    printf("Introduce un número (0 para acabar): ");
    scanf("%f", &numero);   
    
        /* Test */
        if (numero >= superior) {
            superior = numero; /* Contiene el número mayor */     
        }     
    }

    printf("El mayor de los números introducidos es: %.2f\n", superior);

    return 0;
}