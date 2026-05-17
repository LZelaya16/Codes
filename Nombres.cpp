#include <iostream>
#include <windows.h>
using namespace std;
float nota, prom, valor = 0;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
     
    string nombre, apellido;
    cout<<"Ingrese su nombre: ";
    cin>>nombre;
    cout<<"Ingrese su apellido: ";
    cin>>apellido;
    cout<<"Hola " <<nombre << " " <<apellido;
    

    return 0;
}