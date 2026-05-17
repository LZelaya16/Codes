#include <iostream>
#include <windows.h>
using namespace std;
char opc, a, b;

 main() {
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Bienvenido a la calculadora básica"<<endl<<"Ingrese a para suma"<<endl<<"Ingrese b para resta"<<endl<<"Ingrese c para multiplicacion"<<endl<<"Ingrese d para division";
    cout<<"Ingrese una letra de a hasta d:";
    cin>>opc;

    switch(opc) {
        case 'a':
        cout<<"suma";
        break;
        case 'b':
        cout<<"resta";
        break;
         case 'c':
        cout<<"multiplicacion";
        break;
         case 'd':
        cout<<"division";
        break;
        default:
            cout<<"El valor ingresado es invalido";
     }
     return 0;
}

