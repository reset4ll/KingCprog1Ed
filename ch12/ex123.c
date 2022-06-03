/* Ejercicio 12.3 */

#include <stdio.h>

#define N 10

int main(void)
{
    /* Datos */
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0];
    int *q = &a[N - 1];
    int temp = 0;

    /* Asignaciones */
    temp = *p;
    printf("Valor de *p = %d\n", *p);     /* 1 */
    printf("Valor de temp = %d\n", temp); /* 1 */

    *p++ = *q;
    printf("Valor de *q = %d\n", *q);     /* 10 */
    printf("Valor de *p++ = %d\n", *p++); /* 2 */

    *q-- = temp;
    printf("Valor de *q-- = %d\n", *q--); /* 9 */

    return 0;
}
