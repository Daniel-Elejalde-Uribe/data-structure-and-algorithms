#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matriz = {{1, 2}, {4, 5}, {7, 8}};

    // Obtener el número de filas
    size_t filas = matriz.size();
    std::cout << "Número de filas: " << filas << std::endl; // Output: 3

    // Obtener el número de columnas
    size_t columnas = matriz[0].size();
    std::cout << "Número de columnas: " << columnas << std::endl;

    return 0;
}
