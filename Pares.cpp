#include <iostream>
#include <windows.h>
using namespace std;
int n1;

 int main () {
    SetConsoleOutputCP(CP_UTF8);
    cout <<"Ingrese un numero:";
    cin >>n1;
    
    if (n1%2==0){
        cout <<"El numero es par";
    }
    else {
        cout <<"El numero es impar";
    }
    return 0;
}