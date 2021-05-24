/* Silvana Dorita Ruiz Olivarría A01252346
TC1030
Programación Orientada a Objetos
Grupo 700
24 de mayo de 2021*/
#include <iostream>
using namespace std;

#include "Polimorfismo_Circle.h"
#include "Polimorfismo_Rectangulo.h"

int main() {
    Shape *Shapes[5]; // creamos un arreglo de objetos de tipo Shape, es un arreglo de apuntadores (direcciones)
    Shapes[0] = new Circle();
    Shapes[1] = new Rectangle();
    Shapes[2] = new Rectangle(1,2,5,6);
    Shapes[3] = new Circle(4,2,1);
    Shapes[4] = new Rectangle();
    for (int i = 0; i < 5; i++) {
        Shape *current = Shapes[i];
        current->draw();
    }


    // Cálculo de área
    Rectangle r1(3,5,3,5);
    r1.area();
return 0;
}