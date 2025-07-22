#include <iostream>
#include <vector>
int main(){
    // APODAR TIPOS DE VARIABLES
    // typedef std::string String;
    using String = std::string;

    //CAMBIOS
    //boolean -> bool
    //final -> const
    String nombre = "Daniel";
    int numero = 20;
    double valor = 30;

    //OPERADORES ARITMÉTICOS
    numero *= 2;
    valor /= 4;

    //CONVERSIÓN DE DATOS
    int x = (int)3.1416;

    //IMPRIMIR EN PANTALLA
    std::cout<<"Nombre: "<<nombre<<std::endl;
    std::cout<<numero + valor<<std::endl;
    std::cout<<(char)100<<std::endl;
    std::cout<<x<<std::endl;
    return 0;
}
