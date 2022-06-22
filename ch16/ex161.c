/* Ejercicio 16.1 */

#include <stdio.h>

/* Estructuras */
struct
{
    int x;
    int y;
} x = {1, 2}; /* Definición struct x */

struct
{
    int x;
    int y;
} y = {10, 20}; /* Definición struct y */

int main(void)
{
    printf("El valor x.x es: %d\n", (x.x) + 1); /* 2 */
    printf("El valor x.y es: %d\n", (x.y) + 1); /* 3 */
    printf("El valor y.x es: %d\n", (y.x) + 1); /* 11 */
    printf("El valor y.y es: %d\n", (y.y) + 1); /* 21 */

    return 0;
}
 /* Pueden coexistir perfectamente porque cada estructura
  * tiene un espacio de nombres independiente para sus miembros.
  */
