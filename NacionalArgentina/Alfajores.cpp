#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int numViajes, numOficinas;
    cin >> numViajes;
    cin >> numOficinas;

    int numAlfajores[numViajes];
    int numEmpleados[numOficinas];
    for (int i = 0; i<numViajes; ++i){
        cin >> numAlfajores[i];
    }

    for (int j = 0; j<numOficinas; ++j){
        cin >> numEmpleados[j];
    }
    int k = 0; 
    for (int k = 0; k<numViajes; ++k){
        for (int l = 0; l<numOficinas; ++l){
            if(numEmpleados[l]<=numAlfajores[k]){
                int division = numAlfajores[k]/numEmpleados[l];
                numAlfajores[k] = numAlfajores[k]-(numEmpleados[l]*division);
            }
        }
        cout << numAlfajores[k] << endl;
    }
    return 0;
}