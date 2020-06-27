#include <iostream>
using namespace std;

//funcion que compara y cuenta la cantidad de estaturas que están arriba de la media y debajo de la media
void promedioEstaturas(double arreglo[], double media){
    //declarando variables 
    int repeticionMedia = 0;
    int repeticionArriba = 0;
    int repeticionAbajo = 0;

    for (int i = 1; i <= 25; i++) //ingresa 25 veces con la estatura de los alumnos
    {   
        
        if (arreglo[i] == media) { // si la estatura es igual a la media
            
            repeticionMedia++; //suma uno a la variable repeticionMedia

        }else if (arreglo[i] < media){ //si la estatura es menor a la media
            
            repeticionAbajo++; //suma uno a la variable repeticionAbajo

        }else if (arreglo[i] > media){ //si la estatura es mayor a la media 
            
            repeticionArriba++;  //suma uno a la variable repeticionArriba

        }else{ //de no ser ninguna de las anteriores 

            cout<<"Error"<<endl; // muestra mensaje error 
        }    
    }
    //mensajes moestrados en consola con la media, y la cantidad de alumnos que hay en la media, arriba y abajo de la media
    cout<<"La media de la estatura de los alumnos es de: "<<media<<endl;  
    cout<<"La cantidad de alumnos que estan en la media son: "<<repeticionMedia<<endl;  
    cout<<"La cantidad de alumnos que estan arriba de la media son: "<<repeticionArriba<<endl;
    cout<<"La cantidad de alumnos que estan abajo de la media son: "<<repeticionAbajo<<endl;
}

//funcion que calcula la media de las estaturas
void ingresandoEstaturas(double arreglo[], double media){
    //declarando variables
    double estatura = 0;
    double suma = 0;

    for (int i = 1; i <= 25; i++){ //ingresa las 25 para llenar la estatura de los alumnos 

        cout<<"Ingrese la estatura de alumno "<<i<<endl;
        cin>>estatura;
        arreglo[i]= estatura;  //la estatura se guarda en la posicion i
        suma += arreglo[i];      
    }
        //calculando la media: diviendo la suma de los 25 datos entre 25
        media = suma/25;

    //llamando la funcion promedioEstatura 
    promedioEstaturas(arreglo, media);
}

int main()
{
    //declarando un arreglo con longitud de 25
    double arreglo[25];
    double media = 0; 
    //llamando a la funcion 
    ingresandoEstaturas(arreglo, media);

}