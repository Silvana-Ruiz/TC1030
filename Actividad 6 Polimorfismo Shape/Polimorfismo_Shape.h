/* Silvana Dorita Ruiz Olivarría A01252346
TC1030
Programación Orientada a Objetos
Grupo 700
24 de mayo de 2021*/

#ifndef Polimorfismo_Shape_h
#define Polimorfismo_Shape_h

class Shape {
private:
    int x;
    int y;

public:
    Shape();
    Shape(int, int);
    virtual void draw();

    int getValueX();
    int getValueY();
};

Shape::Shape(){ // Constructor Default
    x = 0;
    y = 0;
}

Shape::Shape(int valX, int valY) {
    x = valX;
    y = valY;
}

void Shape::draw() {  // VIRTUAL only in declaration
    cout << "Soy una Figura" << endl;
}

int Shape::getValueX() {
    return x;
}
int Shape::getValueY() {
    return y;
}

#endif