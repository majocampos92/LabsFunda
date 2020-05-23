#include <iostream>
using namespace std;
int main()
{
    int  cantidad;
    string nombre = "";
    double dineroActual, totalRestante, precioCompra, precio; 

    cout<<"Ingrese la cantidad de dinero actual: "<<endl;
    cin>>dineroActual;

    cout<<"Ingrese lo que desea llevar: "<<endl;
    cin>>nombre;

    cout<<"Ingrese el precio: "<<endl;
    cin>>precio;

    cout<<"Ingrese la cantidad que desea comprar del producto: "<<endl;
    cin>>cantidad;

    precioCompra = precio*cantidad;
    totalRestante = dineroActual - precioCompra;
    cout<<"Producto: "<<nombre<<" Precio $ "<<precio<<" Cantidad "<<cantidad<<" Saldo actual $ "<<totalRestante<<endl;

    return 0;
    
}