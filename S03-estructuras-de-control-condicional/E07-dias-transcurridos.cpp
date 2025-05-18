#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E07-DIAS-TRANSCURRIDOS =========]\e[0m\n\n";

	int inputDay, inputMonth, totalDays = 0;

	std::cout << "Por favor, ingrese el día (1-31): ";
	std::cin >> inputDay;

	// Verifica si el día ingresado es válido
	if (inputDay < 1 || inputDay > 31) {
		std::cerr << "\n\e[1;31m[ERROR]\e[0m Día ingresado no válido. Por favor, ejecute el programa nuevamente.\n\n";
		return 1; // Termina el programa con un código de error
	}

	std::cout << "Por favor, ingrese el mes (1-12): ";
	std::cin >> inputMonth;

	// Verifica si el mes ingresado es válido
	if (inputMonth < 1 || inputMonth > 12) {
		std::cerr << "\n\e[1;31m[ERROR]\e[0m Mes ingresado no válido. Por favor, ejecute el programa nuevamente.\n\n";
		return 1; // Termina el programa con un código de error
	}

	// Calcula los días transcurridos sumando los días de los meses anteriores
	// El switch evalúa el valor de `inputMonth` y ejecuta el caso correspondiente.
	// En este caso, no se utiliza `break` intencionalmente para que los casos
	// "caigan" uno tras otro, acumulando los días de los meses anteriores.
	switch (inputMonth) {
		case 12: totalDays += 30;      // Suma los días de noviembre
		case 11: totalDays += 31;      // Suma los días de octubre
		case 10: totalDays += 30;      // Suma los días de septiembre
		case 9: totalDays += 31;       // Suma los días de agosto
		case 8: totalDays += 31;       // Suma los días de julio
		case 7: totalDays += 30;       // Suma los días de junio
		case 6: totalDays += 31;       // Suma los días de mayo
		case 5: totalDays += 30;       // Suma los días de abril
		case 4: totalDays += 31;       // Suma los días de marzo
		case 3: totalDays += 28;       // Suma los días de febrero (no considera años bisiestos)
		case 2: totalDays += 31;       // Suma los días de enero
		case 1: totalDays += inputDay; // Suma los días del mes actual
	}
	// Nota: La ausencia de `break` permite que todos los casos posteriores al
	// caso coincidente se ejecuten, lo cual es necesario aquí para acumular
	// los días de todos los meses anteriores al mes ingresado.

	// Muestra el resultado al usuario
	std::cout << "\n\e[1;32m[RESULTADO]\e[0m Total de días transcurridos en el año: " << totalDays << "\n\n";

	return 0; // Indica que el programa terminó correctamente
}
