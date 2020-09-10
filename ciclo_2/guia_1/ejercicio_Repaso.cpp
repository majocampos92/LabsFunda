#include <iostream>
using namespace std;
/*Digite un programa que administre las ventas quincenales de una empresa
pequena, su programa debera crear y poblar una matriz de 2 filas (una por
cada semana de una quincena) y 5 columnas (una por cada dıa habil de la
semana).
En el main: Debera crear y poblar dicha matriz con datos
suministrados por el usuario, los valores se registraran en unidades
vendidas (5 unidades vendidas el lunes de la primera semana, 8 el
martes, etc.).
Debera crear una funcion que reciba dicha matriz y muestre en
pantalla cual fue la semana en la que se vendieron mas unidades*/
/*void recibirMatriz(double matriz[2][5], double quincena[2][2]){

    double primeraQuincena[2]; 
    double segundaQuincena = 0;

        for (int s = 0; s < 2; s++)
        {
            for (int i = 1; i <= 2; i++)
            {
                primeraQuincena[i] = quincena[i][s];
            }
        }
        
    
        

    

    //cout<<primeraQuincena[0]<<endl;
    cout<<primeraQuincena[1]<<endl;
    cout<<primeraQuincena[2]<<endl;



}*/

int main(){


   float variable = 5.1;

    float ∗puntero = &variable;
cout<<"Modi ficando . . . "<<endl;
*puntero = 20.2 ;
cout<< "Contenido : " <<*puntero<<endl;

/*float ∗∗doble = &puntero;
cout<<"Modi ficando . . . "<<endl;
∗∗doble = 65.3 ;
cout<< "Contenido : " <<∗∗doble<<endl;     */
}
 