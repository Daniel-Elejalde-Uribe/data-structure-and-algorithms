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

int main() {
    // Crear una matriz de 3x3.
    std::vector<std::vector<int>> matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Matriz original:" << std::endl;
    imprimir_matriz(matriz);

    // Eliminar una columna en una posición específica (en este caso, la segunda columna).
    int pos_a_eliminar = 1; // índice de la fila a eliminar

    for (size_t i = 0; i < matriz.size(); ++i) {
        matriz[i].erase(matriz[i].begin() + pos_a_eliminar);
    }

    std::cout << "\nMatriz despues de eliminar la columna:" << std::endl;
    imprimir_matriz(matriz);

    return 0;
}