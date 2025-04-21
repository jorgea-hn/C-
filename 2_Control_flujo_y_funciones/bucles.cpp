#include <iostream>

using namespace std;

int main(){
    cout << "Ciclo for: contar del 1 al 5" << endl;
    for (int i= 1; i <=5; i++ ){
        cout << i  << endl;
    }


    cout << "Ciclo for con continue: contar del 1 al 5 excepto el 3" << endl;
    for (int i= 1; i <=5; i++ ){
        if (i == 3) continue;
        cout << i  << endl;
    }

    cout << "Ciclo for con break: contar del 1 al 5" << endl;
    for (int i= 1; i <=5; i++ ){
        if (i == 4) break;
        cout << i  << endl;
    }
}