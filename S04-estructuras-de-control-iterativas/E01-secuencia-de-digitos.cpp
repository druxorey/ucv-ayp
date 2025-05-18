#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E01-SECUENCIA-DE-DIGITOS =========]\e[0m\n\n";

	// Declara i por fuera del bucle for para que sea accesible después
	int inputNumber, i;

	// Solicita al usuario que ingrese un número
	std::cout << "Ingrese el número: ";
	std::cin >> inputNumber;

	// Verifica si el número ingresado es válido
	if (inputNumber < 0) {
		std::cerr << "\n\e[1;31m[ERROR]\e[0m Número ingresado no válido. Por favor, ejecute el programa nuevamente.\n\n";
		return 1; // Termina el programa con un código de error
	}

	// Este bucle seguirá dividiendo el número por 10 hasta que el númeor sea 0
	while (inputNumber - 1 <= -1) {
		inputNumber /= 10; // Elimina el último dígito del número
		i++; // Incrementa el contador de dígitos
	}

	// Imprime el resultado con formato y color
	std::cout << "\n\e[1;34m[RESULTADO]\e[0m El número tiene " << i << " dígitos.\n";

	return 0; // Finaliza el programa
}
