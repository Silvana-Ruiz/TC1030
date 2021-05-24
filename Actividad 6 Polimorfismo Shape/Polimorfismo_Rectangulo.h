/* Silvana Dorita Ruiz Olivarría A01252346
TC1030
Programación Orientada a Objetos
Grupo 700
24 de mayo de 2021*/
#include "Polimorfismo_Shape.h"

class Rectangle:public Shape {
private:
    int xr; //ancho
    int yr; //largo
public:
    Rectangle();
    Rectangle(int,int,int,int);
    void draw();
    void area();
};

Rectangle::Rectangle(){
    xr = 0;
    yr = 0;
}

Rectangle::Rectangle(int valX, int valY, int valXR, int valYR):Shape(valX, valY){
    xr = valXR;
    yr = valYR;
}
void Rectangle::draw(){
    cout << "Soy un Rectangulo" <<endl;
}
void Rectangle::area(){ //mejor hacerlo del área
    float per = xr * yr ;
    cout << per;

}