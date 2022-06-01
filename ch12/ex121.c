/* Ejercicio 12.1 */

#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72}; /* int a [0..7] */
    int *p = &a[1];
    int *q = &a[5];

    /* Imprime diferente aritmética de pointers */
    printf("Valor de *(p + 3) = %d\n", *(p + 3));          /* 14 */
    printf("Valor de *(q - 3) = %d\n", *(q -3));           /* 34 */
    printf("Valor de (q - p) = %ld\n", (q - p));           /* 4 */
    printf("La condición de p < q es: %d\n", (p < q));     /* TRUE */
    printf("La condición de *p < *q es: %d\n", (*p < *q)); /* FALSE */

    return 0;
}

