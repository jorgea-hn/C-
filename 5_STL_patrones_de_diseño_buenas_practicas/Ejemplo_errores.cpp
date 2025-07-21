# include <iostream>
# include <stdexcept>
# include <limits>

using namespace std;


int solicitarNumeroPositivo() {
    int numero;

    cout << "Ingrese un numero positivo: ";
    cin >> numero;

    if (cin.fail()) {
        cin.clear(); // Limpiar el estado de error
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar la entrada incorrecta
        cout << "Entrada invalida. Por favor, intente de nuevo." << endl;
        
        throw invalid_argument("El numero ingresado no es valido.");
    } 

    if(numero < 0) {
        cout << "El numero debe ser positivo." << endl;
        throw out_of_range("El numero debe ser mayor o igual a cero.");
    }

    return numero;
}

int main() {
    try {
        int numero = solicitarNumeroPositivo();
        cout << "Numero ingresado: " << numero << endl;
    } catch (const invalid_argument& e) {
        cerr << "Excepcion de argumento invalido: " << e.what() << endl;
    } catch (const runtime_error& e) {
        cerr << "Excepcion de ejecucion: " << e.what() << endl;
    } catch (const exception& e) {
        cerr << "Ocurrio un error desconocido." << e.what() << endl;
    }

    return 0;
}