#include <iostream>

using namespace std;


int main(){
    int numeros[5] = {10,20,30,40,50};
    cout << numeros [0] << endl;

    numeros[2] = 100;

    int edades[3];
    edades[0] = 18;
    edades[1] = 25;
    edades[2] = 30;

    for (int i = 0; i<5; i++){
        cout << "Elemento " << i << ": " << numeros[i] << endl;
    }

    char vocales[5] = {'a','e','i','o','u'};
    bool respuestas[3] = {true,true, false};

    return 0;
}