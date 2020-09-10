#include <iostream>
using namespace std;
/* */

int main(){

    int variable = 5.1 ;
    int *puntero = &variable;
    cout<<"Modificando: "<<endl;
    *puntero = 20.2;

    cout<<"contenido "<<*puntero<<endl; 

    int **doble = &puntero;
    cout<<"Modificando: "<<endl;
    **doble = 65;
    cout<<"contenido "<<**doble<<endl; 



}
