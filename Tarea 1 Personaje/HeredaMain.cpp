/* Silvana Dorita Ruiz Olivarría A01252346
TC1030
Programación Orientada a Objetos
Grupo 700
20 de mayo de 2021*/
# include <iostream>
# include <ctime>
# include <windows.h>
# include <cstdlib>

using namespace std;

# include "HerenciaLaserMan.h"
# include "HerenciaArrowWoman.h"

const int GOLPE = 10;
const int ROUNDS = 3;

int getRand(int n) {
    return (rand() % n) + 1;
}

/* void combate(LaserMan l1, ArrowWoman a1) {
    int hits = getRand(ROUNDS);
    for (int i = 0; i > hits; i++) {
        l1.shootLaser(getRand(GOLPE));
        a1.shootArrow(getRand(GOLPE));
    }    
} */

int main() {
    srand(time(0));

    LaserMan lm1;
    ArrowWoman a1; 

    lm1.showCarga();
    a1.showArrows();

    for (int i = 0; i < ROUNDS; i++) {
        lm1.shootLaser(getRand(GOLPE));
        a1.shootArrow(getRand(GOLPE));
        cout << " ... " << endl;
        Sleep(3000);
    } 

    lm1.showCarga();
    a1.showArrows();

    if (lm1.getCarga() > a1.getArrows()) {
        cout << "Laser Man gano!" << endl;
    }
    else {
        cout << "Arrow Woman gano!" << endl;
    }

    return 0;
}