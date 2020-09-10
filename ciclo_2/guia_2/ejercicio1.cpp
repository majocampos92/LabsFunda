#include <iostream>
#include <string>
using namespace std;

struct Estudiantes{
    string nombre;
    string apellido;
    string estado; 
    float notas[];
};
struct Estudiantes estudiante;

void ingresarEstudiante();
void ingresarNotas(int, float[]);
float calcularPromedio(int, float[]);
string verificarPromedio(float);

int main(){
    int n; 
    ingresarEstudiante();
    cout<<"Ingrese la cantidad de notas: "<<endl;
    cin>>n; 
    estudiante.notas[n];
    ingresarNotas(n, estudiante.notas);
    float promedio; 
    promedio = calcularPromedio(n, estudiante.notas);
    estudiante.estado = verificarPromedio(calcularPromedio(n, estudiante.notas));

}

void ingresarEstudiante(){

    cout<<"Ingrese el nombre del estudiante"<<endl;
    cin>>estudiante.nombre;
    cout<<"Ingrese el apellido del estudiante"<<endl;
    cin>>estudiante.apellido;
    estudiante.estado = "Indefinido";

}

void ingresarNotas(int n, float *notas){
    
    cout<<"Ingrese las notas del estudiante: "<<endl;
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Nota "<<i<<endl; 
        cin>>estudiante.notas[i];
    }  
}

float calcularPromedio(int n, float *notas){

    float suma = 0, promedio = 0;

    for (int i = 0; i < n; i++)
    {
        suma += notas[i];
    }
    
    promedio = suma/n;

    return promedio; 

}

string verificarPromedio(float promedio){

    if (promedio >= 0)
    {
        cout<<"A"<<endl;
    }else
    {
        cout<<"R"<<endl;
    }
    
}
