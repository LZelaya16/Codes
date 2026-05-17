#include <iostream>
#include <windows.h>
using namespace std;
int n1, n2, division=0;

int main (){
    SetConsoleOutputCP(CP_UTF8);
    cout <<"Ingrese el primer número:";
    cin >>n1;
    cout <<"Ingrese el segundo número:";
    cin >>n2;

    if (n2==0){
        cout <<"Error no se puede";
    }
    else {
        division= n1/n2;
    }

    return 0;

}