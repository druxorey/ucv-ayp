#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E11-INTERSECCION-DE-RECTAS =========]\e[0m\n\n";

	// Declaración de variables para las pendientes y las intersecciones con el eje Y
	double m1, b1, m2, b2;

	// Solicitar al usuario los valores de las pendientes y las intersecciones
	std::cout << "Ingrese el valor de m1 (pendiente de la primera recta): ";
	std::cin >> m1;
	std::cout << "Ingrese el valor de b1 (intersección con el eje Y de la primera recta): ";
	std::cin >> b1;
	std::cout << "Ingrese el valor de m2 (pendiente de la segunda recta): ";
	std::cin >> m2;
	std::cout << "Ingrese el valor de b2 (intersección con el eje Y de la segunda recta): ";
	std::cin >> b2;

	// Verificar que las rectas no sean paralelas (m1 != m2)
	if (m1 == m2) {
		std::cout << "\n\e[1;31m[ERROR]\e[0m Las rectas son paralelas y no tienen un punto de intersección.\n\n";
		return 1; // Salida con error
	}

	// Calcular el punto de intersección
	// Fórmula para x: x = (b2 - b1) / (m1 - m2)
	const double x = (b2 - b1) / (m1 - m2); // Uso de 'const' para indicar que x no cambiará
	// Fórmula para y: y = m1 * x + b1
	const double y = m1 * x + b1; // Uso de 'const' para indicar que y no cambiará

	// Mostrar el resultado con formato y precisión de 4 decimales
	std::cout << "\n\e[1;32m[RESULTADO]\e[0m El punto de intersección es: x = " << x << ", y = " << y << "\n\n";

	return 0; // Indica que el programa terminó correctamente
}
