#include <iostream>
#include <vector>

int main() {
    // Matriz de 3x3 de ejemplo.
    std::vector<std::vector<int>> matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // La nueva fila que vamos a insertar.
    std::vector<int> nuevaFila = {99, 98, 97};

    // Definir la posición donde insertar (índice 1, que es la segunda fila).
    int posicion = 1;

    // Obtener un iterador a la posición deseada y usar insert().
    matriz.insert(matriz.begin() + posicion, nuevaFila);

    // Imprimir la matriz para verificar la inserción.
    std::cout << "Matriz con la nueva fila en la posicion " << posicion << ":" << std::endl;
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
