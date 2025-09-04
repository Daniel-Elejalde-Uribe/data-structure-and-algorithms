#include <bits/stdc++.h>
using namespace std;

// Función para intercambiar dos elementos
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Función de partición
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Elige el último elemento como pivote
    int i = (low - 1);     // Indice del elemento mÃ¡s pequeÃ±o

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

// La función principal de Quick Sort (recursiva)
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi es el indice de partición
        int pi = partition(arr, low, high);

        // Ordena por separado los elementos antes y despuÃ©s de la partición
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Función para imprimir el arreglo
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
        cout << endl;
}


int main(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr);
  cout << "Arreglo sin Ordenar" << endl;
    printArray(arr, n);
  quickSort(arr, 0, n-1);
  cout << "Arreglo Ordenado" << endl;
    printArray(arr, n);
}