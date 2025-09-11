#include <iostream>
#include <vector>

int binarySearch(std::vector<int> arr, int target) {
    int left = 0; // índice izquierdo.
    int right = arr.size() - 1; // índice derecho.

    int i=0; //Contar las iteraciones para encontrar el valor a buscar.

    while (left <= right) {
        i = i + 1;
        int mid = left + (right - left) / 2;

        // Comprobamos si el elemento del medio es el objetivo
        if (arr[mid] == target) {
            return mid; // Elemento encontrado, devolvemos su índice
        }

        // Si el objetivo es mayor, descartamos la mitad izquierda
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // Si el objetivo es menor, descartamos la mitad derecha
        else {
            right = mid - 1;
        }
        std::cout << "Iteración: " << i << std::endl;
    }

    return -1; // Elemento no encontrado
}

int main() {
    std::vector<int> numbers = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    //std::vector<int> numbers = {-23, 2, 5, 8, 12, 16, 38, 56, 72, 91};
    int target = 23;

    int result = binarySearch(numbers, target);

    if (result != -1) {
        std::cout << "Elemento encontrado en el indice: " << result << std::endl;
    } else {
        std::cout << "Elemento no se encuentra en el arreglo." << std::endl;
    }

    return 0;
}