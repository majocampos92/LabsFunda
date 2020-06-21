#include <iostream>
using namespace std;

int repeticionNumero(int arreglo[], int r, int numero) {

    int repeticion = 0;
    for (int i = 0; i < r; i++) {
        if (arreglo[i] == numero) {
            repeticion++;
        }
    }
    return repeticion;
}

int main() {
    
    int arreglo[25] = {1,1,1,1,1,1,2,2,2,3,3,4,5,6,3,3,2,1,3,4,4,4,4,5,6};
    int r;
    cout<<"Ingrese el numero del 1 al 6 : "<<endl;
    cin>>r;
    if ( r >=1 && r <= 6)
    {
        cout<<"El numero de repeticiones del numero "<<r<<" es: "<<repeticionNumero(arreglo,25,r)<<endl;
    }
    else {
        cout<<"Numero fuera del intervalo"<<endl;
    }
    
}