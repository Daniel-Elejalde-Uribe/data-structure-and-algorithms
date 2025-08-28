
#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int ans = 0;
    int l = 0;
    int r = 0;
    long long sm = 0;
    while(r < n){
        while(r < n && sm + a[r] <= t){
            sm += a[r];
            ++r;
        }
        ans = max(ans, r - l);
        sm -= a[l];
        ++l;
        if(r < l)r = l;
    }
    cout << ans << endl;
}
