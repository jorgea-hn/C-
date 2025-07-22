# include <iostream>

using namespace std;

class CuentaBancaria {
private:
    double saldo;

public:
    void setSaldo(double nuevoSaldo) {
        if (nuevoSaldo >= 0) {
            saldo = nuevoSaldo;
        } else {
            cout << "El saldo no puede ser negativo." << endl;
        }
    }

    double getSaldo() const {
        return saldo;
    }
};

class Estudiante {
    private:
        int calificacion;

    public:
        void setCalificacion(int nuevaCalificacion) {
            if (nuevaCalificacion >= 0 && nuevaCalificacion <= 100) {
                calificacion = nuevaCalificacion;
            } else {
                cout << "La calificación debe estar entre 0 y 100." << endl;
            }
        }

        int getCalificacion() const {
            return calificacion;
        }
};

int main(){
    cout << "Ejemplo de cuenta bancaria" << endl;

    CuentaBancaria cuenta;
    cuenta.setSaldo(1000.50);
    cout << "Saldo actual: " << cuenta.getSaldo() << endl;

    cuenta.setSaldo(-500); // Intento de establecer un saldo negativo
    cout << "Saldo después del intento de actualización: " << cuenta.getSaldo();
    
    cout << "ejemplo de estudiante"<< endl;
    Estudiante estudiante;
    estudiante.setCalificacion(85);
    cout << "Calificación: " << estudiante.getCalificacion()<<endl;

    estudiante.setCalificacion(150); // Intento de establecer una calificación inválida

    return 0;
}