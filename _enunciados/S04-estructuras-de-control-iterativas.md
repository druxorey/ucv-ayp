# Estructuras de Control Iterativas

## **E01-secuencia-de-digitos**:

Escriba un algoritmo que lea un número N y calcule e imprima el número de dígitos de N leyéndolo de izquierda a derecha.

**Ejemplo:**

| Entrada   | Salida |
|-----------|--------|
| `429356`  | `6`    |
| `123`     | `3`    |
| `100000`  | `6`    |
| `7`       | `1`    |


**Respuesta: [E01-secuencia-de-digitos](../S04-estructuras-de-control-iterativa/E01-secuencia-de-digitos.cpp)**

## **E02-numero-palindromo**:

Haga un algoritmo que determine si un número de N dígitos es palíndromo.

**Ejemplo:**

| Entrada       | Salida         |
|---------------|----------------|
| `87436863478` | `Palíndromo`   |
| `13655631`    | `Palíndromo`   |
| `12345`       | `No es Palíndromo` |
| `1221`        | `Palíndromo`   |


**Respuesta: [E02-numero-palindromo](../S04-estructuras-de-control-iterativa/E02-numero-palindromo.cpp)**

## **E03-aproximacion-de-pi**:

Escriba un algoritmo utilizando un ciclo para que calcule el valor aproximado de π usando la serie: `π = 4 − 4/3 + 4/5 − 4/7 + 4/9 . . . ± 4/n`.

**Ejemplo:**

| Entrada | Salida       |
|---------|--------------|
| `1`     | `4.000000`   |
| `10`    | `3.041840`   |
| `100`   | `3.131593`   |
| `1000`  | `3.140593`   |


**Respuesta: [E03-aproximacion-de-pi](../S04-estructuras-de-control-iterativa/E03-aproximacion-de-pi.cpp)**

## **E04-analisis-de-numeros**:

Dada una secuencia de números terminada en cero, elaborar un algoritmo para calcular el porcentaje y la suma de los números impares, el porcentaje y la suma de los números pares, y la suma de todos los números, y cuántos números fueron ingresados.

**Ejemplo:**

| Entrada                           | Salida                                                                 |
|-----------------------------------|------------------------------------------------------------------------|
| `12 32 85 21 19 2 17 0`           | `Suma impares: 46 (24.4681%), Suma pares: 142 (75.5319%), Total: 188, Cantidad: 7` |
| `1 2 3 4 5 0`                     | `Suma impares: 9 (50%), Suma pares: 6 (50%), Total: 15, Cantidad: 5`   |
| `10 20 30 0`                      | `Suma impares: 0 (0%), Suma pares: 60 (100%), Total: 60, Cantidad: 3` |
| `7 0`                             | `Suma impares: 7 (100%), Suma pares: 0 (0%), Total: 7, Cantidad: 1`   |


**Respuesta: [E04-analisis-de-numeros](../S04-estructuras-de-control-iterativa/E04-analisis-de-numeros.cpp)**

## **E05-binario-iterativo**:

Escriba un algoritmo que tome como entrada una secuencia de números 0 y 1 terminada en −1 que representan un número binario y calcule el número decimal representado.

**Ejemplo:**

| Entrada               | Salida |
|-----------------------|--------|
| `1 0 0 1 0 1 -1`      | `37`   |
| `1 1 1 1 -1`          | `15`   |
| `1 0 -1`              | `2`    |
| `0 -1`                | `0`    |


**Respuesta: [E05-binario-iterativo](../S04-estructuras-de-control-iterativa/E05-binario-iterativo.cpp)**

## **E06-secuencia-fibonacci**:

Escriba un algoritmo que tome como entrada un número N e imprima la secuencia de Fibonacci hasta N.

**Ejemplo:**

| Entrada | Salida                  |
|---------|-------------------------|
| `5`     | `0, 1, 1, 2, 3, 5`      |
| `3`     | `0, 1, 1, 2, 3`         |
| `1`     | `0, 1, 1`               |
| `0`     | `0`                     |


**Respuesta: [E06-secuencia-fibonacci](../S04-estructuras-de-control-iterativa/E06-secuencia-fibonacci.cpp)**

## **E07-fichas-de-domino**:

Escriba un algoritmo que imprima los valores de todas las fichas de dominó sin repetir.

**Ejemplo:**

| Entrada | Salida                  |
|---------|-------------------------|
| `-`     | `(0,0), (0,1), ..., (6,6)` |
| `-`     | `(0,0), (0,1), ..., (5,5)` |
| `-`     | `(0,0), (0,1), ..., (4,4)` |
| `-`     | `(0,0), (0,1), ..., (3,3)` |


**Respuesta: [E07-fichas-de-domino](../S04-estructuras-de-control-iterativa/E07-fichas-de-domino.cpp)**

## **E08-secuencia-decimal**:

Escriba un algoritmo lea una secuencia de dígitos entre 0 y 9 terminada en −1 que representan un número decimal e imprima el número decimal.

**Ejemplo:**

| Entrada         | Salida |
|-----------------|--------|
| `5 0 3 8 -1`    | `5038` |
| `1 2 3 -1`      | `123`  |
| `0 -1`          | `0`    |
| `9 9 9 -1`      | `999`  |


**Respuesta: [E09-secuencia-decimal](../S04-estructuras-de-control-iterativa/E09-secuencia-decimal.cpp)**

## **E09-borde-del-cuadrado**:

Escriba un algoritmo que imprima por pantalla el borde de un cuadrado de lados de tamaño N.

**Ejemplo:**

![Imagen del Ejercicio](imagenes/S04-E10.webp)


**Respuesta: [E10-borde-del-cuadrado](../S04-estructuras-de-control-iterativa/E10-borde-del-cuadrado.cpp)**

## **E10-cuadrados-anidados**:

Escriba un algoritmo que imprima por pantalla el borde de cuadrados de tamaño impar desde N hasta 1 insertados uno dentro de otro.

**Ejemplo:**

![Imagen del Ejercicio](imagenes/S04-E11.webp)

**Respuesta: [E11-cuadrados-anidados](../S04-estructuras-de-control-iterativa/E11-cuadrados-anidados.cpp)**

## **E11-evaluacion-de-polinomios**:

Escriba un algoritmo que lea un número real x, un número entero n y los coeficientes reales ai de un polinomio `p(x) = a0x0 + a1x1 + x2x2 . . . an−1xn−1` y calcule el valor del polinomio para el x dado.

**Ejemplo:**

| Entrada                  | Salida |
|--------------------------|--------|
| `x=2, n=3, coef=2,-1,3` | `12`   |
| `x=1, n=2, coef=1,1`    | `2`    |
| `x=0, n=1, coef=5`      | `5`    |
| `x=3, n=4, coef=1,0,0,1`| `28`   |


**Respuesta: [E12-evaluacion-de-polinomios](../S04-estructuras-de-control-iterativa/E12-evaluacion-de-polinomios.cpp)**
