/* Silvana Dorita Ruiz Olivarría A01252346
TC1030
Programación Orientada a Objetos
Grupo 700
22 de mayo de 2021*/
#ifndef HerenciaPersonaje_h
#define HerenciaPersonaje_h
class Personaje{
    public:
        Personaje(); // Constructor Default
        Personaje(int);
        void run();
        void jump();
    protected:
        int level;

};
Personaje::Personaje(){ // Constructor Default
    level = 0;
    }

Personaje::Personaje(int lev){ // Constructor Default
    level = lev;
}
void Personaje::run(){
    cout << "El personaje esta corriendo." << endl;
}
void Personaje::jump(){
    cout << "El personaje salta." << endl;
}
#endif