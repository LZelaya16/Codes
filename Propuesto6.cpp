#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int opc = 0;

    cout << "Bienvenido cafeteria UCA, eliga su comida." << endl;
    cout << "1. Hamburguesa" << endl;
    cout << "2. Pizza" << endl;
    cout << "3. Hot dog" << endl;
    cout << "4. Ensalada" << endl;
    cout << "Ingrese una opcion (1-4): ";
    cin >> opc;

    switch (opc)
    {

    case 1:
        cout << "Hamburguesa - $5.00 " << endl;
        break;
    case 2:
        cout << "Pizza - $4.50 " << endl;
        break;
    case 3:
        cout << "Hot dog - $3.00 " << endl;
        break;
    case 4:
        cout << "Ensalada - $3.50 " << endl;
        break;
    default:
        cout << "Opcion invalida. Por favor ingrese entre 1 y 4." << endl;
        break;
    }

    return 0;
}