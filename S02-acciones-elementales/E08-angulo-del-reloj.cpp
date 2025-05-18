#include <iostream> // Biblioteca para entrada y salida estándar
#include <cmath>    // Biblioteca para funciones matemáticas como fabs()

int main() {
	std::cout << "\n\e[0;35m[========= E08-ANGULO-DEL-RELOJ =========]\e[0m\n\n";

	float hourHand, minuteHand;

	std::cout << "Ingrese la posición de la manecilla de la hora (0-12): ";
	std::cin >> hourHand;
	std::cout << "Ingrese la posición de la manecilla de los minutos (0-59): ";
	std::cin >> minuteHand;

	float hourAngle, minuteAngle, finalAngle;

	// Calcula el ángulo de la manecilla de la hora (cada hora equivale a 30 grados)
	hourAngle = hourHand * 30;

	// Calcula el ángulo de la manecilla de los minutos (cada minuto equivale a 6 grados)
	minuteAngle = minuteHand * 6;

	// Calcula el ángulo absoluto entre las dos manecillas
	// Por cada minuto que pasa, la manecilla de la hora avanza 1/12 de un grado (ya que una hora equivale a 30 grados y hay 60 minutos en una hora).
	// Por lo tanto, se suma el ángulo correspondiente a los minutos (minuteAngle / 12) al ángulo de la hora.
	finalAngle = fabs((hourAngle + (minuteAngle / 12)) - minuteAngle);
	// Se utiliza fabs en lugar de abs porque abs trunca los decimales, mientras que fabs conserva la precisión en números de punto flotante.

	// Muestra el resultado del ángulo calculado en la consola
	std::cout << "\n\e[1;32m[RESULTADO]\e[0m El ángulo entre las manecillas del reloj es: " << finalAngle << " grados.\n\n";

	return 0;
}
