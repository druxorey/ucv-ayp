# Estructuras de Control Condicional

## **E01-numero-capicua**:

Haga un algoritmo que imprima *“Capicúa”* si un número de entrada de 5 dígitos es palíndromo, o *“No es Capicúa”* en caso contrario. Un número es palíndromo si se escribe igual al derecho y al revés.

**Ejemplo:**

| Entrada   | Salida         |
|-----------|----------------|
| `545`     | `Capicúa`      |
| `12321`   | `Capicúa`      |
| `12345`   | `No es Capicúa`|


**Respuesta: [E01-numero-capicua](../S03-estructuras-de-control-condicional/E01-numero-capicua.cpp)**

## **E02-segundos-transcurridos**:

Cree un algoritmo que tome como entrada la hora exacta (horas, minutos, segundos y AM/PM) e indique el número de segundos transcurridos durante ese día.

**Ejemplo:**

| Entrada                  | Salida                  |
|--------------------------|-------------------------|
| `Hora: 01:00:00 AM`      | `Segundos: 0`          |
| `Hora: 12:30:15 PM`      | `Segundos: 45015`      |
| `Hora: 11:59:59 PM`      | `Segundos: 86399`      |


**Respuesta: [E02-segundos-transcurridos](../S03-estructuras-de-control-condicional/E02-segundos-transcurridos.cpp)**

## **E03-segundo-mayor**:

Haga un algoritmo que tome como entrada 2 números distintos e imprima el segundo número mayor.

**Ejemplo:**

| Entrada       | Salida         |
|---------------|----------------|
| `N1 = 5, N2 = 10` | `Segundo mayor: 5` |
| `N1 = 20, N2 = 15` | `Segundo mayor: 15`|


**Respuesta: [E03-segundo-mayor](../S03-estructuras-de-control-condicional/E03-segundo-mayor.cpp)**

## **E04-pago-del-estacionamiento**:

En un estacionamiento, la primera hora se cobra a razón de 80$ por hora (o fracción). Después de la primera hora, cada hora adicional (o fracción) se cobra a 100$. Escriba un algoritmo que reciba como entrada la hora de entrada y la hora de salida de un vehículo (formato de 24h) y calcule el monto a pagar.

**Ejemplo:**

| Entrada                          | Salida                  |
|----------------------------------|-------------------------|
| `Entrada: 10:00, Salida: 10:30`  | `Costo: 80$`           |
| `Entrada: 10:00, Salida: 11:30`  | `Costo: 180$`          |
| `Entrada: 10:00, Salida: 13:00`  | `Costo: 380$`          |


**Respuesta: [E04-pago-del-estacionamiento](../S03-estructuras-de-control-condicional/E04-pago-del-estacionamiento.cpp)**

## **E05-intervalo-cerrado**:

Dados dos valores `V1`, `V2` que forman un intervalo cerrado, y un valor `X`, haga un algoritmo para determinar si `X` está dentro o fuera del intervalo.

**Ejemplo:**

| Entrada                | Salida              |
|------------------------|---------------------|
| `V1 = 5, V2 = 10, X = 7` | `Dentro del intervalo` |
| `V1 = 5, V2 = 10, X = 3` | `Fuera del intervalo`  |
| `V1 = 5, V2 = 10, X = 10`| `Dentro del intervalo` |


**Respuesta: [E05-intervalo-cerrado](../S03-estructuras-de-control-condicional/E05-intervalo-cerrado.cpp)**

## **E06-calculadora-de-imc**:

El IMC (Índice de Masa Corporal) es un indicador del peso de una persona en relación con su altura. Escriba un algoritmo que dado el peso de una persona en libras (1 libra = 0.453592 Kg) y su estatura en centímetros, calcule su IMC e indique la categoría según la OMS.

- Menor a 16: Criterio de ingreso.
- 16 a 16.9: infrapeso.
- 17 a 18.4: bajo peso.
- 18.5 a 24.9: peso normal.
- 25 a 29.9: sobrepeso.
- 30 a 34.9: obesidad premórbida.
- 40 a 45: obesidad mórbida.
- Mayor a 45: obesidad hipermórbida.

**Ejemplo:**

| Entrada                          | Salida                                                                 |
|----------------------------------|------------------------------------------------------------------------|
| `Peso: 150 lbs, Altura: 170 cm`  | `Peso: 68.04 kg, IMC: 23.53, Categoría: Peso normal`                  |
| `Peso: 200 lbs, Altura: 160 cm`  | `Peso: 90.72 kg, IMC: 35.43, Categoría: Obesidad premórbida`          |
| `Peso: 120 lbs, Altura: 180 cm`  | `Peso: 54.43 kg, IMC: 16.79, Categoría: Infrapeso`                    |


**Respuesta: [E06-calculadora-de-imc](../S03-estructuras-de-control-condicional/E06-calculadora-de-imc.cpp)**

## **E07-dias-transcurridos**:

Escriba un algoritmo que reciba como entrada una fecha (día y mes) del año actual e imprima el número de días transcurridos desde el 1ro de Enero.

**Ejemplo:**

| Entrada       | Salida                  |
|---------------|-------------------------|
| `Día: 15, Mes: 1` | `Días transcurridos: 15` |
| `Día: 1, Mes: 3`  | `Días transcurridos: 59` |
| `Día: 25, Mes: 12`| `Días transcurridos: 359`|


**Respuesta: [E07-dias-transcurridos](../S03-estructuras-de-control-condicional/E07-dias-transcurridos.cpp)**

## **E08-numero-feliz**:

Un número de 4 cifras es feliz si los dos primeros dígitos son mayores que los dos últimos dígitos. Por ejemplo 5612 es feliz porque 56 es mayor que 12. Un número de 4 cifras es creciente si cada dígito es mayor al anterior. Por ejemplo 1569 es creciente porque 9 > 6 > 5 > 1. Todo número que es feliz y creciente se dice que es un número muy feliz. Todo número que no es feliz ni creciente se dice que es infeliz. Haga un algoritmo que tome como entrada un número de 4 dígitos e imprima el tipo de número encontrado, según la clasificación descrita.

**Ejemplo:**

| Entrada   | Salida                  |
|-----------|-------------------------|
| `5612`    | `Feliz`                |
| `1569`    | `Creciente`            |
| `7890`    | `Muy feliz`            |


**Respuesta: [E08-numero-feliz](../S03-estructuras-de-control-condicional/E08-numero-feliz.cpp)**

## **E09-nombre-del-mes**:

Haga un algoritmo que reciba como entrada un número entre 1 y 12 e imprima el nombre del mes correspondiente. Tome en cuenta posibles valores erróneos en la entrada.

**Ejemplo:**

| Entrada   | Salida         |
|-----------|----------------|
| `1`       | `Enero`        |
| `7`       | `Julio`        |
| `13`      | `Entrada inválida` |


**Respuesta: [E09-nombre-del-mes](../S03-estructuras-de-control-condicional/E09-nombre-del-mes.cpp)**

## **E10-numero-primo**:

Haga un algoritmo que tome como entrada un número menor a 100 y determine si es primo (recuerde que un número N es primo si sus únicos divisores son 1 y N).

**Ejemplo:**

| Entrada   | Salida         |
|-----------|----------------|
| `2`       | `Primo`        |
| `15`      | `No es primo`  |
| `97`      | `Primo`        |


**Respuesta: [E10-numero-primo](../S03-estructuras-de-control-condicional/E10-numero-primo.cpp)**
