#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E01-NUMERO-CAPICUA =========]\e[0m\n\n";

	int inputNumber;
	int digit1, digit2, digit4, digit5;

	std::cout << "Por favor, ingrese un número de 5 dígitos: ";
	std::cin >> inputNumber;

	// Extrae los dígitos individuales del número ingresado
	digit1 = (inputNumber / 10000);          // Primer dígito
	digit2 = (inputNumber % 10000) / 1000;   // Segundo dígito
	digit4 = (inputNumber % 100) / 10;       // Cuarto dígito
	digit5 = (inputNumber % 10);             // Quinto dígito

	// Verifica si el número es capicúa (palíndromo)
	if (digit1 == digit5 && digit2 == digit4) {
		// Si los dígitos coinciden, el número es capicúa
		std::cout << "\e[1;32m[RESULTADO]\e[0m El número " << inputNumber << " es un número capicúa.\n\n";
	} else {
		// Si los dígitos no coinciden, el número no es capicúa
		std::cout << "\e[1;31m[RESULTADO]\e[0m El número " << inputNumber << " no es un número capicúa.\n\n";
	}

	// Finaliza el programa
	return 0;
}
