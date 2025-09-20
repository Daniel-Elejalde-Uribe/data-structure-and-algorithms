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
  int division = 1;
  int resto = 0;
  int resultado = 0;
  for(int i=0;division>0;++i){
    
    for(int j=0;j<niveles;++j){
      numeroProblemas2[j]+=resto;
      int resto=numeroProblemas2[j]-((i+1)*numeroProblemas1[j]);
    }
    division=numeroProblemas2[niveles-1]/numeroProblemas1[niveles-1];
    cout<<division<<endl;
    resultado=i-1;
  }
  cout<<resultado;
  
      return 0;
}