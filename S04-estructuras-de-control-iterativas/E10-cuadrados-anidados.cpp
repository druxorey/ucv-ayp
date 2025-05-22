#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E10-CUADRADOS-ANIDADOS =========]\e[0m\n\n";

	// Declaración de variables
	int borderSize; // Tamaño del borde del cuadrado

	// Solicitar al usuario el tamaño del borde
	std::cout << "Ingrese el tamaño del borde \e[0;33m[número impar]\e[0m: ";
	std::cin >> borderSize;
	std::cout << '\n';

	// Validar que el tamaño del borde sea un número impar
	if (borderSize % 2 == 0) {
		std::cout << "\e[1;31m[ERROR]\e[0m El número no es impar, por favor intente nuevamente.\n\n";
		return 1; // Finalizar el programa si el número no es impar
	}

	// Mi forma de ver este ejercicio es en lugar de iterar de 0 a n, iterar de 0 a n/2
	// Es decir, ver el cuadrado desde el centro hasta afuera, haciendo que los anillos tengan
	// la misma distancia con respecto al centro, para facilitar las comparaciones

	// Calcular la distancia desde el centro del cuadrado
	int centerOffset = (borderSize - 1) / 2;

	// Determinar si el centroOffset es par o impar
	// Esto porque si no calculo esto, hay ciertos número en el que
	// se imprimirá el siguiente anillo contiguo al borde
	int isCenterEven = ((centerOffset / 2) % 2 == 0) ? 0 : 1;

	// Bucle para recorrer las filas del cuadrado
	for (int row = 0; row < borderSize; row++) {
		// Calcular la distancia vertical desde el centro
		// Se usa abs() para asegurar que la distancia sea positiva
		int verticalDistance = abs(row - centerOffset);

		// Bucle para recorrer las columnas del cuadrado
		for (int col = 0; col < borderSize; col++) {
			// Calcular la distancia horizontal desde el centro
			// Se usa abs() para asegurar que la distancia sea positiva
			int horizontalDistance = abs(col - centerOffset);

			// Condición para dibujar el borde del cuadrado
			if (row == 0 || col == 0 || row == borderSize - 1 || col == borderSize - 1) {
				std::cout << " x"; // Dibujar el borde con 'x'
			}
			// Condición para dibujar los cuadrados anidados
			// Esta condición utiliza dos partes principales para determinar si se debe dibujar un 'o' en la posición actual:
			// 1. La primera parte verifica si la distancia vertical desde el centro es divisible por 2 (según la paridad del centro)
			//    Esto para asegurarse de que el cuadrado anidado se dibuje en la posición correcta,
			//    y si esta distancia es mayor o igual a la distancia horizontal.
			// 2. La segunda parte verifica lo mismo pero intercambiando las distancias (horizontal y vertical).
			// Esto asegura que los cuadrados anidados se dibujen de manera alternada y simétrica.
			else if ((verticalDistance % 2 == isCenterEven && verticalDistance >= horizontalDistance) ||
					 (horizontalDistance % 2 == isCenterEven && horizontalDistance >= verticalDistance)) {
				std::cout << " o"; // Dibujar los cuadrados anidados con 'o'
			}
			// Espacios vacíos dentro del cuadrado
			else {
				std::cout << "  "; // Dibujar un espacio vacío
			}
		}
		// Salto de línea al final de cada fila
		std::cout << '\n';
	}

	return 0; // Finalizar el programa
}
