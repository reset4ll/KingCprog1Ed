/* Ejercicio 16.2*/

#include <stdio.h>

/* Declara variables de tipo struct c1, c2, y c3 cada una de
 * las cuales con miembros re e im del tipo double
 */
struct
{
    double re;
    double im;
} c1 = {0.0, 1.0};

struct
{
    double re;
    double im;
} c2 = {1.0, 0.0};

struct
{
    double re;
    double im;
} c3;

int main(void)
{
    /* Escribir declaraciones que copie los miembros de c2 en c1 */
    c1.re = c2.re; /* Ahora c1.re vale 1.0 */
    c1.im = c2.im; /* Ahora c1.im vale 0.0 */
    printf("El valor de c1.re es: %f\n", c1.re);
    printf("El valor de c1.im es: %f\n", c1.im);

    /* Escribir declaraciones que sumen los miembros de c1 y c2 y los
     * añadan a los de c3
     */
    c3.re = (c1.re) + (c2.re);
    c3.im = (c1.im) + (c2.im);
    printf("El valor de c3.re es: %f\n", c3.re); /* 2.00 */
    printf("El valor de c3.im es: %f\n", c3.im); /* 0.00 */

    return 0;
}

