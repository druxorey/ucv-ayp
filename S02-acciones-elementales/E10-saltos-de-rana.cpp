#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E10-SALTOS-DE-RANA =========]\e[0m\n\n";

	// Declaración de variables para las distancias y el número de saltos
	int joseDistance, pedroDistance, joseJumps;

	std::cout << "Ingrese la distancia que puede saltar José (en cm): ";
	std::cin >> joseDistance;

	std::cout << "Ingrese el número de saltos que hará José: ";
	std::cin >> joseJumps;

	std::cout << "Ingrese la distancia que puede saltar Pedro (en cm): ";
	std::cin >> pedroDistance;
	std::cout << '\n';

	// Calcula el divisor para el mínimo común múltiplo (MCM)
	int mcmDivisor = (joseDistance - pedroDistance);

	// Ajusta el divisor en caso de que sea 0 o negativo
	// Nota: La explicación detallada de que significa el if y el else se dará en la sección de condicionales.
	if (mcmDivisor == 0) mcmDivisor = joseDistance; // Si las distancias son iguales
	else if (mcmDivisor < 0) mcmDivisor = 1;        // Si Pedro salta más lejos que José

	// Calcula el MCM de las distancias de salto de José y Pedro
	int mcm = (joseDistance * pedroDistance) / mcmDivisor;

	// Verifica si el MCM está dentro del alcance de los saltos de José
	if (mcm <= joseJumps * joseDistance) {
		// Si se cumple, las ranas se encontrarán en el mismo punto
		std::cout << "\n\e[1;32m[RESULTADO]\e[0m Las ranas se encontrarán en el mismo punto:\n";
		std::cout << "  - Saltos necesarios: " << mcm / joseDistance << '\n';
		std::cout << "  - Distancia desde el inicio: " << mcm << " cm\n\n";
	} else {
		// Si no se cumple, las ranas no se encontrarán antes de que José termine sus saltos
		std::cout << "\e[1;31m[RESULTADO]\e[0m Las ranas no se encontrarán antes de que José termine todos sus saltos.\n\n";
	}

	// Finaliza el programa
	return 0;
}
