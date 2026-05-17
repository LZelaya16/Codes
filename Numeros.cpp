#include <iostream>
#include <windows.h>
using namespace std;
int n1,n2;

 int main () {
    SetConsoleOutputCP(CP_UTF8);
    cout <<"Ingrese el valor de A:";
    cin >>n1;
    cout <<"Ingrese el valor de B:";
    cin >>n2;

    if (n1 == n2){
        cout <<"A y B son iguales";
    }
    else {
        cout <<"A y B no son iguales";
    }
    return 0;
}