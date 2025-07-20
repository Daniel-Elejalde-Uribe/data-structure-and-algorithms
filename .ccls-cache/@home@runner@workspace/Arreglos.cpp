#include <iostream>

int main(){
  int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 0; i < 10; i++){
    std::cout << numeros[i] << std::endl;
    if (numeros[i] == 5)
      break;
  }
}