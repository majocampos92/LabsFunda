#include <iostream>
using namespace std;

void recibiendoCaracter(char *p){
    char arreglo[12] = {'p','r','o','g','r','a','m','a','c','i','o','n'};
    int repeticion = 0;
    for (int i = 0; i < 13; i++) { 
    
    if (*p == arreglo[i])
    {
        repeticion++;   
    }
    }
    if(repeticion == 0) 
    {
        cout<<"El caracter no se encuentra en la palabra"<<endl;

    } else {
        cout<<"El caracter se repite: "<<repeticion<<endl;
    }
}

int main(){
    char caracter;
    cout<<"Ingrese un caracter: "<<endl;
    cin>>caracter;
    char *p=&caracter;

    recibiendoCaracter(p);
    
}
