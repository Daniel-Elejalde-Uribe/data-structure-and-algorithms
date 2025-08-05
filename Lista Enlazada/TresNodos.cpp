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
  nodo0->next = nodo1;
  nodo1->next = nodo2;

  Nodo* temp = nodo0;
  while (temp != nullptr){
    std::cout << "Valor: " << temp->data << std::endl;
    std::cout<<"Direccion: "<< temp << std::endl;
    temp = temp->next;
  }
  
}