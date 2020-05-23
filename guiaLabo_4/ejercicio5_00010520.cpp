#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra, primerC, ultimoC;

    cout <<"Ingrese una palabra: "<<endl;
    cin>>palabra;

    primerC = palabra.front();
    ultimoC = palabra.back();
    
    if ( primerC == ultimoC) {
        
        cout<<"Inicia y finaliza con la misma letra"<<endl;

    } else{

        cout<<"No inicia y finaliza con la misma letra"<<endl;
    }

    return 0;
}