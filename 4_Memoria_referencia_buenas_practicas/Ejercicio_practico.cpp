#include <iostream>
using namespace std;


void llenarArreglo(int* ptr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Ingrese un numero:";
        cin >> ptr[i];
    }
}

float calcularPromedio(int* ptr, int size) {
    float suma = 0;
    for (int i = 0; i < size; ++i) {
        suma += ptr[i];
    }
    return static_cast<float>(suma) / size;
}

int encontrarMayor(int* ptr, int size) {
    int mayor = ptr[0];
    for (int i = 1; i < size; ++i) {
        if (ptr[i] > mayor) {
            mayor = ptr[i];
        }
    }
    return mayor;
}

int encontrarMenor(int* ptr, int size) {
    int menor = ptr[0];
    for (int i = 1; i < size; ++i) {
        if (ptr[i] < menor) {
            menor = ptr[i];
        }
    }
    return menor;
}

int main(){
    int n;
    cout << "Cuantos numeros desea ingresar? ";
    cin >> n;

    // Validamos la cantidad ingresada sea valida
    if (n<=0){
        cout << "Cantidad invalida. Debe ser mayor que 0." << endl;
        return 1; // Salimos del programa con un error
    }

    int* numeros = new int[n]; // Reservamos memoria para un arreglo dinámico

    llenarArreglo(numeros, n); // Llenamos el arreglo con numeros ingresados por el usuario

    cout << "Promedio: " << calcularPromedio(numeros, n) << endl;
    cout << "Mayor: " << encontrarMayor(numeros, n) << endl;
    cout << "Menor: " << encontrarMenor(numeros, n) << endl;

    delete[] numeros; // Liberamos la memoria al final
    numeros = nullptr; // Asignamos nullptr para evitar accesos accidentales a memoria liberada
    return 0;
}