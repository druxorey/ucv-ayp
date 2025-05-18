#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E08-NUMERO-FELIZ =========]\e[0m\n\n";

	int initialNumber, digit1, digit2, digit3, digit4;
	bool isHappyNumber = false, isAscendantNumber = false;

	std::cout << "Por favor, ingrese un número de 4 dígitos: ";
	std::cin >> initialNumber;

	// Verifica si el número ingresado es válido
	if (initialNumber < 1000 || initialNumber > 9999) {
		std::cerr << "\n\e[1;31m[ERROR]\e[0m Número ingresado no válido. Por favor, ejecute el programa nuevamente.\n\n";
		return 1; // Termina el programa con un código de error
	}

	// Descompone el número en sus dígitos individuales
	digit1 = (initialNumber / 1000);       // Dígito de las unidades de mil
	digit2 = (initialNumber % 1000) / 100; // Dígito de las centenas
	digit3 = (initialNumber % 100) / 10;   // Dígito de las decenas
	digit4 = (initialNumber % 10);         // Dígito de las unidades

	// Determina si el número es "feliz" (los primeros dos dígitos son mayores que los últimos dos)
	// Aquí, el operador `>` tiene menor prioridad que la división `/` y el módulo `%`.
	// Por lo tanto, primero se calculan los valores de `initialNumber / 100` y `initialNumber % 100`,
	// y luego se comparan correctamente.
	isHappyNumber = initialNumber / 100 > initialNumber % 100;

	// Determina si los dígitos están en orden ascendente
	// En este caso, el operador `&&` tiene menor prioridad que los operadores `>`.
	// Esto permite que las comparaciones `digit4 > digit3`, `digit3 > digit2` y `digit2 > digit1`
	// se evalúen primero, y luego se combinen correctamente en un solo valor booleano.
	isAscendantNumber = digit4 > digit3 && digit3 > digit2 && digit2 > digit1;

	// Imprime el resultado dependiendo de las condiciones
	std::cout << "\n\e[1;34m[RESULTADO]\e[0m El número es ";
	if (isHappyNumber && isAscendantNumber) {
		std::cout << "\e[0;32mmuy feliz\e[0m.\n";
	} else if (!isHappyNumber && !isAscendantNumber) {
		std::cout << "\e[0;31minfeliz\e[0m.\n";
	} else if (isAscendantNumber) {
		std::cout << "\e[0;33mascendente\e[0m.\n";
	} else if (isHappyNumber) {
		std::cout << "\e[0;32mfeliz\e[0m.\n";
	} else {
		std::cout << "\e[0;31mraro, no deberías de ver esto.....\e[0m.\n";
		return 1; // Termina el programa con un código de error
	}
	std::cout << "\n";

	return 0; // Indica que el programa terminó correctamente
}
