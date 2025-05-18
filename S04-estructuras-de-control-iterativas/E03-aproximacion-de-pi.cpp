#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[1;35m[========= E03-APROXIMACION-DE-PI =========]\e[0m\n\n";

	double piValue = 4.0;
	int totalIterations, i;

	// Solicitar al usuario el número de iteraciones
	std::cout << "Ingrese el número de iteraciones: ";
	std::cin >> totalIterations;

	// Verificar si el número de iteraciones es mayor a 100,000
	// Esto se hace para optimizar el cálculo en iteraciones grandes, ya que imprimir en cada iteración consume tiempo
	if (totalIterations > 100000) {
		// Se itera desde 3 hasta 4 veces el número de iteraciones, incrementando de 4 en 4
		for (i = 3; i <= (totalIterations * 4); i += 4) {
			// Fórmula de aproximación de π usando la serie de Leibniz
			piValue = piValue - (4 / (double)i) + (4 / ((double)i + 2.0));

			// Mostrar el cálculo actual en cada iteración
			// Se usa printf para facilitar la impresión de decimales con precisión
			printf("\e[1;33m[CALCULO ACTUAL]\e[0m %.32lf \n", piValue);
		}
	} else {
		// Se multiplica el número de iteraciones por 4 para obtener el rango correcto
		for (i = 3; i <= (totalIterations * 4); i += 4) {
			// Fórmula de aproximación de π usando la serie de Leibniz
			piValue = piValue - (4 / (double)i) + (4 / ((double)i + 2.0));
		}
	}

	// Mostrar el resultado final del cálculo
	// Se usa printf para mostrar el valor de π con 32 decimales
	printf("\n\e[1;32m[RESULTADO]\e[0m El valor aproximado de π es: %.32lf \n", piValue);

	return 0; // Indicar que el programa terminó correctamente
}
