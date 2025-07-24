#include <iostream>
using namespace std;
void eliminar(int arreglo[], int &n, int posicion){
  for (int i = posicion; i < n; i++){
    arreglo[i] = arreglo[i+1];
  }
  n = n - 1;
}
int main(){
  int arreglo[] = {12, 24, -2, 30, 7};
  int posicion = 2;
  int n = 5;
  eliminar(arreglo, n, posicion);
  for (int i = 0; i < n; i++){
    cout << arreglo[i] << endl;
  }
}
