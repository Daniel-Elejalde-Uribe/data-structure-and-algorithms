#include <iostream>
#include <vector>

void imprimir_matriz(const std::vector<std::vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (const auto& elemento : fila) {
            std::cout << elemento << "\t";
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<int>> multiplicar_matrices(
    const std::vector<std::vector<int>>& matriz1,
    const std::vector<std::vector<int>>& matriz2) {

    int filas1 = matriz1.size();
    int columnas1 = matriz1[0].size();
    int filas2 = matriz2.size();
    int columnas2 = matriz2[0].size();

    // Crear la matriz resultado con el tamaño correcto (filas1 x columnas2)
    std::vector<std::vector<int>> resultado(filas1, std::vector<int>(columnas2, 0));

    // Realizar la multiplicación
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            for (int k = 0; k < columnas1; ++k) {
                resultado[i][j] = resultado[i][j] + matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    return resultado;
}

int main() {
    // Matriz A de 2x3
    std::vector<std::vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Matriz B de 3x2
    std::vector<std::vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    std::cout << "Matriz A (2x3):" << std::endl;
    imprimir_matriz(A);
    std::cout << "\nMatriz B (3x2):" << std::endl;
    imprimir_matriz(B);

    // Multiplicar las matrices
    std::vector<std::vector<int>> C = multiplicar_matrices(A, B);

    std::cout << "\nMatriz C (A * B) (2x2):" << std::endl;
    imprimir_matriz(C);

    return 0;
}