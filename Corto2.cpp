#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int opcion;
    float n1, n2, n3, total, division, promedio;
    
    
        cout << "===== BIENVENIDO AL MENU DE PROCESOS =====" << endl;
        cout << "1. Promedio de 3 números" << endl;
        cout << "2. Division de 2 números" << endl;
        cout << "3. Conversion de minutos a segundos" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese el primer valor: ";
            cin >> n1;
            cout << "Ingrese el segundo valor: ";
            cin >> n2;
            cout << "Ingrese el tercer valor: ";
            cin >> n3;
            promedio = (n1 + n2 + n3)/3;
            cout << "El promedio de los tres números es: " << promedio << endl;
            break;

        case 2:
            cout << "Ingrese el primer valor: ";
            cin >> n1;
            cout << "Ingrese el segundo valor: ";
            cin >> n2;
            if (n2==0)
            {
                cout<< "Error, sus números no se pueden dividir";
            }
            else 
            {
                division = n1/n2;
                cout << "El total de su división es: " << division << endl;
            
            }
            break;
            

        case 3:
            cout << "Ingrese los minutos: ";
            cin >> n1;
            total = n1*60;
            cout << "Sus segundos son: " << total << endl;
            break;

        default:
            cout << "Opción no valida, intente de nuevo." << endl;
        }
    

    return 0;
}