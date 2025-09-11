#include <iostream>
#include <vector>

int main() {
    // 1. Crear una matriz de 3x3 de ejemplo.
    std::vector<std::vector<int>> matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 2. Crear una nueva fila que quieres insertar.
    std::vector<int> nuevaFila = {10, 11, 12};

    // 3. Insertar la nueva fila al final de la matriz usando push_back().
    matriz.push_back(nuevaFila);

    // 4. Imprimir la matriz para verificar la inserción.
    std::cout << "Matriz después de insertar la fila:" << std::endl;
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


