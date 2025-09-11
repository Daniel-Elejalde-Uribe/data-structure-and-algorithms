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

// Función para multiplicar una matriz por un escalar
std::vector<std::vector<int>> multiplicar_por_escalar(
    const std::vector<std::vector<int>>& matriz,
    int escalar) {

    int filas = matriz.size();
    int columnas = matriz[0].size();

    // Crear la matriz resultado con las mismas dimensiones
    std::vector<std::vector<int>> resultado(filas, std::vector<int>(columnas));

    // Realizar la multiplicación elemento por elemento
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultado[i][j] = matriz[i][j] * escalar;
        }
    }
    return resultado;
}

int main() {
    std::vector<std::vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int escalar = 5;

    std::cout << "Matriz A:" << std::endl;
    imprimir_matriz(A);
    std::cout << "\nEscalar: " << escalar << std::endl;

    // Multiplicar la matriz por el escalar
    std::vector<std::vector<int>> C = multiplicar_por_escalar(A, escalar);

    std::cout << "\nMatriz C (A * " << escalar << "):" << std::endl;
    imprimir_matriz(C);

    return 0;
}