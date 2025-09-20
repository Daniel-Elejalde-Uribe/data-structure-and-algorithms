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
  int resto = 0;
  for(int i=0;i<10000;++i){
    
    for(int j=0;j<niveles;++j){
      numeroProblemas2[j]+=resto;
      int resto=numeroProblemas2[j]-((i+1)*numeroProblemas1[j]);
    }
    if(numeroProblemas2[niveles-1]/numeroProblemas1[niveles-1]==0){
      cout<<i-1;
      break;
    }
  }
      return 0;
}