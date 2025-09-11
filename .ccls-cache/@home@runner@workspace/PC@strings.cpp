#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(NULL);

  string string;
  cin >> string;
  int resultado = 0;
  int a = string.length();
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      for (int k = 0; k < a; k++) {
        if (string.substr(i, k) == string.substr(j, k) && i!=j) {
          resultado = max(k, resultado);
        }
      }
    }
  }
  cout << resultado << endl;
  return 0;
}