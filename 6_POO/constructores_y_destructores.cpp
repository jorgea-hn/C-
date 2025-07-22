# include <iostream>
using namespace std;

class Persona {
public:
    string nombre;

    // Constructor
    Persona(string n){
        nombre = n;
        cout << "Constructor llamado para " << nombre << endl;
    } 

    // destructor
    ~Persona(){
        cout << "Destructor llamado para " << nombre << endl;
    }
};

class ArchivoTemporal {
    public:
    ArchivoTemporal() {
        cout << "Archivo temporal creado." << endl;
    }

    ~ArchivoTemporal() {
        cout << "Archivo temporal destruido." << endl;
    }
};

int main(){
    cout << "Inicio del programa" << endl;
    {
        Persona p1("Juan");
        Persona p2("Maria");
        

        ArchivoTemporal temp;

        cout << "Dentro del bloque de main()" << endl;

    } // terminan los objetos p1 y p2, y el archivo temporal

    cout << "Fin del programa" << endl;
    return 0;
}