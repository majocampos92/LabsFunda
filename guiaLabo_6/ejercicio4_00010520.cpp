#include <iostream>
using namespace std;

void leerArreglo(int cantidad, int arreglo[] ){

    for (int i = 0; i < cantidad; i++)
    {   
        int numero;
        cout<<"Ingrese el numero: "<<endl;
        cin>>numero;
        arreglo[i] = numero;
    }

}
void sumaArreglo(int arreglo1[], int arreglo2[], int arreglo3[], int cantidad ){

    for (int i = 0; i < cantidad; i++)
    {
        arreglo3[i] = arreglo1[i]+arreglo2[i];
    }
    
}
void muestraResultado(int arreglo[], int cantidad){
    
    for (int i = 0; i < cantidad ; i++)
    {
        cout<<"los resultados en la posicion "<<i<<" son: "<<arreglo[i]<<endl;
    }

}

int main() {

    int length;
    cout<<"Cantidad de datos: "<<endl;
    cin>>length;
    int arreglo1[length];
    int arreglo2[length];
    int arreglo3[length];
    cout<<"ESTAS INGRESANDO LOS VALORES DEL PRIMER ARREGLO "<<endl;
    leerArreglo(length, arreglo1);
    cout<<"ESTAS INGRESANDO LOS VALORES DEL SEGUNDO ARREGLO "<<endl;
    leerArreglo(length, arreglo2);
    sumaArreglo(arreglo1, arreglo2,arreglo3,length);
    muestraResultado(arreglo3,length);

}