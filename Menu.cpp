#include <iostream>
using namespace std;
int precio, descuento, total, contador;
bool flag;
char respuesta;
int main() {

    flag = true;

while (flag == true)
{
    cout<<"\nSistema de precios\n";
    cout <<"\nIngrese el precio:\n";
    cin >>precio;
    descuento = precio*0.20;
    total = precio - descuento;
    contador = contador + total;
    
    cout<< "\nDeseas seguir comprando ? (S/N) \n";
    cin>>respuesta;
    if (respuesta == 'N')
    {
        flag = false;
    }

}
    
    cout <<"El total a pagar es: " <<contador <<endl;
    return 0;

}