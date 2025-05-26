# Funciones

## **E01-distancia-entre-ciudades**:

Escriba un algoritmo que tome como entrada una secuencia de pares de nombres de ciudades y distancias entre estas ciudades (medidas en millas) y reporte las distancias en kilómetros. Para ello tome en cuenta que el fin de la entrada está determinado por dos ciudades con el mismo nombre y distancia 0.

**Ejemplo:**

| Entrada                                   | Salida                  |
|-------------------------------------------|-------------------------|
| `"Caracas" "Valencia" "98" "Caracas" "Maturin" "312" "Caracas" "Caracas" "0"` | `Caracas Valencia: 156.8`<br>`Caracas Maturin: 499.2` |


**Respuesta: [E01-distancia-entre-ciudades](../S05-funciones/E01-distancia-entre-ciudades.cpp)**

## **E02-extraer-digitos**:

Haga un algoritmo para una función que reciba dos parámetros, `N` y `K`, que retorne los `K` dígitos más a la izquierda de `N`.

**Ejemplo:**

| Entrada       | Salida |
|---------------|--------|
| `542207, 2`   | `54`   |
| `123456, 3`   | `123`  |
| `98765, 1`    | `9`    |
| `10001, 4`    | `1000` |


**Respuesta: [E02-extraer-digitos](../S05-funciones/E02-extraer-digitos.cpp)**

## **E03-palindromo-incluido**:

Haga un algoritmo que permita determinar si un número `N` de 6 dígitos contiene algún número de 3 dígitos palíndromo.

**Ejemplo:**

| Entrada   | Salida  |
|-----------|---------|
| `485992`  | `No`    |
| `106562`  | `Sí`    |
| `123321`  | `Sí`    |
| `654789`  | `No`    |


**Respuesta: [E03-palindromo-incluido](../S05-funciones/E03-palindromo-incluido.cpp)**

## **E04-maximo-y-minimo**:

Escriba una función o acción que reciba por parámetro 5 números y determine el máximo y mínimo entre ellos.

**Ejemplo:**

| Entrada               | Salida              |
|-----------------------|---------------------|
| `5, 3, 8, 1, 4`       | `Máximo: 8`<br>`Mínimo: 1` |
| `10, 20, 30, 40, 50`  | `Máximo: 50`<br>`Mínimo: 10` |
| `7, 7, 7, 7, 7`       | `Máximo: 7`<br>`Mínimo: 7` |
| `9, 2, 5, 6, 1`       | `Máximo: 9`<br>`Mínimo: 1` |


**Respuesta: [E04-maximo-y-minimo](../S05-funciones/E04-maximo-y-minimo.cpp)**

## **E05-total-de-dias**:

Haga una función que reciba como entrada un mes del año y determine el número de días transcurridos desde el comienzo del año hasta el primer día del mes.

**Ejemplo:**

| Entrada   | Salida |
|-----------|--------|
| `Enero`   | `0`    |
| `Febrero` | `31`   |
| `Marzo`   | `59`   |
| `Abril`   | `90`   |


**Respuesta: [E05-total-de-dias](../S05-funciones/E05-total-de-dias.cpp)**

## **E06-dias-entre-fechas**:

Haga una función que utilice la función creada en el problema 5 para crear otra función que tome como entrada dos fechas (día, mes y año) y calcule el número de días transcurridos entre las fechas. Puede asumir también que existe una función para determinar si un año es bisiesto.

**Ejemplo:**

| Entrada                     | Salida |
|-----------------------------|--------|
| `01 01 2023 y 31 12 2023`    | `364`  |
| `15 03 2020 y 15 03 2021`    | `366`  |
| `01 01 2020 y 01 01 2021`    | `366`  |
| `10 05 2022 y 20 05 2022`    | `10`   |


**Respuesta: [E06-dias-entre-fechas](../S05-funciones/E06-dias-entre-fechas.cpp)**

## **E07-punto-en-rectangulo**:

Haga una función para determinar si un punto (X, Y) está dentro de un rectángulo. El rectángulo es definido por la coordenada del vértice superior izquierdo, su altura y su ancho.

**Ejemplo:**

