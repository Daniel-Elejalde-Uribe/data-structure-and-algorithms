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
    // 1. Crear una matriz de 3x3.
    std::vector<std::vector<int>> matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Matriz original:" << std::endl;
    imprimir_matriz(matriz);

    // 3. Recorrer cada fila y eliminar el valor al final.
    for (size_t i = 0; i < matriz.size(); ++i) {
        matriz[i].pop_back();
    }

    std::cout << "\nMatriz despues de eliminar la ultima columna:" << std::endl;
    imprimir_matriz(matriz);

    return 0;
}