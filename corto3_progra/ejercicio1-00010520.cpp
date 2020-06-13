#include <iostream>
using namespace std;
int empleadosSalario(int ce){
    //declarando variables tipo double
    double horas;
    double horasExtra;
    double salario;
    double salarioReal;

    for (int i = 1; i <= ce; i++){ //for que suma la cantidad de empleados a los que vas ingresando los datos

        cout<<"Ingrese las horas: "<<endl; //pide horas normales trabajadas
        cin>>horas;//guarda horas

        cout<<"Ingrese las horas extras: "<<endl;//pide horas extras
        cin>>horasExtra;//guarda horasExtras

        double salarioHoraNormal = horas*1.75; //multiplica las horas por lo que valen y lo guarda en variable salarioHoraNormal de tipo double
        double salarioHorasExtra = horasExtra*2.50; //multica las horasExtras por lo que valen y lo guarda en variable salarioHorasExtras de tipo double
        double salarioTotal = salarioHoraNormal+salarioHorasExtra; //Suma las dos variables de arriba y las guarda en una llamada salarioTotal de tipo double
        salario = salarioTotal; //variable salario es igual a salarioTotal
        double seguroSocial = salarioTotal*0.04; //guarda en una variable el valor del seguroSocial que es el 4% del salario
        double AFP = salarioTotal*0.0625; //gurda en una variable el valor del AFP que es el 6.25 % de su salario
        double renta = 0;

        if (salarioTotal>500) //el ejercicio dice que si salario es mayor a 500 se cobra un 1% de renta de su salario
        {
            renta = salarioTotal * 0.1;
        }

        salarioReal = salarioTotal - (seguroSocial + AFP + renta); //salarioReal es igual al salarioTotal menos la suma de los descuentos
    
        cout<<"El empleado "<<i<<" tiene un salario total de $"<<salario<<" y un salario real de $"<<salarioReal<<endl;//mensaje con salario normal y salario con descuentos
    }

    cout<<"FIN"<<endl;
    
}

int main()
{
    int ce = 0; //declarando la variable para cantidad de empleados, tipo entero
    cout<<"Ingrese la cantidad de empleados: "<<endl; //pide ingresar la cantidad de empleados
    cin>>ce; //gurda cantidad de empleados
    empleadosSalario(ce); //llamado de la funcion
    
    return 0;
    
}