#include <iostream>

using namespace std;

// funcion definida antes del main
void saludar(){
    cout << "Hola desde una funcion fuera del main" << endl;
}

// declaracion de funcion antes del main
void imprimirMensaje();

// funcion con parametros
int suma(int a, int b) {
    return a + b;
}

int main(){

    saludar();
    saludar();

    imprimirMensaje();

    

    int resultado = suma(3,5);
    cout << resultado << endl;
    
    return 0;
}

void imprimirMensaje(){
    cout <<"Mensaje desde una funcion declarada" << endl;
}