#include <iostream>
using namespace std;
void insertar(int arreglo[], int &n, int valor, int posicion){
  for (int i = n; i > posicion; i--){
    arreglo[i] = arreglo[i-1];
  }
  arreglo[posicion] = valor;
  n = n + 1;
}
int main(){
  int arreglo[] = {12, 24, -2, 30, 7};
  int valor = 88;
  int posicion = 2;
  int n = 5;
  insertar(arreglo, n, valor, posicion);
  for (int i = 0; i < n; i++){
    cout << arreglo[i] << endl;
  }
  return 0;
}
