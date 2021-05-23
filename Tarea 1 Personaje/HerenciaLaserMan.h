/* Silvana Dorita Ruiz Olivarría A01252346
TC1030
Programación Orientada a Objetos
Grupo 700
20 de mayo de 2021*/
#include "HerenciaPersonaje.h"

class LaserMan: public Personaje{
    public:
        LaserMan();
        LaserMan(int, int);
        void shootLaser(int);
        void addLaser(int);
        void showCarga();
        int getCarga();

    private:
        int numCargas;
};

LaserMan::LaserMan(): Personaje(){
    numCargas = 100;
}
LaserMan::LaserMan(int lev, int n): Personaje(lev){
    numCargas = n;
}

void LaserMan::shootLaser(int num){
    numCargas = numCargas - num;
    cout << "Se lanza un rayo laser, te quedan " << numCargas<< " cargas." << endl;
}

void LaserMan::showCarga(){
    cout << numCargas << " rayos disponibles" << endl;
}

int LaserMan::getCarga(){
    return numCargas;
}