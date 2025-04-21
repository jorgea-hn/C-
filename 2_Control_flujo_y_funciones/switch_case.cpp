#include <iostream>

using namespace std;

int main(){
    int opcion = 2;
    switch (opcion)
    {
    case 1:
        cout << "Seleccionaste la opcion 1" << endl;
        break;
    case 2:
        cout << "Seleccionaste la opcion 2" << endl;
        break;
    case 3:
        cout << "Seleccionaste la opcion 3" << endl;
        break;
    
    default:
    cout << "Opcion no valida" << endl;
        break;
    }
}