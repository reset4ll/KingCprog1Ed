/* Ejercicio 12.2 */

#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *low = &a[0];
    int *high = &a[7];
    int *middle = 0;

    /* Puesto que es ilegal que dos pointers sean sumados se hace
     * el siguiente truco porque '(high - low) / 2' evalua a un entero
     * que sí se puede sumar a un pointer.
    */
    middle = low + (high - low) / 2;
    printf("El valor de middle es = %d\n", *middle);  /*  54 */

    return 0;
}
