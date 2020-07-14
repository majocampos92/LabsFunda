#include <iostream>
using namespace std;
//Manejo de los datos en una funcion struct 
const int longCad = 20;

struct costoPorArticulo{
    char nombreArticulo[longCad + 1];
    int cantidad;
    float precio;
    float costoxArticulo;
};
//función que lee los datos el nombre, la cantidad y el precio unitario de cada artículo y los incorpora al arreglo.
void leerArticulos(int cantArticulos, struct costoPorArticulo arreglo[]){

    for (int i = 0; i < cantArticulos; i++)
    {   
        fflush(stdin); 
        cout<<"Ingresando articulo "<<i+1<<endl;
        cout<<"Ingrese el nombre: "<<endl;
        cin>>arreglo[i].nombreArticulo;
        cout<<"Ingrese la cantidad: "<<endl;
        cin>>arreglo[i].cantidad;
        cout<<"Ingrese el precio: "<<endl;
        cin>>arreglo[i].precio;
    }   
}
//función que calcula el costo por artículo e incorpora este valor en el campo correspondiente de cada artículo en cada casilla del arreglo.
void costoArticulo(int cantArticulos, struct costoPorArticulo arreglo[]){

    for (int i = 0; i < cantArticulos; i++)
    {   
        arreglo[i].costoxArticulo =  (arreglo[i].precio)*(arreglo[i].cantidad); 
    }
}
//función que despliega el contenido del arreglo. Mostrando los cuatro datos de la estructura para cada artículo.
void estructura(int cantArticulos, struct costoPorArticulo arreglo[]){

    cout<<"FACTURA"<<endl;

    for (int i = 0; i < cantArticulos; i++)
    {   
        cout<<i+1<<" Nombre: "<<arreglo[i].nombreArticulo<<", Cant.: "<<arreglo[i].cantidad<<", Precio: $"<<arreglo[i].precio<<
        ", Costo por articulo: $"<<arreglo[i].costoxArticulo<<endl;
    }
}
//función que retorna el costo total de la compra, que es la suma de los costos de cada artículo.
float totalCompra(int cantArticulos, struct costoPorArticulo arreglo[]){

    float compraTotal = 0; 

    for (int i = 0; i < cantArticulos; i++)
    {
        //sumando costoxArticulo, almacenandolo en la variable compraTotal     
       compraTotal += arreglo[i].costoxArticulo ;
    }
    //retornando el valor de compra total
    return compraTotal;
}
/*función main, que solicita la cantidad de artículos a incluir en el arreglo y controla las llamadas a las demás funciones. 
En esta función se declara el arreglo y la variable entera que indica la cantidad de artículos que contendrá.*/
int main()
{   
    int cantArticulos = 0;
    cout<<"Ingrese la cantidad de articulos:"<<endl; 
    cin>>cantArticulos; 
    //declarando el arreglo 
    struct costoPorArticulo arreglo[cantArticulos];
    //llamando a las funciones
    leerArticulos(cantArticulos, arreglo);
    costoArticulo(cantArticulos, arreglo);
    estructura(cantArticulos, arreglo);
    totalCompra(cantArticulos, arreglo);
    cout<<"TOTAL DE LA COMPRA: $"<<totalCompra(cantArticulos, arreglo)<<endl;

    return 0;
}
