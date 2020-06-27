#include <iostream>
using namespace std;
//declarando una variable global
char pTexto[100];

void textoMurcielago(){
    // para identificar cada letra 
    for (int i = 0; i <= 100; i++) {
        switch (pTexto[i]) {
            //igualando las letras de murcielago a la pocision que ocupa el numero en la tabla ASCII
            case 'm':
            pTexto[i]=48;
            break;

            case 'u':
            pTexto[i]=49;
            break;

            case 'r':
            pTexto[i]=50;
            break;

            case 'c':
            pTexto[i]=51;
            break;

            case 'i':
            pTexto[i]=52;
            break;

            case 'e':
            pTexto[i]=53;
            break;

            case 'l':
            pTexto[i]=54;
            break;

            case 'a':
            pTexto[i]=55;
            break;

            case 'g':
            pTexto[i]=56;
            break;

            case 'o':
            pTexto[i]=57;
            break;
            //de no encontrarse la letra en los case se tomara como un default, quedara la misma letra, no un numero
            default:
            pTexto[i]=pTexto[i];
        }
    }
        
    cout<<"El texto o palabra en clave murcielago es: "<<pTexto<<endl;

} 

int main () {
    cout<<"Ingrese la palabra o texto a convertir: "<<endl;
    cin.getline(pTexto, 100);
    textoMurcielago();
}