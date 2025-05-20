#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E04-ANALISIS-DE-NUMEROS =========]\e[0m\n\n";

	// Declaración de variables
	int inputNumber, count = 0, sumOfEvenNumbers = 0, sumOfOddNumbers = 0, totalNumbers = 0;

	// Bucle para solicitar números al usuario hasta que ingrese 0
	do {
		// Solicita al usuario que ingrese un número
		std::cout << "Ingrese un número: ";
		std::cin >> inputNumber;

		// Suma el número ingresado al total acumulado
		totalNumbers += inputNumber;

		// Incrementa el contador de números ingresados
		count++;

		// Verifica si el número es par o impar y actualiza las sumas correspondientes
		if (inputNumber % 2 == 0) {
			sumOfEvenNumbers += inputNumber; // Suma a los números pares
		} else {
			sumOfOddNumbers += inputNumber; // Suma a los números impares
		}

	} while (inputNumber != 0); // El bucle termina cuando el usuario ingresa 0

	// Calcula el porcentaje de números pares e impares
	float oddPercentage = ((float)sumOfOddNumbers / totalNumbers) * 100;
	float evenPercentage = ((float)sumOfEvenNumbers / totalNumbers) * 100;

	// Imprime los resultados con formato y en español
	printf("\n\e[1;32m[RESULTADO]\e[0m La suma de todos los números impares es: \e[0;33m%d\e[0m\n", sumOfOddNumbers);
	printf("\e[1;32m[RESULTADO]\e[0m El porcentaje de todos los números impares es: \e[0;33m%.2f%%\e[0m\n", oddPercentage);
	printf("\e[1;32m[RESULTADO]\e[0m La suma de todos los números pares es: \e[0;33m%d\e[0m\n", sumOfEvenNumbers);
	printf("\e[1;32m[RESULTADO]\e[0m El porcentaje de todos los números pares es: \e[0;33m%.2f%%\e[0m\n", evenPercentage);
	printf("\e[1;32m[RESULTADO]\e[0m La suma de todos los números es: \e[0;33m%d\e[0m\n", totalNumbers);
	printf("\e[1;32m[RESULTADO]\e[0m Usted ingresó un total de \e[0;33m%d\e[0m números.\n\n", count);

	return 0; // Indica que el programa terminó correctamente
}
