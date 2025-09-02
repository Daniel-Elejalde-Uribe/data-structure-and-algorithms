#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr){
  int n = arr.size();
  for(int i =  1; i < n; i++){
    int key = arr[i];
      int j=i-1;
      while(j>=0 && arr[j] > key){
          arr[j+1] = arr[j];
          j=j-1;
      }
      arr[j+1] = key;
  }
}

int main(){
  vector<int> valores = {12, 31, 8, 70, 1 ,5, 2, 76, 43, 87};
  cout << "Arreglo sin Ordenar" << endl;
  for(int valor : valores){
      cout << valor << " ";
  }
  cout << endl;
  insertionSort(valores);
  cout << "Arreglo Ordenado" << endl;
  for(int valor : valores){
      cout << valor << " ";
  }
  cout << endl;
}