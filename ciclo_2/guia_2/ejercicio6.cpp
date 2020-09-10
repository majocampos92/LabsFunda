#include <iostream>
using namespace std;

int sumandoCantidades(int n){

    if(n == 0){

        return 0;

    }else{

        return n+sumandoCantidades(n-1);
        
    }
}

int main(){

    int n;
    cout<<"Ingresar la cantidad de numeros: "<<endl;
    cin>>n;
    sumandoCantidades(n);
    cout<<sumandoCantidades(n)<<endl;
}