#include <stdio.h>
#include <omp.h>

int main() {
    int N;
    printf("Ingrese el número de términos de Fibonacci a considerar: ");
    scanf("%d", &N);

    double start_time = omp_get_wtime(); // Guarda el tiempo de inicio

    if (N <= 0) {
        printf("El número de términos debe ser positivo.\n");
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

    #pragma omp parallel for reduction(+:suma)
    for (int i = 0; i < N; i += 2) {
        suma += fib[i];
    }

    printf("La suma de los números de Fibonacci en índices pares hasta el término %d es: %llu\n", N, suma);

    double end_time = omp_get_wtime(); // Guarda el tiempo de fin

    printf("Tiempo de ejecución: %f segundos\n", end_time - start_time);

    return 0;
}

