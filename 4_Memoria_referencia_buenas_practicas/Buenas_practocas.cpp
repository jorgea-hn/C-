#include <iostream>
using namespace std;

// Buenas practicas

// Inicializa tus punteros. Si no los vas a usar aun asigna nullptr.
// siempre libera la memoria que has reservado con delete o delete[].
// despues de liberar, asigna el puntero o nullptr para evitar accesos accidentales a memoria liberada.
// Nunca uses memoria despues de haberla liberado
// Si una funcion recibe un puntero, valida que no sea nullptr antes de usarla
// Si usas c++ moderno, considera los punteros inteligentes como std::unique_ptr o std::shared_ptr para manejar la memoria de manera automatica y evitar fugas de memoria ya que liberan la memoria automaticamente cuando ya no se necesiten.

void liberarMemoria(int*& ptr) {
    delete[] ptr;
    ptr = nullptr; // Asignamos nullptr para evitar accesos accidentales a memoria liberada 
}

int main(){
    int* datos = new int[5]; // Reservamos memoria para un arreglo dinámico
    for (int i = 0; i < 5; ++i) {
        datos[i] = i + 1 ;
    }

    cout << "Primer elemento: " << datos[0] << endl;

    if (datos != nullptr) {
        cout << "Segundo elemento: " << datos[1] << endl;
    }

    liberarMemoria(datos); // Liberamos la memoria al final

    if (datos == nullptr) {
        cout << "Memoria liberada correctamente." << endl;
    } 
    
    return 0;
}   