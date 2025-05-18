#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E05-BINARIO-A-DECIMAL =========]\e[0m\n\n";

	// Declaración de variables: una para la entrada binaria y otra para el resultado decimal
	int binaryInput, decimalOutput = 0;

	std::cout << "Por favor, ingrese un número binario de 4 dígitos: ";
	std::cin >> binaryInput;

	// Declaración de variables para almacenar cada bit del número binario
	int bit1, bit2, bit3, bit4;

	// Extrae cada bit del número binario ingresado
	bit1 = (binaryInput / 1000);         // Obtiene el primer bit (miles)
	bit2 = (binaryInput % 1000) / 100;   // Obtiene el segundo bit (centenas)
	bit3 = (binaryInput % 100) / 10;     // Obtiene el tercer bit (decenas)
	bit4 = (binaryInput % 10);           // Obtiene el cuarto bit (unidades)

	// Convierte el número binario a decimal usando la fórmula de ponderación
	decimalOutput = (bit1 * 8) + (bit2 * 4) + (bit3 * 2) + bit4;

	// Muestra el resultado de la conversión al usuario
	std::cout << "\n\e[1;32m[RESULTADO]\e[0m El valor decimal es: " << decimalOutput << "\n\n";

	// Finaliza el programa
	return 0;
}
