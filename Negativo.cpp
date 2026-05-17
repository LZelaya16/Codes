#include <iostream>
#include <windows.h>
using namespace std;
int n=0;

int main (){
    SetConsoleOutputCP(CP_UTF8);
    cout <<"Ingrese un numero:";
    cin >>n;
    if (n==0){
        cout <<"El numero ingresado es cero";
    }
    else if (n<0){
        cout <<"El numero es negativo";
    }
    else {
        cout <<"El numero es positivo";
    }
    return 0;

}
