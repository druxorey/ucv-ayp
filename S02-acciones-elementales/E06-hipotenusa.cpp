#include <iostream> // Biblioteca para entrada y salida estándar
#include <cmath>  // Biblioteca para funciones matemáticas

int main() {
	std::cout << "\n\e[0;35m[========= E06-HIPOTENUSA =========]\e[0m\n\n";

	// Declaración de variables para los catetos y la hipotenusa
	double firstCathetus, secondCathetus, hypotenuse;

	// Solicita al usuario el valor del primer cateto
	std::cout << "Por favor, ingrese el valor del primer cateto: ";
	std::cin >> firstCathetus;

	// Solicita al usuario el valor del segundo cateto
	std::cout << "Por favor, ingrese el valor del segundo cateto: ";
	std::cin >> secondCathetus;

	// Calcula la hipotenusa utilizando el teorema de Pitágoras
	hypotenuse = sqrt(pow(firstCathetus, 2) + pow(secondCathetus, 2));

	// Muestra el resultado de la hipotenusa calculada
	printf("\n\e[1;32m[RESULTADO]\e[0m La hipotenusa es: %.2f\n\n", hypotenuse);

	// Finaliza el programa devolviendo 0 al sistema operativo
	return 0;
}
