#include <iostream>
#include <windows.h>
using namespace std;
double consumo, total1, total2, total3, total4;

int main (){
    SetConsoleOutputCP(CP_UTF8);
    cout <<"Ingrese su consumo:";
    cin >>consumo;
    if (consumo<=10){
        total1 = 2.29 + 0.10;
        cout <<"El total a pagar es:" <<total1<<endl;
    }
    else if (consumo>10 && consumo<=20){
        total2 = (consumo*0.21)+0.10;
          cout <<"El total a pagar es:" <<total2<<endl;
    }
    else if (consumo>20 && consumo<=30){
        total3 = (consumo*0.37)+1.8;
          cout <<"El total a pagar es:" <<total3<<endl;
    }
    else {
        total4 =(consumo*0.76)+3.00;
        cout <<"El total a pagar es:" <<total4<<endl;
    }
    return 0;

}