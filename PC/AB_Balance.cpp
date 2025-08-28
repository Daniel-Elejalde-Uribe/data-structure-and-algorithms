#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(NULL);
    int a;
    cin >> a;
    for(int i=0; i<a; i++){
        string n;
        cin >> n;
        if(n[0] != n[(n.length()-1)]){
            n[0]=n[n.length()-1];
        }
        cout<<n<<endl;
    }
    return 0;
}