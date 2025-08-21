#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  Node *next;

  Node(int val) {
    data = val;
    next = nullptr;
  }
};

struct Stack {
  Node *top;

  Stack() { 
    top = nullptr; 
  }

  ~Stack() {
    while (!isEmpty()) {
      pop();
    }
  }

  void push(int val) {
    Node *newNode = new Node(val);
    newNode->next = top;
    top = newNode;
    cout << val << "Agregado a la lista";
  }

  void pop() {
    if (isEmpty()) {
      cout << "La pila está vacía. No se puede eliminar" << endl;
      return;
    }
    Node *temp = top;
    top = top->next;
    cout << temp->data << " eliminado de la lista" << endl;
    delete temp;
  }

  bool isEmpty(){
    return top == nullptr;
  }

  void display(){
    if(isEmpty()){
      cout<< "La pila está vacia." << endl;
      return;
    }
    Node* current = top;
    cout << "Elementos de la pila: " << endl;
    while(current != nullptr){
      cout<< current->data<<endl;
      current = current->next;
    }
  }
};

int main() {
  Stack myStack;
  myStack.push(10);
  myStack.push(20);

  myStack.display();

  
  myStack.pop();
  myStack.pop();
  myStack.pop();
  return 0;
}