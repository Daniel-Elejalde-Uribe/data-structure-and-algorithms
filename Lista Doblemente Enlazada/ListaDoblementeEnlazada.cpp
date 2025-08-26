#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;

    // Constructor para inicializar el nodo
    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

// Función para imprimir la lista hacia adelante
void printForward(Node* head) {
    std::cout << "Recorrido hacia adelante: ";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Función para imprimir la lista hacia atrás
void printBackward(Node* tail) {
    std::cout << "Recorrido hacia atrás: ";
    Node* current = tail;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->prev;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // 1. Crear 4 nodos y asignar datos a los nodos.
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* tail = new Node(4);

    //2.1 Enlazar los nodos de ida.
    head->next = second;
    second->next = third;
    third->next = tail;
    tail->next = nullptr;

    //2.2 Enlazar los nodos de vuelta.
    tail->prev = third;
    third->prev = second;
    second->prev = head;
    head->prev = nullptr;

    // Imprimir para verificar los enlaces
    printForward(head);
    printBackward(tail);

    // Liberar la memoria
    delete head;
    delete second;
    delete third;
    delete tail;

    return 0;
}

