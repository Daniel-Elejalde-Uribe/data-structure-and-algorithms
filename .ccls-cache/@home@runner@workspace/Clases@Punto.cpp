#include <iostream>
#include <cmath>

using namespace std;

class Punto{
public:
  int x;
  int y;

  Punto(int _x, int _y){
    x = _x;
    y = _y;
  }

  void mostrarCoordenadas(){
    cout << "Punto: (" << x << ", " << y << ")" << endl;
  }
  double calcularDistancia(Punto p){
    double dx = x - p.x;
    double dy = y - p.y;
    return sqrt(pow(dx,2)+pow(dy,2));
  }
};
int main(){
  Punto p1(1, 1);
  p1.mostrarCoordenadas();

  Punto p2(4, 5);
  p2.mostrarCoordenadas();

  double distancia = p1.calcularDistancia(p2);
  cout << "Distancia: " << distancia << endl;

  cout << "-----------------------------" << endl;

  Punto p3(0,0);
  Punto p4(3,4);

  p3.mostrarCoordenadas();
  p4.mostrarCoordenadas();

  double distancia2 = p3.calcularDistancia(p4);
  cout << "Distancia: " << distancia2 << endl;

  return 0;
}