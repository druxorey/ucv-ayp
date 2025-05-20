#include <iostream> // Biblioteca para entrada y salida estándar
#include <vector> // Biblioteca para usar vectores

int main() {
    // Imprime un encabezado decorativo para identificar el programa
    std::cout << "\n\e[0;35m[========= E07-SECUENCIA-FIBONACCI =========]\e[0m\n\n";

    // Variable para almacenar la longitud deseada de la secuencia de Fibonacci
    long long int sequenceLength;

    // Solicita al usuario la posición final de la secuencia de Fibonacci
    std::cout << "Ingrese la posición final en la secuencia de Fibonacci: ";
    std::cin >> sequenceLength;

    // Verifica si el usuario ingresó un número válido (positivo)
    if (sequenceLength <= 0) {
		std::cerr << "\n\e[1;31m[ERROR]\e[0m Número ingresado no válido. Por favor, ejecute el programa nuevamente.\n\n";
        return 1; // Finaliza el programa con un código de error
    }

    // Crea un vector para almacenar la secuencia de Fibonacci
    std::vector<long long int> fibonacci(sequenceLength);

    // Inicializa los dos primeros valores de la secuencia de Fibonacci
    // El primer número de Fibonacci es 0
    fibonacci[0] = 0;
    // Si la longitud es mayor a 1, el segundo número de Fibonacci es 1
    if (sequenceLength > 1) fibonacci[1] = 1;

    // Calcula los valores restantes de la secuencia de Fibonacci
    // Este bucle comienza desde el tercer elemento (índice 2) y continúa
    // hasta completar la longitud solicitada
    for (long long int i = 2; i < sequenceLength; ++i) {
        // Cada número de Fibonacci es la suma de los dos anteriores
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Imprime el resultado con formato
    std::cout << "\n\e[1;32m[RESULTADO]\e[0m La secuencia de Fibonacci hasta la posición \e[0;33m" << sequenceLength << "\e[0m es: [";

    // Recorre el vector e imprime cada número de la secuencia
    // Este bucle itera desde el primer elemento hasta el último
    for (long long int i = 0; i < sequenceLength; ++i) {
        // Imprime el número actual seguido de un espacio
        std::cout << fibonacci[i];
		if (i < sequenceLength - 1) std::cout << ", ";
    }
    std::cout << "]\n\n";

    return 0; // Finaliza el programa exitosamente
}
