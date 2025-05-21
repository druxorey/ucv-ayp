#include <iostream> // Biblioteca para entrada y salida estándar

// Definición de la constante PI
// La palabra reservada `const` se utiliza para declarar constantes en C++.
// Una constante es un valor que no puede ser modificado después de su inicialización.
// Esto asegura que el valor de PI permanezca inmutable durante toda la ejecución del programa,
// lo cual es útil para evitar errores accidentales al modificar valores que deben ser constantes.
const double PI = 3.14159;

int main() {
	std::cout << "\n\e[0;35m[========= E09-AREA-TRIANGULO-CIRCULO =========]\e[0m\n\n";

	// Declaración de variables para almacenar la base y altura del triángulo, y el radio del círculo
	double triangleBase, triangleHeight, circleRadius;

	// Solicita al usuario que ingrese la base del triángulo
	std::cout << "Ingrese la base del triángulo: ";
	std::cin >> triangleBase; // Lee el valor ingresado por el usuario y lo almacena en triangleBase

	// Solicita al usuario que ingrese la altura del triángulo
	std::cout << "Ingrese la altura del triángulo: ";
	std::cin >> triangleHeight; // Lee el valor ingresado por el usuario y lo almacena en triangleHeight

	// Solicita al usuario que ingrese el radio del círculo
	std::cout << "Ingrese el radio del círculo: ";
	std::cin >> circleRadius; // Lee el valor ingresado por el usuario y lo almacena en circleRadius

	// Calcula el área del triángulo usando la fórmula: (base * altura) / 2
	double triangleArea = (triangleBase * triangleHeight) / 2;

	// Calcula el área del círculo usando la fórmula: π * radio^2
	double circleArea = PI * (circleRadius * circleRadius);

	std::cout << "\n\e[1;32m[RESULTADO]\e[0m El área del triángulo es: " << triangleArea << "\n";
	std::cout << "\e[1;32m[RESULTADO]\e[0m El área del círculo es: " << circleArea << "\n\n";

	// Compara las áreas y muestra un mensaje indicando cuál es mayor o si son iguales
	if (triangleArea > circleArea) {
		std::cout << "\e[1;32m[RESULTADO]\e[0m El área del triángulo es mayor que el área del círculo.\n";
	} else if (triangleArea < circleArea) {
		std::cout << "\e[1;32m[RESULTADO]\e[0m El área del círculo es mayor que el área del triángulo.\n";
	} else {
		std::cout << "\e[1;32m[RESULTADO]\e[0m El área del triángulo y el área del círculo son iguales.\n";
	}

	return 0; // Retorna 0 para indicar que el programa terminó correctamente
}
