#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E07-FICHAS-DE-DOMINO =========]\e[0m\n\n";

	// Variable que controla cuántas fichas se imprimen en una fila
	int dominoPerFile = 0;

	// Bucle externo: representa el primer número de la ficha de dominó (de 0 a 6)
	for (int upperNumber = 0; upperNumber <= 6; upperNumber++) {
		// Bucle interno: representa el segundo número de la ficha (de 0 al valor del primer número)
		// Esto es así porque las fichas de dominó son simétricas (0|1 es lo mismo que 1|0)
		for (int lowerNumber = 0; lowerNumber <= upperNumber; lowerNumber++) {

			// Si es la primera ficha de una fila, imprime un espacio inicial para alinear
			if (dominoPerFile == 0) {
				std::cout << "       ";
			}

			// Imprime la ficha de dominó con formato de fondo blanco y texto negro
			// \e[47;30m establece el fondo blanco (47) y el texto negro (30)
			// \e[0m reinicia el formato al final
			std::cout << " \e[47;30m" << upperNumber << "|" << lowerNumber << "\e[0m";
			dominoPerFile++;

			// Si se han impreso 7 fichas en la fila, imprime un salto de línea y reinicia el contador
			if (dominoPerFile == 7) {
				std::cout << "\n";
				dominoPerFile = 0;
			}
		}
	}

	// Imprime un salto de línea final para separar la salida
	std::cout << "\n";

	return 0; // Indica que el programa terminó correctamente
}
