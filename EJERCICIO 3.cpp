#include <iostream>

int main() {
    // Se declara el array para almacenar números enteros
    int numeros[10];

    // Se leen los números enteros por teclado y se almacenan en el array
    std::cout << "Ingrese 10 números enteros:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> numeros[i];
    }

    // Se calcula la media de valores positivos y negativos
    int sumaPositivos = 0;
    int sumaNegativos = 0;
    int contadorPositivos = 0;
    int contadorNegativos = 0;
    for (int i = 0; i < 10; i++) {
        if (numeros[i] > 0) {
            sumaPositivos += numeros[i];
            contadorPositivos++;
        } else if (numeros[i] < 0) {
            sumaNegativos += numeros[i];
            contadorNegativos++;
        }
    }

    // Se muestran las medias
    if (contadorPositivos > 0) {
        std::cout << "Media de valores positivos: " << (double)sumaPositivos / contadorPositivos << std::endl;
    } else {
        std::cout << "No se encuentran valores positivos." << std::endl;
    }

    if (contadorNegativos > 0) {
        std::cout << "Media de valores negativos: " << (double)sumaNegativos / contadorNegativos << std::endl;
    } else {
        std::cout << "No se encuentran valores negativos." << std::endl;
    }

    return 0;
}