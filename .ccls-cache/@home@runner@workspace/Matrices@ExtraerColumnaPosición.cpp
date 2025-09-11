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

// Función para imprimir un vector (una columna o una fila)
void imprimir_vector(const std::vector<int>& vec) {
    for (int elemento : vec) {
        std::cout << elemento << std::endl;
    }
}

int main() {
    // Matriz de ejemplo
    std::vector<std::vector<int>> matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Matriz original:" << std::endl;
    imprimir_matriz(matriz);

    int pos_a_extraer = 1; // Posicion de la columna a extraer (la segunda columna, indice 1)

    std::vector<int> columna_extraida;

    // Iterar a traves de cada fila y obtener el elemento en la posicion 'pos'
    for (const auto& fila : matriz) {
        columna_extraida.push_back(fila[pos_a_extraer]);
    }

    std::cout << "\nColumna Extraida de la posicion " << pos_a_extraer << ":" << std::endl;
    imprimir_vector(columna_extraida);

    return 0;
}