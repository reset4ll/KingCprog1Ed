/* Ejercicio 3.4 */

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Introduzca una fecha (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    /* Imprime la fecha dada en formato yymmdd */
    printf("Usted introdujo la fecha: %d%2.2d%d\n", year, month, day);

    return 0;
}
