#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  cin.tie(NULL);
  int niveles;
    cin >> niveles;
  vector<int> numeroProblemas1(niveles);
  vector<int> numeroProblemas2(niveles);
  for (int i = 0; i < niveles; ++i) {
    cin >> numeroProblemas1[i];
  }
  for (int i = 0; i < niveles; ++i) {
    cin >> numeroProblemas2[i];
  }
  int i=0;
  int division = 1;
  while(division!=0){
    int resto=numeroProblemas2[i]-((i+1)*numeroProblemas1[i]);
    ++i;
  }

      return 0;
}