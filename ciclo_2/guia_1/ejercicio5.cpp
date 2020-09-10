#include <iostream>
using namespace std;
/**Dada una cadena de caracteres “Puntero”, mostrar en pantalla en la primera línea el valor
en la posición inicial de la cadena, la posición del puntero y la letra “n”. Luego, aumentar
el puntero en 3. Luego, en otra línea imprimir el puntero, la letra “e”, “r” y “o” de la cadena,
usando el puntero.*/

int main(){

    string cadena[7] = {"P","U","N","T","E","R","O"};

    cout<<"El valor de la posicion inicial es: "<<*(cadena+0)<<", La posicion del puntero es: "<<&cadena+0<<" y la letra "<<*(cadena+2)<<endl;
    cout<<"Aumentando el puntero en 3 es: "<<&cadena+3<<endl;
    cout<<*(cadena+4) <<" "<<*(cadena+5)<<" "<<*(cadena+6)<<endl;

}