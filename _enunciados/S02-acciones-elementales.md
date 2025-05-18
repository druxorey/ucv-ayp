# Acciones Elementales

## **E01-calculo-manual**:

Dadas las variables siguientes:

```c
int i = 1, j = 2;
float r = 2.0;
bool b = true;
```

Indique el valor de las expresiones siguientes:

1. `i = (i + 2) * r;`
2. `b = i / (2 + j) <= 5 * j / 3;`
3. `i = 11 / 2;`
4. `r = 11 / (float)2;`
5. `b = b && i + j >= j * 5 % 3;`

## **E02-evaluacion-expresiones**:

Dados los siguientes estados iniciales de las variables y la función de potenciación `pow(base, exponente)`, evalúe e indique el resultado de cada expresión:

### (a) `a = 3; b = 4; c = true;`

1. `r = (a * 2 > b) && c;`
2. `r = b / 2 - 4 * a * b / 1 / 2;`
3. `r = pow(b / 2 - 4 * a * b, 1 / 2);`
4. `r = pow(b / (2 - 4 * a) * b, 1 / 2);`

### (b) `x = 3; y = 7;`

1. `r = y % x + y / x;`
2. `r = y % 2 + x * 2 - 2 / 2;`
3. `r = ((x / 2) + (y / 2)) - 4 >= 3 + (float)(2 * 2) / 4.0 / 8.0;`
4. `r = (15 + 2 * 7) + 1 > 10 * 5 - 3 * 5 * 18 % 4;`
5. `r = 2 / 3 + 4 / 2 / 2 - 10 + pow(100, 1 / 2);`
6. `r = 25 - 100 / 20 + 8 + 15 / pow(2, 2) + 7 < 165 / 7 + 165 % 7;`
7. `r = (4 * (8 - pow(3, 2)) + pow(5 / 3 * 2, 2) / (12 / 5) * 5 + 12 % 5;`
8. `r = 13 % ((5 - 2) * 4) - (3 * 5 + 2) / pow(3, 2) < 3 + 7 * 2 - 4 + pow(12, 2);`
9. `r = (!(3 > 1) && (2 < 10)) || ((4 > 1) && (1 < 2));`

## **E03-numero-invertido**:

Escriba un algoritmo que lea un número de cuatro dígitos y muestre en pantalla el número escrito en reverso.

**Ejemplo:**

| Entrada  | Salida |
|----------|--------|
| `4678`   | `8764` |
| `1234`   | `4321` |
| `1000`   | `0001` |
| `9876`   | `6789` |


## **E04-raices-cuadraticas**:

Escriba un algoritmo que reciba como entrada los coeficientes **a**, **b** y **c** de una ecuación de segundo grado `(ax² + bx + c = 0)`, e imprima por pantalla los valores de x. Asuma que la ecuación siempre tiene solución en números reales.

**Ejemplo:**

| Entrada                  | Salida         |
|--------------------------|----------------|
| `a = 1, b = -3, c = 2`   | `x1 = 2, x2 = 1` |
| `a = 1, b = -2, c = 1`   | `x1 = 1, x2 = 1` |
| `a = 2, b = 5, c = 3`    | `x1 = -1, x2 = -1.5` |


## **E05-binario-a-decimal**:

Escriba un algoritmo que transforme un número binario de cuatro bits a un número decimal. **Nota:** Asegúrese de que el dato ingresado sea un número entero, no caracteres.

**Ejemplo:**

| Entrada  | Salida |
|----------|--------|
| `1011`   | `11`   |
| `0001`   | `1`    |
| `1111`   | `15`   |
| `0100`   | `4`    |


## **E06-hipotenusa**:

Escriba un algoritmo que dadas las longitudes de los catetos de un triangulo rectangulo calcule la longitud de su hipotenusa.

**Ejemplo:**

| Entrada          | Salida       |
|------------------|--------------|
| `cateto1 = 3, cateto2 = 4` | `hipotenusa = 5` |
| `cateto1 = 6, cateto2 = 8` | `hipotenusa = 10` |


## **E07-velocidad-lineal**:

Escriba un algoritmo que dados la distancia recorrida por un objeto y el tiempo que tomo el objeto en recorrer esa distancia, calcule su velocidad.

**Ejemplo:**

| Entrada          | Salida       |
|------------------|--------------|
| `distancia = 100, tiempo = 2` | `velocidad = 50` |
| `distancia = 150, tiempo = 3` | `velocidad = 50` |


## **E08-angulo-del-reloj**:

Supongamos un reloj analógico (de agujas). Dada la hora exacta (horas y minutos), escriba un algoritmo que calcule el ángulo entre ambas agujas.

**Ejemplo:**

| Entrada       | Salida       |
|---------------|--------------|
| `hora = 3:00` | `90 grados`  |
| `hora = 3:15` | `7.5 grados` |
| `hora = 6:00` | `180 grados` |
| `hora = 12:00`| `0 grados`   |


## **E09-area-triangulo-circulo**:

Escriba un algoritmo que tome como entrada la base y la altura de un triangulo, el radio de un circulo y determine si el triangulo tiene un area mayor al circulo.

**Ejemplo:**

| Entrada                          | Salida                  |
|----------------------------------|-------------------------|
| `base = 10, altura = 5, radio = 3` | `El triangulo tiene mayor area` |
| `base = 6, altura = 4, radio = 5`  | `El circulo tiene mayor area`   |


## **E10-saltos-de-rana**:

José y Pedro son dos ranas. José puede dar saltos de J centímetros y Pedro puede dar saltos de P centímetros. Suponiendo que ambas ranas comienzan a saltar en el mismo punto (y en la misma dirección), haga un algoritmo que determine si las ranas coincidirán en el mismo punto en algún momento antes de que José dé K saltos. Si coinciden, determine el primer punto de encuentro.

**Ejemplo:**

| Entrada                          | Salida                  |
|----------------------------------|-------------------------|
| `J = 3, P = 5, K = 10`           | `Coinciden en 15`       |
| `J = 2, P = 4, K = 5`            | `No coinciden`          |
| `J = 6, P = 9, K = 15`           | `Coinciden en 18`       |

