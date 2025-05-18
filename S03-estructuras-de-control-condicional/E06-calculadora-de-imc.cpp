#include <iostream> // Biblioteca para entrada y salida estándar
#include <cmath>	// Biblioteca para funciones matemáticas como pow()

int main() {
	std::cout << "\n\e[0;35m[========= E06-CALCULADORA-DE-IMC =========]\e[0m\n\n";

	// Constante para convertir libras a kilogramos
	const double CONVERSION_FACTOR_TO_KG = 0.453592;

	// Declaración de variables para altura, peso e IMC
	float height = 0, weight = 0, imc = 0;

	// Solicita al usuario que ingrese sus datos
	std::cout << "Por favor, ingrese los siguientes datos: \n\n";
	std::cout << " - Su peso en libras (por ejemplo, 150): ";
	std::cin >> weight; // Lee el peso ingresado por el usuario
	std::cout << " - Su altura en centímetros (por ejemplo, 170): ";
	std::cin >> height; // Lee la altura ingresada por el usuario

	// Convierte el peso a kilogramos y la altura a metros
	weight *= CONVERSION_FACTOR_TO_KG;
	height /= 100;

	// Calcula el IMC usando la fórmula: peso / altura^2
	imc = weight / pow(height, 2);

	// Imprime los datos recopilados
	std::cout << "\n\e[0;34mDATOS RECOPILADOS\e[0m\n\n";
	std::cout << " - Su peso en kilogramos: " << weight << " kg\n";
	std::cout << " - Su IMC: " << imc << "\n";
	std::cout << " - Categoría: ";

	// Determina la categoría del IMC y la imprime
	// Nota: Las estructuras `if`, `else if` y `else` siempre ejecutan la siguiente instrucción.
	// Si queremos agrupar varias instrucciones, usamos `{}` para envolverlas.
	// Sin embargo, si solo hay una instrucción, no es necesario usar `{}`.
	if (imc < 16) std::cout << "\e[1;31mCriterio de ingreso\e[0m\n";
	else if (imc >= 16.0 && imc < 17.0) std::cout << "\e[1;33mInfrapeso\e[0m\n";
	else if (imc >= 17.0 && imc < 18.5) std::cout << "\e[1;33mBajo peso\e[0m\n";
	else if (imc >= 18.5 && imc < 25.0) std::cout << "\e[1;32mPeso normal\e[0m\n";
	else if (imc >= 25.0 && imc < 30.0) std::cout << "\e[1;33mSobrepeso\e[0m\n";
	else if (imc >= 30.0 && imc < 35.0) std::cout << "\e[1;31mObesidad premórbida\e[0m\n";
	else if (imc >= 40.0 && imc <= 45.0) std::cout << "\e[1;31mObesidad mórbida\e[0m\n";
	else std::cout << "\e[1;31mObesidad hipermórbida\e[0m\n";

	// Salto de línea final
	std::cout << '\n';

	// Finaliza el programa
	return 0;
}
