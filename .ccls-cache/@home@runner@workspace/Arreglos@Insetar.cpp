#include <iostream>
using namespace std;
int main(){
  int arreglo[] = {12, 24, -2, 30, 7};
  int valor = 88;
  int posicion = 2;
  insertar(arreglo, 5, valor, posicion);
  cout<<arreglo<<endl;
  return 0;
}
void insertar(int arreglo[], int n, int valor, int posicion){
  for (int i = n; i > posicion; i--){
    arreglo[i] = arreglo[i-1];
  }
  arreglo[posicion] = valor;
  n = n + 1;
}