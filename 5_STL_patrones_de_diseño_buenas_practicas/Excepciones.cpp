# include <iostream>
# include <vector>
# include <stdexcept>

using namespace std;

int main() {

    // Ejemplo de excepcion basica

    try {
        int a = 5;
        int b = 0;

        // verificar si b es cero antes de dividir
        if (b == 0) {
            //Lanzar una excepcion si b es cero
            throw runtime_error("Division por cero no permitida");
        }

        // Esta linea no se ejecutara si se lanza una excepcion
        cout << "Resultado: " << a / b << endl;
    }catch(const char* msg){
        // Capturar excepcion de tipo const char*
        cout << "Error: " << msg << endl;
    }


    // Ejemplo excepcion estandar: acceso fuera de rango
    try{
        vector<int> numeros(3);
        cout << "Elementos en posicion 5: " << numeros.at(5) << endl;
        // Intentar acceder a un indice fuera de rango
        cout << "Elemento en el indice 10: " << numeros.at(10) << endl;
    }catch( const out_of_range& e){
        // Capturar excepcion de tipo out_of_range
        cout << "Excepcion: " << e.what() << endl;
    }

    // Ejemplo excepcion personalizada usando std:: runtime_error
    try {
        throw runtime_error("Error personalizado: Operacion no valida");
    } catch (const runtime_error& e) {
        // Capturar excepcion de tipo runtime_error
        cout << "Excepcion personalizada: " << e.what() << endl;
    }   

    return 0;
}