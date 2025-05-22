#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E08-SECUENCIA-DECIMAL =========]\e[0m\n\n";

	// Variables para almacenar el dígito ingresado y el número completo generado
	int inputDigit, completeNumber = 0;

	// Bucle que se ejecuta mientras no se ingrese el dígito de terminación (-1)
	do {
		// Solicitar al usuario que ingrese un número
		std::cout << "Ingrese un número: ";
		std::cin >> inputDigit;

		// Verificar si el usuario ingresó el dígito de terminación (-1)
		if (inputDigit == -1) break; // Salir del bucle si se ingresa -1
			
		// Verificar si el número ingresado está fuera del rango permitido (0-10)
		if (inputDigit < 0 || inputDigit > 10) {
			std::cout << "\e[1;31m[ERROR]\e[0m El número no es aceptable, intente nuevamente.\n";
			continue; // Continue hace que el bucle vuelva a empezar sin ejecutar el resto del código
		}

		// Si el número es válido, agregarlo al número completo
		completeNumber = (completeNumber * 10) + inputDigit;

	} while (inputDigit != -1); // Continuar mientras no se ingrese -1

	// Mostrar el número completo generado
	std::cout << "\n\e[1;32m[RESULTADO]\e[0m El número completo generado es: " << completeNumber << "\n\n";

	return 0; // Indicar que el programa finalizó correctamente
}
