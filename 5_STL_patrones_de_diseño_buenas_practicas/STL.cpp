// STL, es una coleccion de clases o funciones genericas, listas para hacer uso, que nos permiten trabajar con estructuras de datos y algoritmos de manera eficiente y segura.


# include <iostream>
# include <vector>
# include <string>
# include <map>
# include <algorithm>
# include <functional>

using namespace std;

int main(){
    //  vector crear y mostrar

    vector<int> numeros = {1, 2, 3, 4, 5};
    numeros.push_back(6); // Agregar un elemento al final del vector
    cout << "Elementos del vector: ";
    for (int i: numeros) {
        cout << i << " ";
    }
    cout << endl;


    // ejemplo adicional: llenar el vector con datos del usuario

    int cantidad;
    cout << "Ingrese la cantidad de numeros a agregar al vector: ";
    cin >> cantidad;

    vector<int> datos;
    for (int i = 0; i < cantidad; ++i) {
        int numero;
        cout << "Ingrese un numero: ";
        cin >> numero;
        datos.push_back(numero);
    }

    cout << "Elementos del vector ingresados: ";
    for (int i: datos) {
        cout << i << " ";
    }  
    cout << endl;


    // string concatenacion y recorrido
    string mensaje = "Hola, ";
    mensaje += "mundo!";
    cout << "Mensaje: " << mensaje << endl;

    // recorrer caracter por caracter
    cout << "Caracteres del mensaje: ";
    for (char c : mensaje) {
        cout << c << " ";
    }
    cout << endl;

    // map: clave valor con verificacion
    map<string, int> edades;
    edades["Alice"] = 30;
    edades["Bob"] = 25;

    cout << "Edad de Alice: " << edades["Alice"] << endl;
    for (const auto& par : edades) {
        cout << par.first << " tiene " << par.second << " años." << endl;
    }

    // verificacion de existencia de clave
    string buscado = "Charlie";
    if (edades.find(buscado) != edades.end()) {
        cout << buscado << " encontrado, edad: " << edades[buscado] << endl;
    } else {
        cout << buscado << " no encontrado." << endl;
    }

    // algoritmo ordenar un vector
    vector<int> numerosDesordenados = {5, 3, 8, 1, 4};
    sort(numerosDesordenados.begin(), numerosDesordenados.end());
    cout << "Numeros ordenados: ";
    for (int n : numerosDesordenados) {
        cout << n << " ";
    }

    // ordenados descendentemente usando greater
    sort(numerosDesordenados.begin(), numerosDesordenados.end(), greater<int>());   
    cout << "\nNumeros ordenados descendentemente: ";
    for (int n : numerosDesordenados) {
        cout << n << " ";
    }
    cout << endl;

    return 0;

}