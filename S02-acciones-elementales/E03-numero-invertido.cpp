#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E03-NUMERO-INVERTIDO =========]\e[0m\n\n";

	// Declaración de variables: número de entrada y número invertido
	int inputNumber, invertedNumber = 0;

	// Solicita al usuario que ingrese un número de 4 dígitos
	std::cout << "Por favor, ingrese un número de 4 dígitos para invertir: ";
	std::cin >> inputNumber;

	// Declaración de variables para almacenar cada dígito del número
	int digit1, digit2, digit3, digit4;

	// Extrae el primer dígito (miles) dividiendo entre 1000
	digit1 = (inputNumber / 1000);
	// Extrae el segundo dígito (centenas) usando el módulo 1000 y dividiendo entre 100
	digit2 = (inputNumber % 1000) / 100;
	// Extrae el tercer dígito (decenas) usando el módulo 100 y dividiendo entre 10
	digit3 = (inputNumber % 100) / 10;
	// Extrae el cuarto dígito (unidades) usando el módulo 10
	digit4 = (inputNumber % 10);

	// Calcula el número invertido reorganizando los dígitos en orden inverso
	invertedNumber = (digit4 * 1000) + (digit3 * 100) + (digit2 * 10) + digit1;

	// Muestra el resultado del número invertido
	std::cout << "\n\e[1;32m[RESULTADO]\e[0m El número invertido es: " << invertedNumber << "\n\n";

	return 0;
}
