#include <stdio.h>
#include <time.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N;  // Número de términos de Fibonacci a considerar
    printf("Ingresa el numero de terminos de Fibonacci a considerar: ");
    scanf("%d", &N);

    clock_t start = clock();  // Tiempo inicial

    int suma = 0;
    for (int i = 0; i < N; i++) {
        int fib = fibonacci(i);
        if (i % 2 == 0) {
            suma += fib;
        }
    }

    clock_t end = clock();  // Tiempo final
    double tiempo = ((double)(end - start)) / CLOCKS_PER_SEC;  // Tiempo en segundos

    printf("La suma de los numeros de Fibonacci en indices pares hasta el termino %d es: %d\n", N, suma);
    printf("Tiempo de ejecución: %lf segundos\n", tiempo);

    return 0;
}
