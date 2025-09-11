#include <iostream>
#include <vector>

int main() {
    // 1. Crear una matriz de 3x3.
    std::vector<std::vector<int>> matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 2. Definir el valor de la nueva columna.
    std::vector<int> col_a_insertar = {97, 98, 99};

    int posicion = 1; // Inserta en la segunda columna (índice 1)

    // 3. Recorrer cada fila e insertar el nuevo valor al final.
    for (size_t i = 0; i < matriz.size(); ++i) {
        matriz[i].insert(matriz[i].begin() + posicion, col_a_insertar[i]);
    }

    // 4. Imprimir la matriz para verificar la adición.
    std::cout << "Matriz con la nueva columna:" << std::endl;
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
