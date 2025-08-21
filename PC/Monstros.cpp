#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    for(int i=0; i<a; i++){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        cout << v[i-2]+v[i-1] << endl;
    }
    return 0;
}