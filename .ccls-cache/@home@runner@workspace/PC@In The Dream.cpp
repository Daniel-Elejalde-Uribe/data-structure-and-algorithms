#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(NULL);
  int a;
  bool pfp = true;
  bool psp = true;
  cin >> a;
  for (int i = 0; i < a; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b && a > b * 2 + 2) {
      pfp = false;
    } else {
      if (b > a && b > a * 2 + 2) {
        pfp = false;
      } else {
        pfp = true;
      }
    }

    if ((c - a) > (d - b) && (c - a) > (d - b) * 2 + 2) {
      psp = false;
    } else {
      if ((d - b) > (c - a) && (d - b) > (c - a) * 2 + 2) {
        psp = false;
      } else {
        psp = true;
      }
    }
    if (pfp && psp) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}