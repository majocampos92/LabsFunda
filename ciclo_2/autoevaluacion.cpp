#include <iostream>
using namespace std;

int main()
{
    string palabraClave, nombreUsuario;
    cout<<"BIENVENIDO INICIO DE SESION REMOTO "<<endl; 
    cout<<"Nombre de usuario: "<<endl; 
    cin>>nombreUsuario;

    for (int i = 1; i <= 3; i++){
        
        cout<<"Intento "<<i<<" ingrese la clave: "<<endl; 
        cin>>palabraClave;

        if (palabraClave == "contrasena")
        {
            cout<<"Exito!"<<endl;
            break;

        }else if(i==3 && palabraClave != "contrasena"){
            
            cout<<"ACCESO DENEGADO!"<<endl; 
            break;
        }   
    }
    return 0;
}