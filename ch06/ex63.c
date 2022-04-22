/* Ejercicio 6.3 */

#include <stdio.h>

int main(void)
{
  int dividendo, divisor, resto, numerador, denominador, mcd;
  
  printf("Introducir la fracción: ");
  scanf("%d/%d", &numerador, &denominador);
  
  dividendo = numerador;
  divisor = denominador;
  
  /* Obtener mcd */
  resto = dividendo % divisor; /*  Inicialización */           
  while (resto != 0) {  /* Test */                             
    /* Declaración */                                          
    dividendo = divisor;                                       
    divisor = resto;                                           
    resto = dividendo % divisor;
  }
  
  printf("El mcd de los dos números es %d\n", divisor);

  /* Fracción irreducible */
  mcd = divisor;  
  printf("La fracción irreducible es: %d/%d\n", \
        (numerador / mcd), (denominador / mcd));
  
  return 0;
}
