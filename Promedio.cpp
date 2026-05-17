#include <iostream>
#include <windows.h>
using namespace std;
float n1, n2, n3, n4, n5, promedio;
 int main () {
    SetConsoleOutputCP(CP_UTF8);
    
    cout <<"Ingrese nota 1: ";
    cin >>n1;
    cout <<"Ingrese nota 2: ";
    cin >>n2;
    cout <<"Ingrese nota 3: ";
    cin >>n3;
    cout <<"Ingrese nota 4: ";
    cin >>n4;
    cout <<"Ingrese nota 5: ";
    cin >>n5;
    promedio = (n1+n2+n3+n4+n5)/5;
    if (promedio >= 6){
        cout <<"Aprobado, su promedio es: " <<promedio;
    }
    else {
        cout<<"Reprobado, su promedio es: " <<promedio;
    }
    return 0;
}