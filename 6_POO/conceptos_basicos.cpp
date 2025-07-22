#include <iostream>

using namespace std;

class Persona{
    public:
        string nombre;
        int edad;

        void saludar() {
            cout << "Hola, soy " << nombre << "y tengo " << edad << " años" << endl;
        }
};

class Perro{
    public:
        string nombre;
        string raza;

        void ladrar() {
            cout << "Guau! Soy " << nombre << endl;
        }
};

int main() {
    Persona persona1;
    persona1.nombre = "Juan";
    persona1.edad = 30;
    persona1.saludar();

    Perro perro1;
    perro1.nombre = "Rex";
    perro1.raza = "Labrador";
    perro1.ladrar();

    return 0;
}