#include <iostream>
using namespace std; 

void llenarcantidad(int *array, int n){

    if (n == 0 )
    {
        return;

    }else{

        cout<<"Ingrese el numero: "<<endl;
        cin>>*array;
        array++;
        llenarcantidad(array, n-1); 
    }
    
}

void mostrarArray(int *array, int n){

    for (int i = 0; i < n; i++)
    {
        cout << *array << " ";
        array++;
    }

}

int main(){

    int n;
    cout<<"Ingrese la cantidad: "<<endl;
    cin>>n;

    int array[n];
    int *p = array;

    llenarcantidad(p, n);
    cout<<"Mostrando el arreglo..."<<endl;
    mostrarArray(p, n);
    

}