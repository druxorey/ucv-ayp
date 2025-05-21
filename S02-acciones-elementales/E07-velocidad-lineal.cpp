#include <iostream> // Biblioteca para entrada y salida estándar

int main() {
	std::cout << "\n\e[0;35m[========= E07-VELOCIDAD-LINEAL =========]\e[0m\n\n";

	// Declaración de variables para almacenar distancia, tiempo y velocidad
	double distance, time, speed;

	// Solicita al usuario ingresar la distancia recorrida en metros
	std::cout << "Ingrese la distancia recorrida (en metros): ";
	std::cin >> distance; // Lee la distancia ingresada por el usuario

	// Solicita al usuario ingresar el tiempo transcurrido en segundos
	std::cout << "Ingrese el tiempo transcurrido (en segundos): ";
	std::cin >> time; // Lee el tiempo ingresado por el usuario

	// Calcula la velocidad dividiendo la distancia entre el tiempo
	speed = distance / time;

	// Imprime el resultado de la velocidad calculada con formato de color
	std::cout << "\n\e[1;32m[RESULTADO]\e[0m La velocidad es: " << speed << " m/s\n\n";

	return 0; // Indica que el programa terminó correctamente
}
