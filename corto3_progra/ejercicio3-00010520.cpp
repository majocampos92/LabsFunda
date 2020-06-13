#include <iostream>
using namespace std;

int anioBisiesto(int anio){
    if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0){//condicion para que un año sea bisiesto 
        cout<<"Si es bisiesto "<<endl;

    }else{ 

        cout<<"No es bisiesto "<<endl;

    }  
}

int main()
{    
    int anio = 0;
    cout<<"Ingrese el a"<<(char)164<<"o: "<<endl; //pide ingesar el año
    cin>>anio; //guarda el año
    anioBisiesto(anio); //llamado de la funcion a ejecutar

    return 0;
    
}