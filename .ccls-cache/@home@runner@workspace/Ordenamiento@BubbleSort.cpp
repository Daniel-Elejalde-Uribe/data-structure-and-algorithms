#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    vector<int> valores = {12, 31, 8, 70, 1 ,5, 2, 76, 43, 87};
    cout << "Arreglo sin Ordenar" << endl;
    for(int valor : valores){
        cout << valor << " ";
    }
    cout << endl;
    bubbleSort(valores);
    cout << "Arreglo sin Ordenar" << endl;
    for(int valor : valores){
        cout << valor << " ";
    }
    cout << endl;
}