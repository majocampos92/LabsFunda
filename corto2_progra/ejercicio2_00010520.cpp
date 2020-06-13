#include <iostream>
using namespace std;

int main() {

    int pais;
    double iva, cantidad, total;

    cout <<"1) El Salvador"<<endl;
    cout <<"2) Guatemala"<<endl;
    cout <<"3) Honduras"<<endl;
    cout <<"4) Espana"<<endl;
    cout <<"Ingrese el numero del pais: "<<endl;
    cin>>pais;
    cout <<"Ingrese la cantidad de dinero: "<<endl;
    cin>>cantidad;

    if (pais ==1) {

        iva=cantidad*0.13;
        total=iva+cantidad;
        cout<<"El Salvador"<<endl;
        cout<<"IVA: $ "<<iva<<endl;
        cout<<"Total a pagar: $ "<<total<<endl;

    } else if(pais ==2) {
        
        iva=cantidad*0.9;
        total=iva+cantidad;
        cout<<"Guatemala"<<endl;
        cout<<"IVA: $ "<<iva<<endl;
        cout<<"Total a pagar: $ "<<total<<endl;

    } else if (pais ==3) {

        iva=cantidad*0.15;
        total=iva+cantidad;
        cout<<"Honduras"<<endl;
        cout<<"IVA: $ "<<iva<<endl;
        cout<<"Total a pagar: $ "<<total<<endl;

    }  else if (pais ==4 ){

        iva=cantidad*0.20;
        total=iva+cantidad;
        cout<<"Espana"<<endl;
        cout<<"IVA: $ "<<iva<<endl;
        cout<<"Total a pagar: $ "<<total<<endl;

    } else {

       cout<<"Numero no valido"<<endl; 
    }
    return 0;
} 
