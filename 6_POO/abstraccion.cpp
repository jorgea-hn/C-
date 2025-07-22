# include <iostream>
# include <cmath>

using namespace std;

class Figura{
    public:
        virtual float calcularArea() = 0; // Método virtual puro

        virtual void dibujar() = 0;

        void mostrarInfo(){
            cout << "Información de la figura:" << endl;
        }


        virtual ~Figura() {}// Destructor virtual
};


// clase derivada de Figura
class Circulo : public Figura {
    private:
        float radio;

    public:
        Circulo(float r) : radio(r) {}

        float calcularArea() override {
            return M_PI * radio * radio; // Área del círculo
        }

        void dibujar() override {
            cout << "Dibujando un círculo de radio: " << radio << endl;
        }
};

// clase derivada de Figura
class Rectangulo : public Figura {
    private:
        float base;
        float altura;

    public:
        Rectangulo(float b, float h) : base(b), altura(h) {}

        float calcularArea() override {
            return base * altura; // Área del rectángulo
        }

        void dibujar() override {
            cout << "Dibujando un rectángulo de base: " << base << " y altura: " << altura << endl;
        }
};

int main(){
    Figura* figura;

    Circulo c(5);
    Rectangulo r(4, 3);

    // polimorfismo con abstraccion
    figura =&c;
    figura->mostrarInfo();
    figura->dibujar();
    cout << "Área del círculo: " << figura->calcularArea() << endl;

    figura = &r;
    figura->mostrarInfo();
    figura->dibujar();
    cout << "Área del rectángulo: " << figura->calcularArea() << endl;

    return 0;
}