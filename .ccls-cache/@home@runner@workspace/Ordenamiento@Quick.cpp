#include <iostream>

// FunciÃ³n para intercambiar dos elementos
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// FunciÃ³n de particiÃ³n
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Elige el Ãºltimo elemento como pivote
    int i = (low - 1);     // Ãndice del elemento mÃ¡s pequeÃ±o

    for (int j = low; j <= high - 1; j++) {
        // Si el elemento actual es mÃ¡s pequeÃ±o que el pivote
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// La funciÃ³n principal de Quick Sort (recursiva)
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi es el Ã­ndice de particiÃ³n
        int pi = partition(arr, low, high);

        // Ordena por separado los elementos antes y despuÃ©s de la particiÃ³n
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// FunciÃ³n para imprimir el arreglo
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

// Driver program para probar las funciones
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Arreglo sin ordenar: \n";
    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    std::cout << "Arreglo ordenado: \n";
    printArray(arr, n);
    return 0;
}