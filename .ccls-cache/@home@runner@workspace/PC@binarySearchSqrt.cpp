#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
  int l = -1, r = x;
  while (l + 1 < r) {
    int mid = (l + r) / 2;
    if (1LL * mid * mid <= 1LL * x)
      l = mid;
    else
      r = mid;
  }
  return l;
}
int main() {
  int r;
  cin >> r;
  cout<< mySqrt(r);
}