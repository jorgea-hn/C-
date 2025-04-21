#include <iostream>

using namespace std;

int main(){

    cout << "Ciclo while: contar del 1 al 5" << endl;
    int j = 1;
    while (j<=5){
        cout << j << endl;
        j++;
    }

    cout << "Ciclo while con break: contar del 1 al 5" << endl;
    int k = 1;
    while (k<=5){
        if (k==3) break;
        cout << k << endl;
        k++;
    }

    cout << "Ciclo do while: contar del 1 al 5" << endl;
    int x = 1;
    do{
        cout << x << endl;
        x++;
    }
    while (x<=5);
    
}