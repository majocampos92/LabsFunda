#include <iostream>
using namespace std;

//funcion donde se verifica si el alumno aprobo o reprobo
void promedio(int cantidadAlumnos, double notasAlumnos[][5]) {
    
    for(int i = 1; i <= cantidadAlumnos; i++) {
        //declarando variables
        double promedioNotas = 0;
        
        for(int a = 1; a <= 5; a++) { //recorre 5 veces el ciclo
            
            promedioNotas += notasAlumnos[i][a]*0.20; //la variable promedio se llena con la suma del arreglo multiplicado por el porcentaje
        }
        if(promedioNotas >= 6) { //si el promedio es arriba de 6 o 6 el alumno aprobo
            
            cout<<"El alumno "<<i<<" aprobo con: "<<promedioNotas<<endl;
            
        } else { //de no ser asi el alumno reprobo
            
            cout<<"El alumno "<<i<<" reprobo con: "<<promedioNotas<<endl;
        }
    }
}

//funcion que llena las notas de los alumnos
void llenarNotas(int cantidadAlumnos, double notasAlumnos[][5]) {

    for(int i = 1; i <= cantidadAlumnos; i++) {
        
        cout<<"Ingrese las notas del almuno "<<i<<": "<<endl; //ingresar la nota de el alumno en la posicion i 
        
        for(int a = 1; a <= 5; a++) {
            //declarando variable        
            double nota;
            cout<<"Ingrese la nota numero "<<a<<": "<<endl; //se pide ingresar la nota en la posicion a 
            cin>>nota;
            
            if(nota >= 0 && nota <= 10) { //valida que la nota este entre el rango de 0 a 10

                notasAlumnos[i][a] = nota; //se llana el arreglo del alumno i con la nota a
            }
            else{
                cout<<"Error en la nota"<<endl;
                break;
            }
        }
    }   
    //llamando a la funcion promedio
    promedio(cantidadAlumnos, notasAlumnos);
}

int main()
{   
    //declarando la variable donde se guardara la cantidad de alumnos 
    int almunos;
    cout<<"Ingrese la cantidad de almunos:"<<endl; //pidiendo la cantidad de alumnos 
    cin>>almunos; 
    //declarando un arreglo bidimensional 
    double notasAlumnos[almunos][5];
    //llamando a la funcion llenarNotas
    llenarNotas(almunos, notasAlumnos);
    return 0;
}