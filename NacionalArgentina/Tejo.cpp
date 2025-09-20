#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  cin.tie(NULL);
  int tiradas;
  cin >> tiradas;
  int dim_x, dim_y, T_x, T_y;
  vector<int> xAzul(tiradas);
  vector<int> yAzul(tiradas);
  vector<int> xRojo(tiradas);
  vector<int> yRojo(tiradas);
vector<int> distAzul(tiradas);
    vector<int> distRojo(tiradas);
  cin >> dim_x >> dim_y >> T_x >> T_y;
  for (int i = 0; i < tiradas; ++i) {
    cin >> xAzul[i] >> yAzul[i];
  }
  for (int i = 0; i < tiradas; ++i) {
    cin >> xRojo[i] >> yRojo[i];
  }
    for (int i = 0; i < tiradas; ++i) {
        distAzul[i] = sqrt(pow(xAzul[i]-T_x, 2)+pow(yAzul[i]-T_y, 2));
        distRojo[i] = sqrt(pow(xRojo[i]-T_x, 2)+pow(yRojo[i]-T_y, 2));
      }
    int minimoAzul = *min_element(distAzul.begin(), distAzul.end());
    int minimoRojo = *min_element(distRojo.begin(), distRojo.end());
    
  return 0;
}