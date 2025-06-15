#include <iostream>

using namespace std;

int main(){
    char saludo[] = "Hola";
    cout << saludo << endl;


    char saludo2[5] = {'H', 'o', 'l', 'a', '\0'};
    // el \0 indifica el final de la cadena

    string nombre = "Ana";
    nombre += " Maria";
    cout << nombre << endl;
    cout << nombre.length()  << endl;
    cout << nombre[1] << endl;

    if (nombre == "Ana Maria"){
        cout << "Nombre completo" << endl;
    }

    return 0;
}   