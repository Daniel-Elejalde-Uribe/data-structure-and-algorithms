#include <iostream>
using namespace std;

int main(){
  string contenido_pagina_especifica = "Hola";
  cout << "contenido_pagina-especifica: " << contenido_pagina_especifica << endl;

  //Puntero
  string *puntero = &contenido_pagina_especifica;
  cout << "puntero: " << puntero << endl;

  //Imprimir el contenido de la variable a la que apunta el puntero
  cout << "contenido_pagina-especifica: " << *puntero << endl;

  //Modificar el contenido de la variable a la que apunta el puntero
  *puntero = "Hola2";
  cout << "contenido_pagina-especifica: " << contenido_pagina_especifica << endl;
}