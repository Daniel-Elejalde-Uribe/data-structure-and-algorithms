#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(NULL);
  int N;
  cin >> N;
  int a;
  vector<int> v(3*N);
  map<int,int> m;
  bool Gana = true;
  for (int i = 0; i < 3*N; i++) {
    cin >> v[i];
    m[v[i]]++;
  }
  for (int i = 0; i < 3*N; i++) {
    if(m[v[i]]%3!=0){
      Gana=false;
    }
  }
  if(Gana){
    cout<<"N";
  }else{
    cout<<"Y";
  }
  
  
  
  return 0;
}