#include <iostream>
#include <vector>

// Función para imprimir una matriz
void imprimir_matriz(const std::vector<std::vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (const auto& elemento : fila) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }
}


int main() {
    // Matriz de ejemplo (3x2)
    std::vector<std::vector<int>> matriz = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    std::cout << "Matriz Original:" << std::endl;
    imprimir_matriz(matriz);

    int filas = matriz.size();
    int columnas = matriz[0].size();

    // Crear una nueva matriz para la transpuesta, con dimensiones invertidas
    std::vector<std::vector<int>> transpuesta(columnas, std::vector<int>(filas));

    // Recorrer la matriz original e invertir los índices
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    std::cout << "\nMatriz Transpuesta:" << std::endl;
    imprimir_matriz(transpuesta);

    return 0;
}
