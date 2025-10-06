#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i, n) for (int i = 0; i < (int)n; ++i)
#define for1(i, n) for (int i = 1; i <= (int)n; ++i)
#define for2(i, n) for (int i = 2; i <= (int)n; ++i)
#define for3(i, n) for (int i = 1; i <= (int)n; ++i)
#define fore(i, l, r) for (int i = (int)l; i <= (int)r; ++i)
#define ford(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define fored(i, l, r) for (int i = (int)r; i >= (int)l; --i)
#define pb push_back
#define el '\n'
#define d(x) cout << #x << " " << x << el
#define ri(n) scanf("%d", &n)
#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef double ld;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef tuple<int, int, int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<ld> vd;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  bool posible = false;
  vector<int> puntaje(6);

  forn(i, 6) { cin >> puntaje[i]; }
  forn(i, 3) {

    for1(j, 4) {
      if (i < j) {

        for2(k, 5) {
          if (i < j && j < k) {
            vector<int> numerosPosibles = {0, 1, 2, 3, 4, 5};
            forn(l, 5) {
              if (numerosPosibles[l] == i || numerosPosibles[l] == j ||numerosPosibles[l] == k) {
                numerosPosibles.erase(numerosPosibles.begin() + l);
              }
            }
          }
          if ((puntaje[i] + puntaje[j] + puntaje[k]) ==
              (puntaje[numerosPosibles[0]] + puntaje[numerosPosibles[1]] +
               puntaje[numerosPosibles[2]])) {
            posible = true;
          }
        }
      }
    }
  }
  if (posible) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}