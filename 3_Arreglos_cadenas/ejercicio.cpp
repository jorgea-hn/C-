#include <iostream>

using namespace std;

void duplicarElementos(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}


int main(){
    int numeros[] = {1, 2, 3, 4, 5};
    duplicarElementos(numeros, 5);
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " "; // Imprime: 2 4 6 8 10
    }   
    return 0;
} 

void mostrarLetras(const char* str) {
    while (*str != '\0') {
        cout << *str << " ";
        str++;
    }
}