/* Ejercicio 5.15 
 * 
 * Adaptado a la numeración en español que difiere
 * del inglés.
 * 
 */

#include <stdio.h>

int main(void)
{
    int numero, decena, unidad;

    printf("Introduzca un número de dos dígitos: ");
    scanf("%2d", &numero); 
    
    {
        /* Números del 11-19 */
        if (numero == 11)
        printf("Once\n"); 

        else if (numero == 12)
        printf("Doce\n");

        else if (numero == 13)
        printf("Trece\n");

        else if (numero == 14)
        printf("Catorce\n");

        else if (numero == 15)
        printf("Quince\n");

        else if (numero == 16)
        printf("Dieciseis\n");

        else if (numero == 17)
        printf("Diecisiete\n");

        else if (numero == 18)
        printf("Dieciocho\n");

        else if (numero == 19)
        printf("Diecinueve\n");

        /* Decenas */     
        else if (numero == 20)
        printf("Veinte\n");

        else if (numero == 30)
        printf("Treinta\n");

        else if (numero == 40)
        printf("Cuarenta\n");

        else if (numero == 50)
        printf("Cincuenta\n");

        else if (numero == 60)
        printf("Sesenta\n");

        else if (numero == 70)
        printf("Setenta\n");

        else if (numero == 80)
        printf("Ochenta\n");

        else if (numero == 90)
        printf("Noventa\n");
    }

    /* Algoritmo para el cálculo: dividir el número en dos usando
     * los operadores división y módulo -> decenas y unidades.
     */   

    decena = numero / 10;
    unidad = numero % 10;   

    /* Restantes números. Se acotan en un rango para no interferir
     * con los anteriores.
     */

    if (decena >= 2 && unidad >= 1) {

    switch (decena) {
        case 9: printf("Noventa y "); break;
        case 8: printf("Ochenta y "); break;
        case 7: printf("Setenta y "); break;
        case 6: printf("Sesenta y "); break;
        case 5: printf("Cincuenta y "); break;
        case 4: printf("Cuarenta y "); break;
        case 3: printf("Treinta y "); break;
        case 2: printf("Veinte y "); break;
    }
          
    switch (unidad) {
        case 9: printf("nueve\n"); break;
        case 8: printf("ocho\n"); break; 
        case 7: printf("siete\n"); break; 
        case 6: printf("seis\n"); break; 
        case 5: printf("cinco\n"); break;
        case 4: printf("cuatro\n"); break;
        case 3: printf("tres\n"); break; 
        case 2: printf("dos\n"); break;
        case 1: printf("uno\n"); break;     
    }

    }

    return 0;
}