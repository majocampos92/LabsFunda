#include <iostream>
using namespace std;
int main()
{
    double num1, num2, num3, total;

    cout <<"Ingrese tres cantidades separadas por un espacio: "<<endl;
    cin>>num1>>num2>>num3;

    total = num1+num2+num3/3;

    cout<<"el promedio de las tres cantidades es: "<<total<<endl;

    return 0;
}