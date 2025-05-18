#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E05-INTERVALO-CERRADO =========]\e[0m\n\n";

	float v1, v2, xValue;

	std::cout << "Ingrese el límite inferior (V1): ";
	std::cin >> v1;

	std::cout << "Ingrese el límite superior (V2): ";
	std::cin >> v2;

	std::cout << "Ingrese el valor a verificar (x): ";
	std::cin >> xValue;
	std::cout << '\n';

	// Verifica si el valor está dentro del intervalo cerrado [v1, v2]
	// La condición (v1 <= xValue && xValue <= v2) utiliza el operador lógico "&&" (AND).
	// Esto significa que ambas condiciones deben ser verdaderas para que el resultado sea verdadero:
	// 1. v1 <= xValue: Verifica que el valor xValue no sea menor que el límite inferior v1.
	// 2. xValue <= v2: Verifica que el valor xValue no sea mayor que el límite superior v2.
	// Si ambas condiciones son verdaderas, entonces el valor está dentro del intervalo.
	bool isInside = (v1 <= xValue && xValue <= v2);

	// Imprime el resultado indicando si el valor está o no dentro del intervalo
	// Aquí se utiliza el operador ternario (condición ? valor_si_verdadero : valor_si_falso).
	// Este operador evalúa la condición "isInside":
	// - Si isInside es verdadero, se selecciona " está".
	// - Si isInside es falso, se selecciona " no está".
	std::cout << "\e[1;32m[RESULTADO]\e[0m El valor " << xValue;
	std::cout << (isInside ? " está" : " no está");
	std::cout << " dentro del intervalo [" << v1 << ", " << v2 << "]." << "\n\n";

	// Finaliza el programa
	return 0;
}
