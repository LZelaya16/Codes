#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int inicio, fin;
    cout << "Ingrese el numero incial: ";
    cin >> inicio;

    cout << "Ingrese el numero final: ";
    cin >> fin;

    for (int i = inicio; i <= fin; i++)
    {
        if (i % 5 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}