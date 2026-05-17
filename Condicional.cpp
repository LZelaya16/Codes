#include <iostream>
#include <windows.h>
using namespace std;
int n=0;

 int main () {
    SetConsoleOutputCP(CP_UTF8);
    cout <<"Ingrese el numero a evaluar:";
    cin >>n;
    if (n > 10){
        cout <<"El numero ingresado es mayor a 10 ";
    }
    return 0;
}