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
    int nuevoValor = 99;

    // 3. Recorrer cada fila e insertar el nuevo valor al final.
    for (size_t i = 0; i < matriz.size(); ++i) {
        matriz[i].push_back(nuevoValor);
    }

    // 4. Imprimir la matriz para verificar la adición.
    std::cout << "Matriz con la nueva columna al final:" << std::endl;
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
