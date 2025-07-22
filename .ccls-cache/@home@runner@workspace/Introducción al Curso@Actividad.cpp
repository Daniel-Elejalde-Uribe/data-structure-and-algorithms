#include <iostream>

int main(){
  int numeros[] = {3, 5, 7, 0, 5, 8, 0, 9, 0, 4};
  for (int i = 0; i < 10; i++){
    if (numeros[i] == 0){
      int posicion = i+1;
      std::cout << "El primer 0 se encuentra en la posición: " << posicion << std::endl;
      break;
    }
  }
  
  double k = 2;
  for (int i = 0; i < 10; i++){
    if (numeros[i]==0){
      std::cout << "No se puede dividir entre 0" << std::endl;
    }else{
      double valor = numeros[i] / k;
      std::cout << "El valor de la división es: " << valor << std::endl;
    }
  }
  
  int matriz[][3] = {{1, 2, 3}, {4, 0, 6}, {7, 0, 9}};
  int contador = 0;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (matriz[i][j] == 0){
        contador++;
      }
    }
  }
  std::cout << "La cantidad de ceros en la matriz es: " << contador << std::endl;
}