#include <iostream>
using namespace std;

int main() {

    int color;

    cout <<"1) Amarillo"<<endl;
    cout <<"2) Negro"<<endl;
    cout <<"3) Rojo"<<endl;
    cout <<"4) Anaranajado"<<endl;
    cout <<"5) Azul"<<endl;
    cout <<"Ingrese el numero del color: "<<endl;
    cin>>color;

    if (color ==1) 
    {
        cout<<"El color es amarillo gano $5";

    } else if(color ==2) {
        
        cout<<"El color es negro gano $10";

    } else if (color ==3) {

        cout<<"El color es rojo gano $15";

    } else if (color ==4)
    {
        cout<<"El color es anaranjado gano $20";

    } else if (color ==5) {

        cout<<"El color es azul gano $25";

    } else {

        cout<<"Numero no valido";
    }
    return 0;
}    

  /*  switch (color)
    {
        case 1:

            cout<<"El color es amarillo gano $10";

            break;

        case 2: 
        
            cout<<"El color es negro gano $15";

            break; 
        case 3: 
        
            cout<<"El color es rojo gano $20";

            break; 
        case 4: 
        
            cout<<"El color es anaranjado gano $25";

            break; 
        case 5: 
        
            cout<<"El color es azul gano $30";

            break; 
        default:

            cout<<"Opcion no valida";

        break;
    }*/

    