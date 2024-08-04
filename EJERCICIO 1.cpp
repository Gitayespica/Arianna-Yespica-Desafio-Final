#include <iostream>
#include <cstdlib>
#include <ctime>

// Se declara la función correspondiente para comprobar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    // Se inicia la cuenta para números aleatorios
    srand(time(0));

    // Se declaran los arrays
    int numeros[20];
    int primos[20];
    int contadorPrimos = 0;

    // Se generan números aleatorios y se guardan en el array
    for (int i = 0; i < 20; i++) {
        numeros[i] = rand() % 100; // Se generan números entre 0 y 99
    }

    // Se buscan números primos y se guardan en el array de primos
    for (int i = 0; i < 20; i++) {
        if (esPrimo(numeros[i])) {
            primos[contadorPrimos] = numeros[i];
            contadorPrimos++;
        }
    }

    // Finalmente se muestran los arrays
    std::cout << "Array de numeros aleatorios:" << std::endl;
    for (int i = 0; i < 20; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array de numeros primos:" << std::endl;
    for (int i = 0; i < contadorPrimos; i++) {
        std::cout << primos[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}