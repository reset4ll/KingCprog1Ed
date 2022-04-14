/* Ejercicio 3.5 */

#include <stdio.h>

int main(void)
{
    int item, month, day, year;
    float price;

    /* Introducción de datos */
    printf("Introduzca el número del elemeto: ");
    scanf("%d", &item);

    printf("Introduzca el precio por unidad: ");
    scanf("%f", &price);

    printf("Introduzca la fecha de adquisición: (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    /* Imprime los datos introducidos */
    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("    \t\tPrice\t\tDate\n");
    printf("%d\t\t$  %.2f\t%d/%d/%d\n", item, price, month, day, year);

    return 0;
}
