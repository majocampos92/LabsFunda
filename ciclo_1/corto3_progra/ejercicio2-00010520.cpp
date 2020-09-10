#include <iostream>
using namespace std;

void corto3(){

    int numero, numeroMagico; //declarando las variables tipo entero
    
    numeroMagico = 1 + rand() % (101 - 1); //random para el numero magico
    
    for(int i = 5; i >= 1; i-- && numero>0 && numero<=100){ //for que resta los intentos y valida que esten en un rango entre 0 y 100
        
        cout<<"Te quedan "<<i<<" intentos"<<endl; //muestra cuantos intentos quedan
        
        cout<<"Ingrese un numero: "<<endl; //pide ingresar el numero 
        cin>>numero; //guarda el numero
        
        if(numero>0 && numero<=100){ //valida que el numero este entre 1 y 100
            if (numero==numeroMagico){ //si el numero ingresado es igual al numero magico

                cout<<"  FELICIDADES, ADIVINASTE EL NUMERO MAGICO!!  "<<endl; //ganaste
                break;//cierra el ciclo

            }else if(numero<numeroMagico){ //si el numero ingresado es menor a numero magico

                cout<<"PISTA: El numero que ingreso fue menor al numero correcto"<<endl; //muestra pista

            }else{ //de no se ninguna de las anteriores signica que el numero es mayor

                cout<<"PISTA: El numero que ingreso fue mayor al numero correcto"<<endl; //muestra pista

            }   
        }else{ //sino el numero ingresado es menor a 1 o mayor a 100

            cout<<"ERROR NUMERO FUERA DEL INTERVALO"<<endl;
            break;//cierra el ciclo

        }
    }     

    cout<<"NUMERO MAGICO: "<<numeroMagico<<endl; //mensaje que muestra el numero magico

}


int main()
{   
    int opcion=0;
        do{ 
            cout<<"JUEGO NUMERO MAGICO"<<endl;
            cout <<"Opcion 1: JUGAR "<<endl;
            cout <<"Opcion 2: SALIR"<<endl;
            cin>>opcion;

            switch(opcion){
                case 1: corto3(); //llamado de la funcion que se ejecutara
                break; //cierra el ciclo
            }

        }while(opcion!=2); //si la opcion es dos o diferente de dos se sale

        cout << "GRACIAS"<< endl;
        cout << endl;

    return 0;
}