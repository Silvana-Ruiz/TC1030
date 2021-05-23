/* Silvana Dorita Ruiz Olivarría A01252346
TC1030
Programación Orientada a Objetos
Grupo 700
20 de mayo de 2021*/
#include "HerenciaPersonaje.h"

class ArrowWoman: public Personaje{
    public:
        ArrowWoman();
        ArrowWoman(int, int);
        void shootArrow(int);
        void addArrow(int);
        void showArrows();
        int getArrows();

    private:
        int numFlechas;
};

ArrowWoman::ArrowWoman(): Personaje(){
    numFlechas = 100;
}
ArrowWoman::ArrowWoman(int lev, int n): Personaje(lev){
    numFlechas = 100;
}

void ArrowWoman::shootArrow(int num){
    numFlechas = numFlechas - num;
    cout << "ArrowWoman lanza una flecha, quedan " << numFlechas<< " flechas." << endl;
}

void ArrowWoman::showArrows(){
    cout << numFlechas << " flechas" << endl;
}

int ArrowWoman::getArrows(){
    return numFlechas;
}