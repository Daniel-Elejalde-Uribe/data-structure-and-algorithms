//
// Implementación de una Cola (Queue) usando lista enlazada
//

#include <iostream>
// Usamos el namespace std para simplificar el código
using namespace std;

// 1. Estructura del nodo de la lista enlazada
struct Node {
    int data;
    Node* next;

    // Constructor para inicializar el nodo
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// 2. Clase para implementar la cola
struct Queue {
    // Punteros para el inicio (front) y el final (last) de la cola
    Node* front;
    Node* last;

    // Constructor
    Queue() {
        front = nullptr;
        last = nullptr;
    }

    // Destructor para liberar la memoria
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // Metodo para agregar un elemento al final de la cola (enqueue)
    void enqueue(int val) {
        Node* newNode = new Node(val);
        // Si la cola está vacía, el nuevo nodo es el primero y el último
        if (isEmpty()) {
            front = newNode;
            last = newNode;
        } else {
            // El Ãºltimo nodo actual apunta al nuevo nodo
            last->next = newNode;
            // El nuevo nodo se convierte en el Ãºltimo de la cola
            last = newNode;
        }
        cout << val << " aÃ±adido a la cola." << endl;
    }

    // Metodo para eliminar el elemento del frente de la cola (dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "La cola está vacía. No se puede eliminar." << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        // Si la cola se queda vacía despuÃ©s de eliminar,
        // el puntero 'last' también debe ser null
        if (front == nullptr) {
            last = nullptr;
        }
        cout << temp->data << " eliminado de la cola." << endl;
        delete temp;
    }

    // Metodo para obtener el elemento del frente sin eliminarlo
    int peek() {
        if (isEmpty()) {
            cout << "La cola estÃ¡ vacÃ­a. No hay elementos para ver." << endl;
            return -1; // Valor de error
        }
        return front->data;
    }

    // Metodo para verificar si la cola estÃ¡ vacÃ­a
    bool isEmpty() {
        return front == nullptr;
    }

    // Metodo para mostrar los elementos de la cola
    void display() {
        if (isEmpty()) {
            cout << "La cola está vacía." << endl;
            return;
        }
        Node* current = front;
        cout << "Elementos de la cola: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// 3. Función principal para demostrar el uso de la cola
int main() {
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.display();

    cout << "Elemento en el frente: " << myQueue.peek() << endl;

    myQueue.dequeue();
    myQueue.display();

    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();

    return 0;
}
