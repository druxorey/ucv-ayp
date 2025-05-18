#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E02-NUMERO-PALINDROMO =========]\e[0m\n\n";

	int inputNumber;

	std::cout << "Ingrese un número: ";
	std::cin >> inputNumber;

	// Convertir el número ingresado a una cadena para facilitar la comparación
	std::string inputNumberString = std::to_string(inputNumber);

	// Inicializar dos índices para comparar los extremos de la cadena
	int i = 0, j = inputNumberString.length() - 1;

	// Bucle para verificar si el número es un palíndromo
	// La condición del bucle se ejecuta mientras i sea menor que j
	// Es decir, mientras no se hayan cruzado los índices
	while (i < j) {
		// Comparar los caracteres en las posiciones opuestas
		if (inputNumberString[i] != inputNumberString[j]) {
			// Si los caracteres no coinciden, el número no es un palíndromo
			std::cout << "\n\e[1;31m[ERROR]\e[0m El número " << inputNumber << " no es capicúa." << '\n';
			return 0;
		}
		// Avanzar los índices hacia el centro
		i++;
		j--;
	}

	// Si se recorrió toda la cadena sin diferencias, el número es un palíndromo
	std::cout << "\n\e[1;32m[RESULTADO]\e[0m El número " << inputNumber << " es capicúa." << '\n';

	return 0;
}
