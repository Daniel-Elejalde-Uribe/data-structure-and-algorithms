#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(NULL);
  int s;
  cin >> s;
  bool encontrar;
  for (int i = 0; i < s; i++) {
    int b, xf, yf;
    cin >> b >> xf >> yf;
    string a;
    cin >> a;
    int N = 0;
    int S = 0;
    int W = 0;
    int E = 0;
    for (int i = 0; i < b; i++) {
      if (a[i] == 'N') {
        N++;
      }
      if (a[i] == 'S') {
        S++;
      }
      if (a[i] == 'W') {
        W++;
      }
      if (a[i] == 'E') {
        E++;
      }
    }
    for (int j = 0; j < 10000; j++) {
      int y = 0;
      int x = 0;
      y = y + N - S;
      x = x + E - W;
      if (y == yf && x == xf) {
        encontrar = true;
      }
    }
    if (encontrar) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
//ERROR