#include <iostream>

int main() {
	std::cout << "\n\e[0;35m[========= E02-SEGUNDOS-TRANSCURRIDOS =========]\e[0m\n\n";

	// Declaración de variables para almacenar horas, minutos, segundos y el indicador AM/PM
	short int hours, minutes, seconds;
	char meridianIndicator;

	std::cout << "Introduce la hora: ";
	std::cin >> hours;

	// Verifica que la hora esté en el rango válido (entre 0 y 12 inclusive)
	// El operador "||" significa "o", por lo que esta condición se cumple si:
	// - La hora es menor que 0 (hours < 0), lo cual no es válido
	// - O si la hora es mayor que 12 (hours > 12), lo cual tampoco es válido
	if (hours < 0 || hours > 12) {
		std::cout << "\n\e[1;31m[ERROR]\e[0m La hora debe estar entre 0 y 12.\n\n";
		return 1; // Termina el programa si la hora no es válida
	}

	std::cout << "Am o PM? (a/A o p/P): ";
	std::cin >> meridianIndicator;

	// Verifica que el indicador AM/PM sea válido
	// Aquí se usa "&&", que significa "y". Esta condición se cumple si:
	// - El indicador no es 'a' y tampoco es 'A' (meridianIndicator != 'a' && meridianIndicator != 'A')
	// - Y además, el indicador no es 'p' ni 'P' (meridianIndicator != 'p' && meridianIndicator != 'P')
	if (meridianIndicator != 'a' && meridianIndicator != 'A' && meridianIndicator != 'p' && meridianIndicator != 'P') {
		std::cout << "\n\e[1;31m[ERROR]\e[0m Debe introducir a/A o p/P.\n\n";
		return 1; // Termina el programa si el indicador no es válido
	} else if (meridianIndicator == 'p' || meridianIndicator == 'P') {
		// Si el indicador es 'p' o 'P' (es decir, PM), se suman 12 horas
		// Esto convierte la hora al formato de 24 horas
		hours += 12;
	}

	std::cout << "Introduce los minutos: ";
	std::cin >> minutes;

	// Verifica que los minutos estén en el rango válido (entre 0 y 59 inclusive)
	// Esta condición se cumple si:
	// - Los minutos son menores que 0 (minutes < 0), lo cual no es válido
	// - O si los minutos son mayores que 59 (minutes > 59), lo cual tampoco es válido
	if (minutes < 0 || minutes > 59) {
		std::cout << "\n\e[1;31m[ERROR]\e[0m Los minutos deben estar entre 0 y 59.\n\n";
		return 1; // Termina el programa si los minutos no son válidos
	}

	std::cout << "Introduce los segundos: ";
	std::cin >> seconds;

	// Verifica que los segundos estén en el rango válido (entre 0 y 59 inclusive)
	// Esta condición se cumple si:
	// - Los segundos son menores que 0 (seconds < 0), lo cual no es válido
	// - O si los segundos son mayores que 59 (seconds > 59), lo cual tampoco es válido
	if (seconds < 0 || seconds > 59) {
		std::cout << "\n\e[1;31m[ERROR]\e[0m Los segundos deben estar entre 0 y 59.\n\n";
		return 1; // Termina el programa si los segundos no son válidos
	}

	// Calcula el total de segundos transcurridos desde la medianoche
	int secondsTotal = seconds + (minutes * 60) + (hours * 3600);

	std::cout << "\n\e[1;32m[RESULTADO]\e[0m Han pasado " << secondsTotal << " segundos desde la medianoche.\n\n";

	return 0;
}