| Entrada                     | Salida  |
|-----------------------------|---------|
| `(2, 3), (0, 0, 5, 5)`      | `Sí`    |
| `(6, 6), (0, 0, 5, 5)`      | `No`    |
| `(3, 4), (1, 1, 4, 4)`      | `Sí`    |
| `(0, 0), (1, 1, 2, 2)`      | `No`    |


**Respuesta: [E07-punto-en-rectangulo](../S05-funciones/E07-punto-en-rectangulo.cpp)**

## **E08-interseccion-entre-rectangulos**:

Usando la función desarrollada en el problema 7 haga una función que tome como entrada dos rectángulos y determine si algún vértice del 1er rectángulo está contenido en el 2do rectángulo.

**Ejemplo:**

| Entrada                                   | Salida  |
|-------------------------------------------|---------|
| `(0, 0, 4, 4), (2, 2, 6, 6)`              | `Sí`    |
| `(0, 0, 2, 2), (3, 3, 5, 5)`              | `No`    |
| `(1, 1, 3, 3), (0, 0, 5, 5)`              | `Sí`    |
| `(5, 5, 2, 2), (0, 0, 4, 4)`              | `No`    |


**Respuesta: [E08-interseccion-entre-rectangulos](../S05-funciones/E08-interseccion-entre-rectangulos.cpp)**

## **E09-analisis-de-codigo**:

Indique los valores que se imprimen en el siguiente segmento de código:

```cpp
int x, y, z;

void a1(int x, int &y) {
	x = 4;
	println(x, y, z);
	y = a2(z, y);
	println(x, y, z);
}

int a2(int &y, int z) {
	x = 5;
	y = 6;
	z = 7;
	println(x, y, z);
	return 2 * x;
}

void main() {
	x = 1;
	y = 2;
	z = 3;
	a1(z, x);
	println(x, y, a2(y, x));
}
```

**Respuesta:**

```cpp
int x, y, z; // Declaración de variables globales

void a1(int x, int &y) { // Función a1 recibe x por valor y y por referencia
    x = 4; // Asigna 4 a la variable local x
    println(x, y, z); // Imprime los valores de x (local), y (referencia) y z (global)
    y = a2(z, y); // Llama a a2 pasando z (global) y y (referencia), asigna el retorno a y
    println(x, y, z); // Imprime los valores de x (local), y (referencia) y z (global)
}

int a2(int &y, int z) { // Función a2 recibe y por referencia y z por valor
    x = 5; // Asigna 5 a la variable global x
    y = 6; // Asigna 6 a la referencia y
    z = 7; // Asigna 7 a la variable local z
    println(x, y, z); // Imprime los valores de x (global), y (referencia) y z (local)
    return 2 * x; // Retorna el doble del valor de x (global)
}

void main() { // Función principal
    x = 1; // Inicializa x (global) con 1
    y = 2; // Inicializa y (global) con 2
    z = 3; // Inicializa z (global) con 3
    a1(z, x); // Llama a a1 pasando z (global) como valor y x (global) como referencia
    println(x, y, a2(y, x)); // Llama a a2 con y (global) como referencia y x (global) como valor, imprime los valores
}
```

El programa imprimiría los siguientes valores en el orden en que se ejecutan las llamadas a `println`:

1. **Primera llamada a `println` en `a1`:**
	- `x = 4` (local en `a1`)
	- `y = 1` (global `x` pasado por referencia)
	- `z = 3` (global)
	- **Salida:** `4 1 3`

2. **Llamada a `println` en `a2` desde `a1`:**
	- `x = 5` (global modificado en `a2`)
	- `y = 6` (referencia modificada en `a2`)
	- `z = 7` (local en `a2`)
	- **Salida:** `5 6 7`

3. **Segunda llamada a `println` en `a1`:**
	- `x = 4` (local en `a1`)
	- `y = 10` (resultado de `a2` asignado a `y`)
	- `z = 3` (global, no modificado)
	- **Salida:** `4 10 3`

4. **Última llamada a `println` en `main`:**
	- `x = 5` (global modificado por `a2`)
	- `y = 6` (global modificado por `a2`)
	- Resultado de `a2(y, x)`:
		- `x = 5` (global)
		- `y = 6` (referencia modificada en `a2`)
		- `z = 7` (local en `a2`)
		- Retorna `2 * x = 10`
	- **Salida:** `5 6 10`

**Salida completa del programa:**

```
4 1 3
5 6 7
4 10 3
5 6 10
```