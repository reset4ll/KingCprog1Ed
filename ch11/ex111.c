/* Ejercicio 11.1
 *
 * Si 'i' es una variable y 'p' apunta a 'i' cuales de las siguientes
 * expresiones son 'alias' para 'i'
 */

#include <stdio.h>

int main(void)
{
    int i = 3;
    int *p = &i;  /* p -> i */

    printf("El valor de *p = %d\n", *p); /* Alias para 'i' */
    printf("El valor de &p = %p\n", &p);
    printf("El valor de *&p = %p\n", *&p);
    printf("El valor de &*p = %p\n", &*p);
    printf("El valor de *i = %d\n", i);   /* Alias para 'i' */
    printf("El valor de &i = %p\n", &i);
    printf("El valor de *&i = %d\n", *&i);  /* Alias para 'i' */
    /* printf("El valor de &*i = %d\n", &*i); */

    return 0;
}

/* Salida */
/* El valor de *p = 3 */
/* El valor de &p = 0x7ffdd736de10 */
/* El valor de *&p = 0x7ffdd736de0c */
/* El valor de &*p = 0x7ffdd736de0c */
/* El valor de *i = 3 */
/* El valor de &i = 0x7ffdd736de0c */
/* El valor de *&i = 3 */


