// 1. Single responsability principle (SRP)
// cada funcion debe tener una sola responsabilidad
// # include <iostream>
// using namespace std;

// int calcularTotal(int a, int b) {
//     return a + b;
// }

// void mostrarTotal(int total) {
//     cout << "El total es: " << total << endl;
// }

// int main() {
//     int total = calcularTotal(10, 20);
//     mostrarTotal(total);
//     return 0;
// }

// 2. Open/Closed principle (OCP)
// las clases deben estar abiertas a la extension pero cerradas a la modificacion

// # include <iostream>
// using namespace std;

// int cuadrado(int x) {
//     return x * x;
// }

// int doble(int x) {
//     return x*2;
// }

// int aplicaOperacion(int x, int (*operacion)(int)) {
//     return operacion(x);
// }

// int main() {
//     cout << aplicaOperacion(5, cuadrado) << endl; // 25
//     cout << aplicaOperacion(5, doble) << endl; // 10
//     return 0;
// }

// 3. Liskov substitution principle (LSP)
// las clases derivadas deben poder sustituir a las clases base sin alterar el comportamiento del programa

// # include <iostream>
// using namespace std;

// int sumarUno(int x) {return x +1;}
// int restarUno(int x) {return x -1;}

// int aplicar(int valor, int (*operacion)(int)) {
//     return operacion(valor);
// }

// int main(){
//     cout << aplicar(5, sumarUno) << endl; // 6
//     cout << aplicar(5, restarUno) << endl; // 4
// }

// 4. Interface segregation principle (ISP)
// las interfaces deben ser especificas y no forzar a las clases a implementar metodos que no necesitan

// # include <iostream>
// using namespace std;

// int leerEntrada(){
//     int x;
//     cout << "Ingrese un numero: ";
//     cin >> x;   
//     return x;
// }

// bool esPar(int n){
//     return n%2==0;
// }

// void mostrarResultado(bool resultado) {
//     if (resultado) {
//         cout << "El numero es par." << endl;
//     } else {
//         cout << "El numero es impar." << endl;
//     }
// }

// int main() {
//     int numero = leerEntrada();
//     bool resultado = esPar(numero);
//     mostrarResultado(resultado);
//     return 0;
// }   


// 5. Dependency inversion principle (DIP)
// las clases de alto nivel no deben depender de clases de bajo nivel, ambas deben depender de abstracciones

// # include <iostream>
// using namespace std;

// int sumar(int a, int b) {
//     return a + b;
// }

// int multiplicar(int a, int b) {
//     return a * b;
// }  

// int operar(int a, int b, int (*operacion)(int, int)) {
//     return operacion(a, b);
// }

// int main() {
//     cout << "Suma: " << operar(5, 3, sumar) << endl; // 8
//     cout << "Multiplicacion: " << operar(5, 3, multiplicar) << endl; // 15
//     return 0;
// }

// 6. RAII (Resource Acquisition Is Initialization)
// los recursos deben ser adquiridos y liberados automaticamente al crear y destruir objetos    

// #include <fstream>

// using namespace std;

// void guardarDatos() {
//     // Simulamos la apertura de un recurso, como un archivo
//     ofstream archivo("datos.txt");
//     archivo << "texto guardado automaticamente.\n";
// }

// int main(){
//     guardarDatos();
//     // El archivo se cierra automaticamente al salir del bloque
//     // No es necesario llamar a archivo.close(), RAII lo maneja
//     return 0;
// }


// 7. Singleton (version funcional)

#include <iostream>
using namespace std;

int& obtenerContadorGlobal() {
    static int contador = 0; // Variable esttica para mantener el estado
    return contador; // Retorna una referencia al contador
}

int main(){
    obtenerContadorGlobal() ++; // Incrementa el contador
    cout << "Contador: " << obtenerContadorGlobal() << endl; // M
    obtenerContadorGlobal() ++; // Incrementa nuevamente
    cout << "Contador: " << obtenerContadorGlobal() << endl; // Muestra el valor actualizado
    return 0;
}