#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i, n) for (int i = 0; i < (int)n; ++i)
#define for1(i, n) for (int i = 1; i <= (int)n; ++i)
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
  int n;
  bool Alex = true;
  bool Bob = true;
  bool Carl = false;
  bool posible = true;
  cin >> n;
  vector<int> gana(n);
  forn(i, n) { cin >> gana[i]; }
  forn(i, n) {
    if (gana[i] == 1) {
      if (!Alex) {
        posible = false;
      } else if (Bob) {
        Bob = false;
        Carl = true;
      } else {
        Bob = true;
        Carl = false;
      }
    }
    if (gana[i] == 2) {
      if (!Bob) {
        posible = false;
      } else if (Alex) {
        Alex = false;
        Carl = true;
      } else {
        Alex = true;
        Carl = false;
      }
    }
    if (gana[i] == 3) {
      if (!Carl) {
        posible = false;
      } else if (Alex) {
        Alex = false;
        Bob = true;
      } else {
        Alex = true;
        Bob = false;
      }
    }
  }
  if (posible) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}