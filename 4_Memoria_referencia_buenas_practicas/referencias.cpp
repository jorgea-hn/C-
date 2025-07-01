#include <iostream>
using namespace std;

void incrementar(int& num) {
    num++;
}

void cambiarSigno(int& numero) {
    numero = -numero;
}

int main(){
    int x = 10;
    int& ref = x;
    ref = 20; // Cambia el valor de x a 20
    cout << x << endl; // imprime 20

    int valor = 5;
    incrementar(valor);
    cout << valor << endl; // Imprime 6

    int a = 10;
    cambiarSigno(a); 
    cout << a << endl; // Imprime -10


    return 0;
}   