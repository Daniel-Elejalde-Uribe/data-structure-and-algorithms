#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    cin.tie(NULL);
    int arquimedes1, arquimedes2, pitagoras1, pitagoras2;
    cin >> arquimedes1 >> pitagoras1;
    cin >> arquimedes2 >> pitagoras2;
    int TotArquimedes = arquimedes1 + arquimedes2;
    int TotPitagoras = pitagoras1 + pitagoras2;
    if(TotArquimedes>TotPitagoras){
        cout<<"A";
        
    } else if(TotArquimedes==TotPitagoras){
        cout<<"D";
    }else{
        cout<<"P";
    }
}