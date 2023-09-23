Instrucciones de compilación y ejecución
-Abrir cada método y compilarlo, en cada caso pedira un número N que debera suministrarse

Tiempos de ejecución:
Metodo 1
-N=40 : 0.89 Sg
-N=47 : 26.075 Sg
-N=51 : 181.23200 Sg

Metodo 2
-N=40 : 0.00 Sg
-N=51 : 0.00 Sg
-N=100 : 0.00 Sg
-N=200 : 0.00 Sg
-N=10000 : 0.00 Sg


Comparación de métodos
Como se puede observar en los tiempos de ejecución el método 2 es muchisimo más eficaz que el método 1, además que el primer metodo despues de ciertos términos empieza a arrojar resultados erroneos.
En cuanto a complejidad el método 1 tiene una complejidad de O(N * 2^N) de ahí que a N más grandes empiece a fallar o a demorar mucho.
El método 2 por otra parte tiene una complejidad de O(N) siendo esta complejidad bastante buena en comparacion al anterior método.
