#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E05-BINARIO-ITERATIVO =========]\e[0m\n\n";

	// Declaración de variables
	int inputDigit, binaryNumber = 0, decimalValue = 0, finalDecimalValue = 0;

	// Bucle para capturar los dígitos binarios ingresados por el usuario
	do {
		// Solicitar al usuario un dígito binario
		std::cout << "Ingrese un dígito binario (0 o 1, -1 para terminar): ";
		std::cin >> inputDigit;

		// Validar si el dígito ingresado es 0 o 1
		if (inputDigit == 1 || inputDigit == 0) {
			// Si el dígito ingresado es válido (0 o 1), se agrega al número binario.
			// Esto se hace multiplicando el número binario actual por 10 (para desplazar los dígitos existentes a la izquierda)
			// y sumando el nuevo dígito ingresado.
			binaryNumber = binaryNumber * 10 + inputDigit;
		} else if (inputDigit != -1) {
			// Si el dígito ingresado no es válido (ni 0, ni 1, ni -1), se muestra un mensaje de error.
			// El mensaje utiliza formato de color para resaltar el error.
			std::cout << "\n\e[1;31m[ERROR]\e[0m Número incorrecto, intente nuevamente.\n\n";
		}

	} while (inputDigit != -1); // Terminar el bucle cuando el usuario ingrese -1

	// Mostrar el número binario completo ingresado
	std::cout << "\n\e[1;32m[RESULTADO]\e[0m El número binario es: " << binaryNumber << "\n";

	// Convertir el número binario a decimal
	for (int powerOfTwo = 1; binaryNumber > 0; powerOfTwo *= 2) {
		// Extraer el último dígito del número binario y calcular su valor decimal
		decimalValue = (binaryNumber % 10) * powerOfTwo;
		// Eliminar el último dígito del número binario
		binaryNumber /= 10;
		// Acumular el valor decimal total
		finalDecimalValue += decimalValue;  
	}

	// Mostrar el número decimal resultante
	std::cout << "\e[1;32m[RESULTADO]\e[0m El número decimal es: " << finalDecimalValue << "\n\n";

	return 0; // Indicar que el programa terminó correctamente
}
