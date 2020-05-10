#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1, x2, a, b, c;

    cout<<"Ingrese los tres valores separados por un espacio, a, b y c: "<<endl;
    cin>>a>>b>>c;
    
    x1 = (-b + (sqrt((pow(b,2))-(4*a*c))))/(2*a);
    x2 = (-b - (sqrt((pow(b,2))-(4*a*c))))/(2*a);

    cout<<"x1= "<<x1<<" x2= "<<x2<<endl;
    
    return 0;
}