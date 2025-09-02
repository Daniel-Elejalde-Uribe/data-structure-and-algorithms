#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& arr){
  
}

int main(){
  vector<int> valores = {12, 31, 8, 70, 1 ,5, 2, 76, 43, 87};
  cout << "Arreglo sin Ordenar" << endl;
  for(int valor : valores){
      cout << valor << " ";
  }
  cout << endl;
  quickSort(valores);
  cout << "Arreglo Ordenado" << endl;
  for(int valor : valores){
      cout << valor << " ";
  }
  cout << endl;
}