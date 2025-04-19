#include <iostream>
#include <string>

using namespace std;

int main(){

    // tipos numericos enteros
    int edad = 21;              // entero con signo
    unsigned int puntos = 1500; // entero sin signo (solo positivos)
    short dias = 7;             // entero corto
    long poblacion = 800000;    // entero largo


    // tipos numericos decimales
    float temperatura = 36.6f;     // decimal con menor precision
    double altura = 1.75;          // decimal con mayor precision
    long double pi = 3.1415926535;  // decimal con alta precision


    // caracter o cadena
    char inicial = 'M';             // un solo caracter
    string nombre = "Maria";        // cadena de texto (requiere #include <string>)


    // booleano
    bool estudiante = true;        // true o false

    // mostrar valores
    cout << "Nombre:  " << nombre << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Edad:  " << edad << " años" << endl;
    cout << "Altura: " << inicial << " metros" << endl;
    cout << "Temperatura corporal:  " << temperatura << "°C" << endl;
    cout << "puntos acumulados: " << puntos << endl;
    cout << "Estudiante:  " << (estudiante ? "Si": "No") << endl;
    cout << "poblacion estimada: " << dias << endl;
    cout << "valor de pi: " << pi << endl;

}