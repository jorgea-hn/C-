#include <iostream>

using namespace std;

int main(){
    int matriz[3][3] =  {
        (1,2,3),
        (4,5,6),
        (7,8,9)
    };


    for (int i =0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    matriz[1][2]= 100;

    int suma= 0;
    for (int i =0; i<3; i++){
        for (int j=0; j<3; j++){
            suma += matriz[i][j];
        }
    }
    cout << "Suma total, " << suma <<endl;
    return 0;
}