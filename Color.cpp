#include <iostream>
#include <windows.h>
using namespace std;
char letra;

int main (){
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Ingrese una letra ya sea R, Y, B, W, K, C, G: ";
    cin>>letra;
    switch(letra) {
        case 'R':
        cout<<"Rojo";
        break;
        case 'Y':
        cout<<"Amarillo";
        break;
         case 'B':
        cout<<"Azul";
        break;
         case 'W':
        cout<<"Blanco";
        break;
         case 'K':
        cout<<"Negro";
        break;
         case 'C':
        cout<<"Cian";
        break;
         case 'G':
        cout<<"Verde";
        break;
        default:
            cout<<"La letra ingresada es invalido";
    }
    return 0;

}