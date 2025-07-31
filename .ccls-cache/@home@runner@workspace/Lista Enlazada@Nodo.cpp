#include <iostream>
#include <cstddef>
using namespace std;

//Definicion de la estructura Nodo
struct Nodo{
  int data;
  Nodo* next;

//Constructor
  Nodo(int valor){
    data = valor;
    next = nullptr;
  }
    
};

int main(){
  cout << "1.Antes de enlazar los nodos" << endl;
  Nodo* nodo0 = new Nodo(10);
  cout << "nodo0(data)" << nodo0->data << endl;
  cout << "nodo0(next)" << nodo0->next << endl;
  cout << "nodo0(direccion)" << nodo0 << endl;
  cout << " " << endl;
  
  cout << "2. Crear segundo nodo" << endl;
  Nodo* nodo1 = new Nodo(20);
  cout << "nodo1(data)" << nodo1->data << endl;
  cout << "nodo1(next)" << nodo1->next << endl;
  cout << "nodo1(direccion)" << nodo1 << endl;
  cout << " " << endl;
  
  cout << "3. Enlazar los nodos" << endl;
  nodo0->next = nodo1;
  cout << "nodo0(data)" << nodo0->data << endl;
  cout << "nodo0(next)" << nodo0->next << endl;
  cout << " "<< endl;
  cout << "nodo1(data)" << nodo1->data << endl;
  cout << "nodo1(next)" << nodo1->next << endl;
  cout << " "<< endl;
  
  cout << "4. Recorrer pequeña lista" << endl;
  Nodo* temp = nodo0;
  while (temp != nullptr){
    cout << "Valor: " << temp->data << endl;
    temp = temp->next;
  }
  cout << " "<< endl;

  cout << "5. Liberar Memoria" << endl;
  delete nodo0;
  delete nodo1; 
}