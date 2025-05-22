#include <iostream>

int main() {
	std::cout << "\n\e[0;35m[========= E10-NUMERO-PRIMO =========]\e[0m\n\n";

	short number = 0;

	std::cout << "Introduce un número de entre el 0 y el 100: ";
	std::cin >> number;

	// Verifica si el número está fuera del rango permitido
	if (number < 0 || number > 100) {
		std::cout << "\n\e[1;31m[ERROR]\e[0m El número debe estar entre 0 y 100.\n\n";
		return 1; // Termina el programa si el número no es válido
	}

	// Verifica si el número es primo utilizando un switch
	// En este caso me aprovecho de la propiedad del switch de que
	// Cuando entra en un case, ejecuta todos los siguientes hasta que encuentra un break
	// Por lo que, por ejemplo, si el número es 2, entra en el case 2 y ejecuta todos los siguientes
	// Haciendo que entre en el case 97, que es el último caso, imprimiendo el resultado de que el número es primo
	switch (number) {
		case 2:
		case 3:
		case 5:
		case 7:
		case 11:
		case 13:
		case 17:
		case 19:
		case 23:
		case 29:
		case 31:
		case 37:
		case 41:
		case 43:
		case 47:
		case 53:
		case 59:
		case 61:
		case 67:
		case 71:
		case 73:
		case 79:
		case 83:
		case 89:
		case 97:
			// Si el número es primo, imprime el resultado
			std::cout << "\n\e[1;32m[RESULTADO]\e[0m El número " << number << " es primo.\n\n";
			break;
		default:
			// Si el número no es primo, imprime un mensaje de error
			std::cout << "\n\e[1;31m[RESULTADO]\e[0m El número " << number << " no es primo.\n\n";
			break;
	}

	return 0; // Finaliza el programa correctamente
}
