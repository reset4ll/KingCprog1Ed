/* Ejercicio 11.2
 *
 * Si 'i' es una variable y 'p' y 'p' son punteros a 'int' cuales
 * de las siguientes expresiones son legales:
 */

#include <stdio.h>

int main(void)
{
    int i = 3;

    int *p = &i; /* p -> i */
    int *q = &i; /* q -> i */

    printf("El valor de p = i es %p\n", p = i);
    /* printf("El valor de *p = &i es %p\n", *p = &i); */  /* Ilegal */
    /* printf("El valor de &p = q es %d\n", &p = q); */  /* Ilegal*/
    printf("El valor de p = &q es %p\n", p = &q);
    printf("El valor de p = *&q es %p\n", p = *&q);
    printf("El valor de p = q es %p\n", p = q);
    printf("El valor de p = *q es %p\n", p = *q);
    /* printf("El valor de *p = q es %d\n", *p = q); */  /* Ilegal */
    /* printf("El valord de *p = *q es %d\n", *p = *q); */  /* Ilegal */

    return 0;
}

/* El valor de p = i es 0x3 */
/* El valor de p = &q es 0x7fffd11f66d8 */
/* El valor de p = *&q es 0x7fffd11f66d4 */
/* El valor de p = q es 0x7fffd11f66d4 */
/* El valor de p = *q es 0x3 */

