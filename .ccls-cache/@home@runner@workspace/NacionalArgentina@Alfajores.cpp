#include <bits/stdc++.h>
#include <vector>
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
    int i = (low - 1);     // Indice del elemento más pequeÃ±o

    for (int j = low; j <= high - 1; j++) {
        // Si el elemento actual es más pequeño que el pivote
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

        // Ordena por separado los elementos antes y después de la partición
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
    cin.tie(NULL);
    int numViajes, numOficinas;
    cin >> numViajes;
    cin >> numOficinas;

    int numAlfajores[numViajes];
    int numEmpleados[numOficinas];
    for (int i = 0; i<numViajes; ++i){
        cin >> numAlfajores[i];
    }

    for (int j = 0; j<numOficinas; ++j){
        cin >> numEmpleados[j];
    }
    quickSort(numAlfajores,0,numViajes);
    quickSort(numEmpleados,0,numOficinas);
    int k = 0; 
    while (k<numViajes){
        for (int l = 0; l<numOficinas; ++l){
            if(numEmpleados[l]<=numAlfajores[k]){
                int division = numAlfajores[k]/numEmpleados[l];
                numAlfajores[k] = numAlfajores[k]-(numEmpleados[l]*division);
            }else{
                break;
            }
        }
        cout << numAlfajores[k] << endl;
        ++k;
    }
    return 0;
}