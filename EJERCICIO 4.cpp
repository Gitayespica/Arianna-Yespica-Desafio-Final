#include <iostream>
#include <string>

int main() {
    // Se declaran los arreglos para almacenar nombres y notas
    std::string estudiantes[10];
    float nota1[10];
    float nota2[10];
    float nota3[10];
    float notaFinal[10];

    // Se leen los nombres y notas de los estudiantes
    for (int i = 0; i < 10; i++) {
        std::cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        std::cin >> estudiantes[i];
        std::cout << "Ingrese la nota del 1er corte: ";
        std::cin >> nota1[i];
        std::cout << "Ingrese la nota del 2do corte: ";
        std::cin >> nota2[i];
        std::cout << "Ingrese la nota del 3er corte: ";
        std::cin >> nota3[i];
        notaFinal[i] = (nota1[i] + nota2[i] + nota3[i]) / 3;
    }

    // Se muestra la información en forma de tabla
    std::cout << "\nEstudiantes\tNota 1er Corte\tNota 2do Corte\tNota 3er Corte\tNota Final\n";
    for (int i = 0; i < 10; i++) {
        std::cout << estudiantes[i] << "\t\t" << nota1[i] << "\t\t" << nota2[i] << "\t\t" << nota3[i] << "\t\t" << notaFinal[i] << "\n";
    }

    return 0;
}