#include <iostream>
#include <windows.h>
using namespace std;
float num;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    while (num < 5)
    {
        cout << "Ingrese un numero mayor que 5: ";
        cin >> num;
    }
    cout << "Gracias por participar";
}