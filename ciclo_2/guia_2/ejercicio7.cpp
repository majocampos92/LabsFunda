#include <iostream>
#include <cmath>  
using namespace std;

float raiz(int, float, int);

int main() {
    int n;
    float r;

    cout << "Ingrese el numero al cual se le quiere calcular la raiz: "<<endl;
    cin >> n;

    cout << "Ingrese el valor semilla: "<<endl;
    cin >> r;

    int cont = 0;

    cout << raiz(n, r, cont) << endl;
}

float raiz(int n, float r, int cont) {

    cont++;

    cout<<"Ejecucion #"<<cont<< endl;

    float a = r;
    r = ((n/r)+r)/2;

    cout<<r<<" - "<<a<<endl;

    if (abs(r-a) < 0.01)
    {
        return r;

    }else {

        return raiz(n, r, cont);
    }  
}