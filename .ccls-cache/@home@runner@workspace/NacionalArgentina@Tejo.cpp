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
  vector<float> distAzul(tiradas);
  vector<float> distRojo(tiradas);
  cin >> dim_x >> dim_y >> T_x >> T_y;
  for (int i = 0; i < tiradas; ++i) {
    cin >> xAzul[i] >> yAzul[i];
  }
  for (int i = 0; i < tiradas; ++i) {
    cin >> xRojo[i] >> yRojo[i];
  }
  for (int i = 0; i < tiradas; ++i) {
    distAzul[i] = sqrt(pow(xAzul[i] - T_x, 2) + pow(yAzul[i] - T_y, 2));
    distRojo[i] = sqrt(pow(xRojo[i] - T_x, 2) + pow(yRojo[i] - T_y, 2));
  }
  float minimoAzul = *min_element(distAzul.begin(), distAzul.end());
  float minimoRojo = *min_element(distRojo.begin(), distRojo.end());
  int contador = 0;
  if (minimoAzul < minimoRojo) {
    cout << "A" << endl;
    for (int i = 0; i < tiradas; ++i) {
      if (distAzul[i] < minimoRojo) {
        ++contador;
      }
    }
    cout << contador;
  }
  if (minimoAzul > minimoRojo) {
    cout << "R" << endl;
    for (int i = 0; i < tiradas; ++i) {
      if (distRojo[i] < minimoAzul) {
        ++contador;
      }
    }
    cout << contador;
  }
  return 0;
}