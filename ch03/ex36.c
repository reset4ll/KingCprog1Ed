/* Ejercicio 3.6 */

#include <stdio.h>

int main(void)
{
    int language, publisher, nbook, digit;

    printf("Introduzca el ISBN del libro: ");
    scanf("%d-%d-%d-%d", &language, &publisher, &nbook, &digit);

    /* Imprime el ISBN desglosado del libro */
    printf("\nLanguage: %d\n", language);
    printf("Publisher: %d\n", publisher);
    printf("Book number: %d\n", nbook);
    printf("Check digit: %d\n", digit);

    return 0;
}
