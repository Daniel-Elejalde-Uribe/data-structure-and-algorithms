#include <iostream>
#include <vector>

void imprimir_matriz(const std::vector<std::vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (const auto& elemento : fila) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }
}

// Función para sumar dos matrices
std::vector<std::vector<int>> sumar_matrices(
    const std::vector<std::vector<int>>& matriz1,
    const std::vector<std::vector<int>>& matriz2) {

    // Obtener las dimensiones
    int filas1 = matriz1.size();
    int columnas1 = matriz1[0].size();
    int filas2 = matriz2.size();
    int columnas2 = matriz2[0].size();

    // Crear la matriz resultado con las mismas dimensiones
    std::vector<std::vector<int>> resultado(filas1, std::vector<int>(columnas1));

    // Realizar la suma elemento por elemento
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas1; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    return resultado;
}

int main() {
    std::vector<std::vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    std::vector<std::vector<int>> B = {
        {9, 8, 7},
        {6, 5, 4}
    };

    std::cout << "Matriz A:" << std::endl;
    imprimir_matriz(A);
    std::cout << "\nMatriz B:" << std::endl;
    imprimir_matriz(B);

    // Sumar las matrices
    std::vector<std::vector<int>> C = sumar_matrices(A, B);

    std::cout << "\nMatriz C (A + B):" << std::endl;
    imprimir_matriz(C);

    return 0;
}