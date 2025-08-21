#include <cstddef>  // Para nullptr
#include <iostream> // Para usar std::cout
#include <vector>   // Para usar std::vector (más flexible que un array fijo)

// Usamos el namespace std para simplificar el código
using namespace std;

// --- Definición de la estructura (struct) Node ---
// Los miembros son públicos por defecto
struct Node {
  int data;   // El dato que el nodo almacenará
  Node *next; // Puntero al siguiente nodo en la lista

  // Constructor para inicializar el nodo
  Node(int val) {
    data = val;
    next =
        nullptr; // Por defecto, un nodo recién creado no apunta a ningún otro
  }
};

// --- Función para crear una lista enlazada a partir de un vector de enteros
// ---
// Node* crearListaDesdeArray(const vector<int>& arr) {
Node *crearListaDesdeArray(vector<int> arr) {
  // Si el array está vacío, no hay lista que crear, devolvemos nullptr
  if (arr.empty()) {
    return nullptr;
  }

  // El puntero 'nodo0' siempre apuntará al primer nodo de la lista.
  // Creamos el primer nodo con el primer elemento del array.
  Node *nodo0 = new Node(arr[0]);
  // El puntero 'current' nos ayudará a recorrer la lista mientras la
  // construimos, siempre apuntando al último nodo agregado para poder enlazar
  // el siguiente.
  Node *current = nodo0;

  // Recorremos el resto del array (desde el segundo elemento)
  for (int i = 1; i < arr.size(); i++) {
    // 1. Creamos un nuevo nodo con el valor actual del array
    Node *nuevoNodo = new Node(arr[i]);

    // 2. Enlazamos el 'next' del nodo actual (el último que agregamos)
    // con el nuevo nodo que acabamos de crear.
    current->next = nuevoNodo;

    // 3. Movemos el puntero 'current' al nuevo nodo,
    // para que ahora 'current' sea el "último nodo" y podamos enlazar el
    // siguiente a él.
    current = nuevoNodo;
  }

  // Devolvemos el puntero 'nodo0', que es el inicio de la lista enlazada
  // construida
  return nodo0;
}

// --- Función para recorrer los elementos de la lista enlazada ---
void imprimirLista(Node *nodo0) {
  Node *current = nodo0;
  cout << "Elementos de la lista enlazada: ";
  while (current != nullptr) {
    cout << current->data << endl;
    current = current->next;
  }
}

void tamañoLista(Node *nodo0) {
  Node *current = nodo0;
  // Contador del numero de ciclos
  int T = 0;
  cout << "Tamaño de la lista: " << endl;
  while (current != nullptr) {
    T++;
    current = current->next;
  }
  cout << T << endl;
}

// Liberar lista
void LiberarLista(Node *nodo0) {
  Node *current = nodo0;
  while (current != nullptr) {
    Node *currentNext = current->next;
    delete current;
    current = currentNext;
  }
  cout << "Lista Liberada" << endl;
}

void buscarValor(Node *nodo0, int valor) {
  bool estaValor = false;
  Node *current = nodo0;
  int i = 0;
  while (current != nullptr) {
    if (current->data == valor) {
      cout << "El valor está en la posición: " << i << endl;
      estaValor = true;
    }
    current = current->next;
    i++;
  }
  if (estaValor == false) {
    cout << "No se encontró el valor" << endl;
  }
}
void buscarIndice(Node *nodo0, int posicion) {
  Node *current = nodo0;
  int i = 0;
  while (current != nullptr && i < posicion) {
    current = current->next;
    i++;
  }
    cout<<"En la posicion "<<posicion<<" el valor es "<<current->data<<endl;
  
}

Node *insertarNodoLista(Node *nodo0, int posicion, int valor) {
  Node *current = nodo0;
  Node *nuevoNodo = new Node(valor);
  if (posicion > 0) {
    int i = 0;

    while (current != nullptr && i < posicion - 1) {
      current = current->next;
      i++;
    }

    nuevoNodo->next = current->next;
    current->next = nuevoNodo;
    return nodo0;
  } else {
    nuevoNodo->next = nodo0;
    return nuevoNodo;
  }
}

Node* eliminarNodoLista(Node* nodo0, int posicion){
    if(posicion==0){
        Node* borrar = nodo0;
        nodo0 = nodo0->next;
        delete borrar;
        return nodo0;
    }
    Node *current = nodo0;
    int i = 0;
    while(current != nullptr && i < posicion - 1){
        current = current->next;
        i++;
    }
    Node *borrar = current->next;
    current->next = borrar->next;
    delete borrar;
    return nodo0;
}

// --- Función principal (main) ---
int main() {
  // Definimos un std::vector con los valores deseados
  // std::vector es más flexible que un array C-style fijo

  vector<int> valores = {12, 31, 76, 43, 87};

  cout << "Creando lista enlazada a partir del array: [12, 31, 76, 43, 87]"
       << endl;

  // Llama a la función para crear la lista enlazada
  Node *miLista = crearListaDesdeArray(valores);

  // Imprime la lista para verificar
  imprimirLista(miLista);

  // Arroja el tamaño de la lista
  tamañoLista(miLista);

  // Busca la posición de un valor en la lista
  buscarValor(miLista, 31);
  buscarValor(miLista, 40);

  //Buscar valor por posición
  buscarIndice(miLista, 2);

  // Insertamos Nodo e imprimimos la lista
  //En el inicio
  Node *nuevoNodo = insertarNodoLista(miLista, 0, 50);
  imprimirLista(nuevoNodo);
  //En el intermedio
  miLista = nuevoNodo;
  insertarNodoLista(miLista, 2, 28);
  imprimirLista(miLista);
  //En el final
  insertarNodoLista(miLista, 7, 78);
  imprimirLista(miLista);

  // Eliminar Nodo
  //En el inicio
  eliminarNodoLista(miLista, 0);
  //En el intermedio
  eliminarNodoLista(miLista, 3);
  //En el final
  eliminarNodoLista(miLista, 5);

  // Libera la lista
  LiberarLista(miLista);

  return 0;
}