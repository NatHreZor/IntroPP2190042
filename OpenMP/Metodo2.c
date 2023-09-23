#include <stdio.h>
#include <time.h>

int main() {
    int N;
    printf("Ingrese el numero de terminos de Fibonacci a considerar: ");
    scanf("%d", &N);

    clock_t start = clock(); // Guarda el tiempo de inicio

    if (N <= 0) {
        printf("El numero de terminos debe ser positivo.\n");
        return 1;  // Salir del programa con un código de error.
    }

    unsigned long long fib[N];
    fib[0] = 0;
    fib[1] = 1;

    // Calcular los términos de Fibonacci hasta N.
    for (int i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    unsigned long long suma = 0;

    // Sumar los términos en índices pares.
    for (int i = 0; i < N; i += 2) {
        suma += fib[i];
    }

    printf("La suma de los numeros de Fibonacci en indices pares hasta el termino %d es: %llu\n", N, suma);

    clock_t end = clock(); // Guarda el tiempo de fin

    // Calcula el tiempo transcurrido en segundos
    double tiempo = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Tiempo de ejecución: %f segundos\n", tiempo);

    return 0;
}



