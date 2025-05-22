#include <iostream>

int main() {
	std::cout << "\n\e[0;35m[========= E09-NOMBRE-DEL-MES =========]\e[0m\n\n";
	
	// El short es un tipo de dato que puede almacenar números enteros más pequeños que el int
	// Específicamente, el short puede almacenar números enteros de -32,768 a 32,767
	short monthNumber = 0;

	std::cout << "Introduce el número del mes (1-12): ";
	std::cin >> monthNumber;

	// Verifica si el número introducido está fuera del rango permitido (1-12)
	if (monthNumber < 1 || monthNumber > 12) {
		std::cout << "\n\e[1;31m[ERROR]\e[0m El número del mes debe estar entre 1 y 12.\n\n";
		return 1; // Termina el programa si el número del mes no es válido
	}

	// El switch es una estructura de control que permite seleccionar una de varias opciones
	// En este caso, se utiliza para determinar el nombre del mes según el número introducido
	// Es importante usar el break para evitar que el programa continúe ejecutando los siguientes casos
	std::cout << "\n\e[1;32m[RESULTADO]\e[0m El mes es: ";
	switch (monthNumber) {
		case 1:
			std::cout << "\nEnero\n\n";
			break;
		case 2:
			std::cout << "\nFebrero\n\n";
			break;
		case 3:
			std::cout << "\nMarzo\n\n";
			break;
		case 4:
			std::cout << "\nAbril\n\n";
			break;
		case 5:
			std::cout << "\nMayo\n\n";
			break;
		case 6:
			std::cout << "\nJunio\n\n";
			break;
		case 7:
			std::cout << "\nJulio\n\n";
			break;
		case 8:
			std::cout << "\nAgosto\n\n";
			break;
		case 9:
			std::cout << "\nSeptiembre\n\n";
			break;
		case 10:
			std::cout << "\nOctubre\n\n";
			break;
		case 11:
			std::cout << "\nNoviembre\n\n";
			break;
		case 12:
			std::cout << "\nDiciembre\n\n";
			break;
	}

	return 0;
}
