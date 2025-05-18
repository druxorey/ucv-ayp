#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E04-PAGO-DEL-ESTACIONAMIENTO =========]\e[0m\n\n";

	// Declaración de constantes y variables
	const float BASIC_FEE = 80, EXTRA_FEE = 100;
	// const hace que las variables sean constantes, es decir, no se pueden modificar

	int initialHour, initialMinutes, finalHour, finalMinutes, totalMinutes, displayedHours, displayedMinutes;
	float totalPayment;

	std::cout << "Ingrese la hora inicial (HH MM): ";
	std::cin >> initialHour >> initialMinutes;

	std::cout << "Ingrese la hora final (HH MM): ";
	std::cin >> finalHour >> finalMinutes;

	// Verifica si la hora inicial es válida
	if (initialHour < 0 || initialHour > 23 || initialMinutes < 0 || initialMinutes > 59) {
		// cerr es un flujo de salida estándar para errores
		std::cerr << "\n\e[1;31m[ERROR]\e[0m Hora inicial inválida.\n\n";
		return 1; // Termina el programa con un código de error
	}

	// Calcula el tiempo total en minutos
	totalMinutes = (finalHour * 60 + finalMinutes) - (initialHour * 60 + initialMinutes);

	std::cout << "\n\e[0;34mRESULTADO DEL PAGO\e[0m\n\n";

	// Calcula el pago si el tiempo total es menor o igual a 60 minutos
	if (totalMinutes <= 60 && totalMinutes > 0) {

		totalPayment = (float)totalMinutes * BASIC_FEE / 60; // Pago proporcional
		// (float) es un casteo que convierte el valor a tipo float

		std::cout << "Tiempo estacionado:\e[0;33m " << totalMinutes << " minutos\e[0m.\n";
		std::cout << "El monto a pagar es:\e[0;32m Bs." << totalPayment << "\e[0m.\n";

	} else {
		// Ajusta el tiempo total si es negativo (cruza medianoche)
		if (totalMinutes <= 0) totalMinutes = 1440 - abs(totalMinutes);

		// Calcula el pago para más de 60 minutos
		totalPayment = (((float)totalMinutes - 60) * EXTRA_FEE / 60) + BASIC_FEE;
		displayedHours = totalMinutes / 60; // Horas estacionadas
		displayedMinutes = totalMinutes % 60; // Minutos restantes

		// Imprime el tiempo estacionado y el monto a pagar
		std::cout << "Tiempo estacionado:\e[0;33m " << displayedHours << " horas\e[0m y\e[0;33m " << displayedMinutes << " minutos\e[0m.\n";
		std::cout << "El monto a pagar es:\e[0;32m Bs." << totalPayment << "\e[0m.\n";
	}

	// Salto de línea final
	std::cout << '\n';

	// Finaliza el programa
	return 0;
}
