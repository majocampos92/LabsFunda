#include <iostream>
#include <math.h>

using namespace std;

    int mcd(int a, int b){
    
        if(b==0){
            return a;

        }else {

            mcd(b,a%b);
        }

    }

    void  ejercicio1(){
        //función que retorne el mcd de dos números 
        int a=0,
            b=0;
        do{
            cout <<"Ingrese el primer numero: "<<endl;
            cin>>a;
            if(a<0){
            
                cout <<"Ingrese un numero ENTERO y POSITIVO: "<<endl;

            }
        }while(a<0);
        do{
            cout <<"Ingrese el segundo numero: "<<endl;
            cin>>b;
            if(b<0){
            
                cout <<"Ingrese un numero ENTERO y POSITIVO: "<<endl;

            }
        }while(b<0);

        cout << "MCD (euclides): " << mcd(a,b) << endl;
        cout << endl;
    }


    void ejercicio2(){
        //Hora más un min, formato 24
        int h=0,
            m=0,
            s=0;
        cout<<"Ingrese la hora: "<<endl;
        cin>>h;
        cout<<"Ingrese los minuto: "<<endl;
        cin>>m;
        cout<<"Ingrese los segundo: "<<endl;
        cin>>s;
        
        if(h<24 && m<60 && s<60){
             if(s<59 && s>=0){

                cout<<h<<"h : "<<m<<"m : "<<(s+1)<<"s";

            }else{
                 if(s==59){
                        if(m==59){
                            if(h==23){

                          cout<<"00h : 00m : 00s"<<endl;

                        }else{

                          cout<<(h+1)<<"h: 00m : 00s"<<endl;
                        
                        }
                    }else{

                      cout<<h<<"h "<<(m+1)<<"m : 00s"<<endl;

                    }
                }
            }
        }else{
         
            cout<<"ERROR"<< endl;
            cout << endl;

        }

    }


    bool ejercicio3(){
        //funcion para saber si un año es bisiesto
        int anio;
        cout<<"Ingrese el a"<<(char)164<<"o: "<<endl;
        cin>>anio;
        //Condición de bisiesto
        if( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0){

            cout<<"Si es bisiesto "<<endl;
            return true;

        }else{

            cout<<"No es bisiesto "<<endl;
            return false;
        }

    }

    void ejercicio4(){
        //funcion fecha para saber el dia siguiente sabiendo si el año es bisiesto
        int d,m,a, ds, ms, as;
        cout<<"Ingrese el dia: "<<endl;
        cin>>d;
        cout<<"Ingrese el mes: "<<endl;
        cin>>m;
        cout<<"Ingrese el a"<<(char)164<<"o: "<<endl;
        cin>>a;

        if((d <= 0 || d >= 32) || (m <=0 || m >= 12)){

            cout<<" Error, vuelva a intentar "<<endl;
            cout << endl;
            
        }else{
            if ((d == 30 && (m == 4 || m == 6 || m == 9 || m == 11)) || (d == 29 && m == 2) || (d == 28 && m == 2 && ((a % 4 != 0) ||
             (a % 100) == 0) && (a % 400) != 0) || d == 31){

                ms = m+ 1;
                ds = 1;

            }else{ 

                ds = d + 1;
                ms = m;

            } 

            if (ds == 1 && ms == 13) 
            {
                ms = 1;
                as = a + 1;

            }else{

                as = a;

            }
                
           cout<<"fecha del dia siguiente: "<<ds<<" / "<<ms<<" / "<<as<<endl;

        }

    }

    int main() {
        int opcion=0;
        do{
            cout <<"Ejercicio 1: MCD "<<endl;
            cout <<"Ejercicio 2: HORA"<<endl;
            cout <<"Ejercicio 3: A"<<(char)165<<"O BISIESTO O NO"<<endl;
            cout <<"Ejercicio 4: FECHA "<<endl;
            cout <<"Ejercicio 5: SALIR "<<endl;
            cout <<"Ingrese la opcion del ejercicio que desea ocupar: "<<endl;
            cin>>opcion;

            switch(opcion){
                case 1: ejercicio1();
                break;
                case 2 :ejercicio2();
                break;
                case 3: ejercicio3();
                break;
                case 4 :ejercicio4();
                break;
            }

        }while(opcion!=5);

        cout << "  GRACIAS!  "<< endl;
        cout << endl;

        return 0;
    }   