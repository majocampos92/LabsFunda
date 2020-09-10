#include <iostream>
using namespace std;
/*Escribir un programa en C++ que permita calcular el valor máximo de una lista de enteros.
El programa le debe pedir al usuario que ingrese la cantidad de valores enteros que va a
tener la lista y luego cada uno de estos valores. Por último, el programa muestra en
pantalla un puntero que apunta al valor máximo.*/

void leerArreglo(int cantidad, int arreglo[] ){

    int i;
    int numero;
    int mayor = 0; 
    int *puntero;
    for ( i = 0; i < cantidad; i++)
    {   
        
        cout<<"Ingrese el numero: "<<endl;
        cin>>numero;
        arreglo[i] = numero;
        if (arreglo[i]> mayor){
            mayor = arreglo[i];
        }
        
    }
    puntero = &mayor;
    cout<<"La cifra maxima es: "<<*puntero<<endl;
}

int main(){

    int cantidad = 0;
    cout<<"Ingrese cuantos valores desea: "<<endl;
    cin>>cantidad;

    int array[cantidad];
    leerArreglo(cantidad, array);


}