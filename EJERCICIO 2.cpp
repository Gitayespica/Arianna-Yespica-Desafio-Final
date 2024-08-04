#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Se inicia el contador para números aleatorios
    srand(time(0));

    // Se declara el array de 4x5
    int matriz[4][5];

    // Se generan los números aleatorios y se almacenan en el array
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 10; // Se generan los números entre 0 y 9
        }
    }

    // Se ,muestra la matriz con sumas parciales de filas y columnas
    std::cout << "Resultado de la matriz con sumas parciales:" << std::endl;
    int sumaTotal = 0;
    for (int i = 0; i < 4; i++) {
        int sumaFila = 0;
        for (int j = 0; j < 5; j++) {
            std::cout << matriz[i][j] << " ";
            sumaFila += matriz[i][j];
        }
        std::cout << " | " << sumaFila << std::endl;
        sumaTotal += sumaFila;
    }

    // Se muestran las sumas parciales de columnas
    std::cout << "-------------------------" << std::endl;
    for (int j = 0; j < 5; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < 4; i++) {
            sumaColumna += matriz[i][j];
        }
        std::cout << sumaColumna << " ";
    }
    std::cout << " | " << sumaTotal << std::endl;

    return 0;
}