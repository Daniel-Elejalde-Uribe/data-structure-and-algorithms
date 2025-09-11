#include <iostream>
#include <vector>

int main() {
    // Declarar una matriz 3x4 de enteros
    int filas = 3;
    int columnas = 4;
    std::vector<std::vector<int>> matriz(filas, std::vector<int>(columnas, 0));

    // Llenar la matriz con valores de ejemplo
    int valor = 1;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = valor++;
        }
    }

    // Imprimir la matriz
    std::cout << "Matriz:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Asignación de un valor
    matriz[1][2] = 99;

    // Imprimir la matriz
    std::cout << "Matriz:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
