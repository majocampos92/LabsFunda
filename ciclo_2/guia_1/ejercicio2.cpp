#include <iostream>
using namespace std;
/*Escribir un programa en C++ que reciba dos valores enteros y los almacene en dos
variables. Crear dos punteros, asignarlos a las variables y por medio de éstos, mostrar los
valores de las variables y las direcciones*/
int main(){

    int valor1, valor2, *variable1, *variable2;

    cout<<"Ingrese el valor 1: "<<endl;
    cin>>valor1;
    cout<<"Ingrese el valor 2: "<<endl;
    cin>>valor2;

    variable1 = &valor1;
    variable2 = &valor2;

    cout<<"El valor 1 es: "<<*variable1<<endl;
    cout<<"El valor 2 es: "<<*variable2<<endl;
    cout<<"la direccion 1 es: "<<variable1<<endl;
    cout<<"la direccion 2 es: "<<variable2<<endl;



}