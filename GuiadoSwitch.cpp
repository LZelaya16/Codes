#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int dia;

    cout << "Digite un numero de dia (1-7): ";
    cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "Lunes";
        break;
    case 2:
        cout << "Martes";
        break;
    case 3:
        cout << "Miercoles";
        break;
    case 4:
        cout << "Jueves";
        break;
    case 5:
        cout << "Viernes";
        break;
    case 6:
        cout << "Sabado";
        break;
    case 7:
        cout << "Domingo";
        break;
    default:
        cout << "El valor ingresado es invalido";
    }
    return 0;
}