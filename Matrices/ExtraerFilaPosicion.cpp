#include <iostream>
#include <vector>

void imprimir_vector(const std::vector<int>& vec) {
    for (int elemento : vec) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Matriz de ejemplo
    std::vector<std::vector<int>> matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // La posición de la fila que queremos extraer (índice 1 para la segunda fila)
    int pos_a_extraer = 1;

    // Extraer la fila y guardarla en un nuevo vector
    std::vector<int> fila_extraida = matriz[pos_a_extraer];

    std::cout << "Fila extraida de la posicion " << pos_a_extraer << ":" << std::endl;
    imprimir_vector(fila_extraida);

    return 0;
}