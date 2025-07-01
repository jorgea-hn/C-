#include <iostream>
using namespace std;

int main(){
    // Usamos new para reservar memoria dinámica
    // y delete para liberar esa memoria cuando ya no la necesitamos.
    int* ptr = new int();
    *ptr = 42;
    cout << *ptr << endl;
    delete ptr;


    // reservamos memoria para un arreglo dinámico
    // y liberamos esa memoria al final.
    int* arreglo = new int[5];
    for (int i = 0; i < 5; ++i) {
        arreglo[i] = i * 1;
    }

    for (int i = 0; i < 5; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    delete[] arreglo;


    // creamos un arreglo dinámico de tamaño variable
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int* datos = new int[n];
    for (int i = 0; i < n; ++i) {
        datos[i] = i * 2;
    }

    delete[] datos;

    return 0;
}   