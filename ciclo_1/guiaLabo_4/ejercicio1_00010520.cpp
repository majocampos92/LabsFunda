#include <iostream>
using namespace std;

int main() {
    int D, d, r;

    cout <<"Ingrese el divisor y el dividiendo seguidos de un espacio: "<<endl;
    cin>>D>>d;

    r=D%d;

    if ((d<D) && (r==0)) {
        
        cout<<"Es divisible "<<endl;

    }else{

        cout<<"No es divisible "<<endl;
    }

    return 0;
}