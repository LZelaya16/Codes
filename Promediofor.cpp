#include <iostream>
#include <windows.h>
using namespace std;
float nota, prom, valor = 0;
string nombre, apellido;
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;
    cout << "Hola" << " " << nombre << " " << apellido;

    for (int i = 1; i <= 5; i++)
    {
        cout << " Ingrese la nota" << i << ": ";
        cin >> valor;
        nota = nota + valor;
    }

    prom = nota / 5;
    if (prom >= 6)
    {
        cout << nombre + " " + apellido << " " << "aprobado, su promedio es: " << prom;
    }
    else
    {
        cout << nombre + " " + apellido << " " << "reprobado, su promedio es: " << prom;
    }
    return 0;
}