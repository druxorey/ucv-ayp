#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E09-BORDE-DEL-CUADRADO =========]\e[0m\n\n";

	// Declaración de la variable que almacenará el tamaño del borde
	int squareSize;

	// Solicita al usuario que ingrese el tamaño del borde
	std::cout << "Ingrese el tamaño del cuadrado: ";
	std::cin >> squareSize;

	// Bucle externo: recorre cada fila del cuadrado
	for (int row = 0; row < squareSize; row++) {

		// Bucle interno: recorre cada columna de la fila actual
		for (int col = 0; col < squareSize; col++) {
			// Condición para determinar si estamos en el borde del cuadrado
			// Se imprime una "x" si estamos en la primera o última fila (row == 0 o row == squareSize - 1)
			// o si estamos en la primera o última columna (col == 0 o col == squareSize - 1)
			if (row == 0 || row == squareSize - 1 || col == 0 || col == squareSize - 1) {
				std::cout << " x";
			} else {
				// Si no estamos en el borde, se imprime un espacio vacío
				std::cout << "  ";
			}
		}
		// Salto de línea al final de cada fila
		std::cout << '\n';
	}

	// Finaliza el programa
	return 0;
}
