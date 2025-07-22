# include <iostream>

using namespace std;

class Empleado {
    protected:
        string nombre;

    public:
        Empleado(string n) : nombre(n) {}

        string getNombre() const {
            return nombre;
        }
        
        virtual void mostrarRol(){
            cout << "Empleado: " << nombre << endl;
        }

        virtual void trabajar() {
            cout << nombre << " está trabajando." << endl;
        }

        virtual ~Empleado() {} // Destructor virtual para permitir la limpieza adecuada
};

class Jefe : public Empleado {
    public:
        Jefe(string n) : Empleado(n) {}

        void mostrarRol() override {
            cout << "Jefe: " << nombre << endl;
        }

        void trabajar() override {
            cout << nombre << " está dirigiendo al equipo." << endl;
        }
};

class Becario : public Empleado {
    public:
        Becario(string n) : Empleado(n) {}

        void mostrarRol() override {
            cout << "Becario: " << nombre << endl;
        }

        void trabajar() override {
            cout << nombre << " está aprendiendo y asistiendo." << endl;
        }
};

int main() {
    Empleado* empleados[3];

    empleados[0] = new Jefe("Carlos");
    empleados[1] = new Becario("Ana");
    empleados[2] = new Empleado("Luis");

    for (int i = 0; i < 3; ++i) {
        empleados[i]->mostrarRol();
        empleados[i]->trabajar();
    }

    for (int i = 0; i < 3; ++i) {
        delete empleados[i]; // Limpieza de memoria
    }

    return 0;
}