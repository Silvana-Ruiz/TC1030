/* Silvana Dorita Ruiz Olivarría A01252346
TC1030
Programación Orientada a Objetos
Grupo 700
24 de mayo de 2021*/
#include "Polimorfismo_Shape.h"

class Circle:public Shape {
private:
    int r;
public:
    Circle();
    Circle(int,int,int);
    void draw();
};

Circle::Circle(){
    r = 0;
}

Circle::Circle(int valX, int valY, int valR):Shape(valX, valY){
    r = valR;
}
void Circle::draw(){
    cout << "Soy un Circulo" <<endl;
}
