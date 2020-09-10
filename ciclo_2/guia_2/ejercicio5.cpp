#include <iostream>
#include <cmath>

using namespace std;

    int mcd(int mayor, int menor){
    
        if(menor==0){

            return mayor;

        }else {

            mcd(menor,mayor%menor);
        }

    }


int main(){

    int mayor = 0, menor = 0;
    
    cout <<"Ingrese el primer numero: "<<endl;
    cin>>mayor;
    cout <<"Ingrese el segundo numero: "<<endl;
    cin>>menor;
    cout << "MCD (euclides): " << mcd(mayor, menor) << endl;

}