#include <iostream>
using namespace std;
int precio, impuesto, total=0;

int main() {
    cout <<"Ingrese el precio del producto:";
    cin >>precio;
    cout <<"iva 0.13";
    cin >>impuesto;
    impuesto = precio*0.13;
    total = impuesto;
    cout <<"El total a pagar es:" <<total<<endl;
    return 0;

}