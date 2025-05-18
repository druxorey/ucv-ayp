#include <iostream> // Biblioteca para entrada y salida estándar
#include <cmath>    // Biblioteca para funciones matemáticas como sqrt()

int main() {
	std::cout << "\n\e[0;35m[========= E04-RAICES-CUADRATICAS =========]\e[0m\n\n";

	// Declaración de variables para los coeficientes de la ecuación cuadrática
	float quadratic, lineal, independent;

	std::cout << "Ingrese el coeficiente A (término cuadrático): ";
	std::cin >> quadratic;

	std::cout << "Ingrese el coeficiente B (término lineal): ";
	std::cin >> lineal;

	std::cout << "Ingrese el coeficiente C (término constante): ";
	std::cin >> independent;

	// Calcula el discriminante de la ecuación cuadrática
	// Fórmula: discriminante = B^2 - 4AC
	float discriminant = lineal * lineal - 4 * quadratic * independent;

	// Calcula las raíces de la ecuación cuadrática usando la fórmula general
	// Fórmula: (-B ± sqrt(discriminante)) / (2A)
	float firstRoot = (-lineal + sqrt(discriminant)) / (2 * quadratic);
	float secondRoot = (-lineal - sqrt(discriminant)) / (2 * quadratic);

	// Imprime los resultados de las raíces calculadas
	std::cout << "\n\e[1;32m[RESULTADO]\e[0m Las raíces de la ecuación cuadrática son:\n";
	std::cout << " - Raíz 1: " << firstRoot << '\n';
	std::cout << " - Raíz 2: " << secondRoot << "\n\n";

	// Finaliza el programa
	return 0;
}
