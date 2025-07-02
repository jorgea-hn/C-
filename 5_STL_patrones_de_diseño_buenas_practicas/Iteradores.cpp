// Un iterador es un objeto similar a un puntero que permite recorrer los elementos de una coleccion de datos, como un vector, lista o mapa

# include <iostream>
# include <vector>

using namespace std;

int main() {
    // Crear un vector de enteros
    vector<int> numeros = {10, 20, 30, 40, 50};

    // iterador nomral
    cout << "Iterador normal (modificable): ";
    for (vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // iterador usando auto - mas legible
    cout << "Iterador con auto (mas sencillo): ";
    for (auto it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // iterador constante - no modificable
    cout << "Iterador constante (no modificable): ";
    for (vector<int>::const_iterator it = numeros.cbegin(); it != numeros.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // iterador reverso 
    cout << "Iterador reverso: ";
    for (vector<int>::reverse_iterator it = numeros.rbegin(); it != numeros.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // iterador constante reverso
    cout << "Iterador constante reverso: ";
    for (vector<int>::const_reverse_iterator it = numeros.crbegin(); it != numeros.crend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;


    return 0;
}