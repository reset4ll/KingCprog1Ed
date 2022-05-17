/* Ejercicio 11.3 */

#include <stdio.h>

 /* Prototipo de  la función */
void avg_sum(float a[], int, float *, float *);

/* Pointers como variables globales */
float avg, sum;

int main(void)
{
    /* Declaración del array */
    float a[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    int n = (sizeof(a) / sizeof(a[0]));  /* Tamaño del array */

    avg_sum(a, n, &avg, &sum);

    printf("La suma del array es: %.2f\n", sum);
    printf("El número de elementos del array es de: %d\n", n);
    printf("La media de la suma es: %.2f\n", avg);

    return 0;
}

/*  Definición de la función */
void avg_sum(float a[], int n, float *avg, float *sum)
{
    int i;
    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i]; /* Suma */
    *avg = *sum / n;  /* Media de la suma */
}
