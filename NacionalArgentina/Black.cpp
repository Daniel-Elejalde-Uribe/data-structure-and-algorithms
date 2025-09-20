#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  cin.tie(NULL);
  int filas;
    cin >> filas;
  int contador = 0;
  vector<string> matriz(filas);
  for (int i = 0; i < filas; ++i) {
    cin >> matriz[i];
  }
  int i = 0;
  for (int i = 0; i < filas; ++i) {
    for (int j = 0; j < filas; ++j) {
      if (matriz[i].substr(j, 2) == "NN") {
        ++contador;
        ++j;
      }
    }
  }
  cout << contador;

      return 0;
}