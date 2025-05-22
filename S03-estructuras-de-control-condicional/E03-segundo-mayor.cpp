#include <iostream>

int main() {
	std::cout << "\n\e[0;35m[========= E03-SEGUNDO-MAYOR =========]\e[0m\n\n";

	// Declaración de variables para almacenar los números ingresados por el usuario
	int firstNumber, secondNumber;

	std::cout << "Introduce el primer número: ";
	std::cin >> firstNumber;

	std::cout << "Introduce el segundo número: ";
	std::cin >> secondNumber;

	// Verifica si los números ingresados son iguales
	if (firstNumber == secondNumber) {
		// Imprime un mensaje de error si los números son iguales y termina el programa
		std::cout << "\n\e[1;31m[ERROR]\e[0m Ambos números son iguales.\n\n";
		return 1; // Termina el programa si los números son iguales
	}

	// Determina cuál de los dos números es el mayor
	// Si el primer número es mayor que el segundo, se imprime el primer número
	// Si no, entramos al bloque else y se imprime el segundo número
	// El problema realmente pide es el menor de los dos números, es una concha de mango
	if (firstNumber > secondNumber) {
		std::cout << "\nEl segundo número mayor es: " << secondNumber << "\n\n";
	} else {
		std::cout << "\nEl segundo número mayor es: " << firstNumber << "\n\n";
	}

	return 0;
}
