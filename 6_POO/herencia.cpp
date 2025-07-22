# include <iostream>
using namespace std;

class Animal {
    public: 
        void comer() {
            cout << "El animal come" << endl;
        }

        void dormir() {
            cout << "El animal duerme" << endl;
        }
};

class Perro : public Animal {
    public:
        void ladrar() {
            cout << "El perro ladra" << endl;
        }
};

class Vehiculo {
    public:
        void mover() {
            cout << "El vehiculo se mueve" << endl;
        }
};


class Auto : public Vehiculo {
    public:
        void encenderMotor() {
            cout << "El auto ha encendido el motor" << endl;
        }
};

class Bicicleta : public Vehiculo {
    public:
        void pedalear() {
            cout << "La bicicleta esta pedaleando" << endl;
        }
};

int main (){
    cout << "Ejemplo 1 : Animal y perro" << endl;

    Perro miPerro;
    miPerro.comer();
    miPerro.dormir();
    miPerro.ladrar();

    cout << "Ejemplo 2 : Vehiculo, auto y bicicleta" << endl;

    Auto miAuto;
    Bicicleta miBicicleta;
    miAuto.mover();
    miAuto.encenderMotor();
    miBicicleta.mover();
    miBicicleta.pedalear();

    return 0;
}