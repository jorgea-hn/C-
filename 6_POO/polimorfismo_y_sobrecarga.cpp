# include <iostream>

using namespace std;

// Polimorfismo en timpo de compilación mediante sobrecarga de funciones

// clase con metodos sobrecargados: mismo nombre, diferentes parametros

class Calculadora {
public:
    int sumar(int a, int b) {
        cout << "Suma de enteros: ";
        return a + b;
    }

    float sumar(float a, float b) {
        cout << "Suma de flotantes: ";
        return a + b;
    }

    int sumar(int a, int b, int c) {
        cout << "Suma de tres enteros: ";
        return a + b + c;
    }

};

// Polimorfismo en tiempo de ejecución mediante sobreescritura de métodos

class Animal {
public:
    virtual void sonido() {
        cout << "El animal hace un sonido" << endl;
    }
};

class Gato : public Animal {
public:
    void sonido() override {
        cout << "El gato maulla" << endl;
    }
};

class Perro : public Animal {
public:
    void sonido() override {
        cout << "El perro ladra" << endl;
    }
};

class Vaca : public Animal {
public:
    void sonido() override {
        cout << "La vaca muge" << endl;
    }
};

int main(){
    cout << "Ejemplo de polimorfismo por sobrecarga de funciones compile-time" << endl;
    Calculadora calc;
    cout << calc.sumar(5, 10) << endl;          // Suma
    cout << calc.sumar(5.5f, 10.2f) << endl;    // Suma de flotantes
    cout << calc.sumar(1, 2, 3) << endl;

    cout << "Polimorfismo por sobreescritura run-time" << endl;
    Animal* animal;
    Gato gato;
    Perro perro;
    Vaca vaca;

    animal = &gato;  // Asignación de un objeto Gato a un puntero de tipo Animal
    animal->sonido(); // Llama al método sonido() de Gato    
    animal = &perro; // Asignación de un objeto Perro a un puntero de tipo Animal
    animal->sonido(); // Llama al método sonido() de Perro

    animal = &vaca;  // Asignación de un objeto Vaca a un puntero de tipo Animal
    animal->sonido(); // Llama al método sonido() de Vaca

    return 0;
}