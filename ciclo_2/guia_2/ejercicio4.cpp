#include <iostream>
using namespace std;

int raiz(int);

int main() {

    int num;

    cout << "Ingrese un numero (NO NEGATIVO): ";
    cin >> num;

    raiz(num);

}

int raiz(int num) {

    int aux, suma = 0;

    if (num < 10)
    {
        return num;
        
    }else {
        
        while (num > 0)
        {
            suma = suma + num%10;
            num = num/10;
        }
        cout << "La suma es: "<<suma<< endl;
        return raiz(suma);
    }
}