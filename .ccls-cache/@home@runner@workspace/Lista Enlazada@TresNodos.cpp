#include <iostream>

struct Nodo{
   int data;
   Nodo* next;

   Nodo(int valor){
     data = valor;
     next = nullptr;
   }
};
int main(){
  Nodo* nodo0 = new Nodo(10);
  Nodo* nodo1 = new Nodo(20);
  Nodo* nodo2 = new Nodo(30);

  std::cout << "nodo0(data)" << nodo0->data << std::endl;
  std::cout << "nodo0(next)" << nodo0->next << std::endl;
  std::cout << "nodo0(direccion)" << nodo0 << std::endl;
  std::cout << " " << std::endl;
  std::cout << "nodo1(data)" << nodo1->data << std::endl;
  std::cout << "nodo1(next)" << nodo1->next << std::endl;
  std::cout << "nodo1(direccion)" << nodo1 << std::endl;
  std::cout << " " << std::endl;
  std::cout << "nodo2(data)" << nodo2->data << std::endl;
  std::cout << "nodo2(next)" << nodo2->next << std::endl;
  std::cout << "nodo2(direccion)" << nodo2 << std::endl;
  std::cout << " " << std::endl;

  //Enlazar los nodos
  nodo0->next = nodo1;
  nodo1->next = nodo2;

  std::cout << "nodo0(data)" << nodo0->data << std::endl;
  std::cout << "nodo0(next)" << nodo0->next << std::endl;
  std::cout << "nodo1(data)" << nodo1->data << std::endl;
  std::cout << "nodo1(next)" << nodo1->next << std::endl;
  std::cout << "nodo2(data)" << nodo2->data << std::endl;
  std::cout << "nodo2(next)" << nodo2->next << std::endl;
  std::cout << " " << std::endl;
  
  Nodo* temp = nodo0;
  while (temp != nullptr){
    std::cout << "Valor: " << temp->data << std::endl;
    temp = temp->next;
  }
  return 0;
}