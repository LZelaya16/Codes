#include <iostream>
using namespace std;

int main()
{
    int opcion;
    float lado, base, altura, largo, ancho, area;
    bool continuar = true;

    while (continuar)
    {
        cout << "===== MENU DE AREAS =====" << endl;
        cout << "1. Area de cuadrado" << endl;
        cout << "2. Area de rectangulo" << endl;
        cout << "3. Area de triangulo" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        if (opcion == 0)
        {
            continuar = false;
            continue;
        }

        switch (opcion)
        {
        case 1:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            area = lado * lado;
            cout << "El area del cuadrado es: " << area << endl;
            break;

        case 2:
            cout << "Ingrese el largo del rectangulo: ";
            cin >> largo;
            cout << "Ingrese el ancho del rectangulo: ";
            cin >> ancho;
            area = largo * ancho;
            cout << "El area del rectangulo es: " << area << endl;
            break;

        case 3:
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            area = (base * altura) / 2;
            cout << "El area del triangulo es: " << area << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
        }
    }

    return 0;
}