#include <iostream>
#include <string>
using namespace std;

struct Estudiantes{
    string nombre;
    string apellido;
    float* notas;
};
struct Estudiantes estudiante;

void ingresarEstudiante(int, Estudiantes[]);
float *ingresarNotas(int);
float calcularPromedio(int, float[]);
int encontrarMayor(int, float[]);
void devolverEstudiante(int, Estudiantes[]);

int main(){
    int n, cn; 
    cout<<"Ingrese la cantidad de estudiantes: "<<endl; 
    cin>>n;
    cout<<"Ingrese la cantidad de notas: "<<endl; 
    cin>>cn;

    struct Estudiantes estudiante[n];

    ingresarEstudiante(n, estudiante);

    for (int i = 0; i < n; i++)
    {
        estudiante[i].notas[cn];
        estudiante[i].notas = ingresarNotas(cn);
    }

    float promedio[n];
    for (int i = 0; i < n; i++)
    {
        promedio[i] = calcularPromedio(cn, estudiante[i].notas);
    }
    int pos; 
    pos = encontrarMayor(n, promedio);
    devolverEstudiante(pos, estudiante);
    
    return 0; 
}

void ingresarEstudiante(int n, Estudiantes * estudiante){

    for (int i = 0; i < n ; i++)
    {
        cout<<"Ingrese el nombre del alumno "<<i+1<<" : "<<endl;
        cin>> estudiante[i].nombre;
        cout<<"Ingrese el apellido del alumno "<<i+1<<" : "<<endl;
        cin>> estudiante[i].apellido;

    }  

}

float *ingresarNotas(int cn){

    float *notas =  new float[cn];

    for (int i = 0; i < cn; i++)
    {
        cout<<"Nota " <<i+1<< ": "<<endl;
        cin>>notas[i];
    }

    return notas; 
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

int encontrarMayor(int cn, float *promedio){
    float mayor = 0;
    int posicion;

    for (int i = 0; i < cn; i++)
    {
        if (promedio[i] > mayor)
        {
            mayor = promedio[i];
            posicion = i;
        }
        
    }
    return posicion;
}

void devolverEstudiante(int pos, Estudiantes *estudiante){
    cout<<"El estudiante con mejor promedio es: "<<estudiante[pos].nombre<<endl;
}