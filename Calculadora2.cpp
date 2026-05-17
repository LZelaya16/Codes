#include <iostream>
using namespace std;

int main() {
    char opc;
    float a, b;

    
    cout << "Bienvenido a la calculadora basica" << endl;
    cout << "a. Suma" << endl;
    cout << "b. Resta" << endl;
    cout << "c. Multiplicacion" << endl;
    cout << "d. Division" << endl;
    cout << "Ingrese una opcion (a-d): ";
    cin >> opc;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    switch (opc) {
        case 'a':
        case 'A':
            cout << "Resultado: " << a + b << endl;
            break;
        case 'b':
        case 'B':
            cout << "Resultado: " << a - b << endl;
            break;
         case 'c':
         case 'C':
            cout << "Resultado: " << a * b << endl;
            break;
        case 'd':
        case 'D':
            if (b == 0) {
                cout << "Error: no se puede dividir entre cero." << endl;
            } else {
                cout << "Resultado: " << a / b << endl;
            }
            break;
        default:
            cout << "Opcion invalida. Por favor ingrese entre a y d." << endl;
            break;
    }

    return 0;
}