#include <iostream>
using namespace std;
/*Dado un valor entero por el usuario, almacenarlo en una variable. Por último, mostrar el
mismo valor ocupando un puntero.*/
int main(){
    int entero, *variable;

    cout<<"Ingrese el valor: "<<endl;
    cin>>entero;

    variable = &entero;

    cout<<"El valor es: "<<*variable<<endl;
}