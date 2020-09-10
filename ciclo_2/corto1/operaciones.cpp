#include <iostream>
using namespace std;
/**void nombre(int operador1, int operador2, int *resultado)*/
void suma(int operador1, int operador2, int *resultado){

    *resultado = operador1+operador2;
    cout<<"El resultado de la suma es: "<<*resultado<<endl;

}
void resta(int operador1, int operador2, int *resultado){

    *resultado = operador1-operador2;
    cout<<"El resultado de la resta es: "<<*resultado<<endl;


}
void multiplicacion(int operador1, int operador2, int *resultado){

    *resultado = operador1*operador2;
    cout<<"El resultado de la multiplicacion es: "<<*resultado<<endl;


}
void division(int operador1, int operador2, int *resultado){

    
    if(operador2==0){
        cout<<"No se puede realizar"<<endl;
    }else{
        *resultado = operador1/operador2;
        cout<<"El resultado de la division es: "<<*resultado<<endl;
    }

}

int main(){
    int operador1, operador2, resultado;
    int *p=&resultado;
    cout<<"Ingrese el valor uno: "<<endl;
    cin>>operador1;
    cout<<"Ingrese el valor dos: "<<endl;
    cin>>operador2;

    suma(operador1, operador2, p);
    resta(operador1, operador2, p);
    multiplicacion(operador1, operador2, p);
    division(operador1, operador2, p);
}