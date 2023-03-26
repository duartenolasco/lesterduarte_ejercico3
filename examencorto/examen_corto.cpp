
#include <iostream>

using namespace std;

int main() {
    int opciones;
    int edad;//variables para la primera opcion
    int numero1, numero2;//variables para la segunda opcion
    int numeroaingresar,factorial=1;//variables de la cuarta opcion
    int numeroingresado;//variable del 5 ejercicio
    int number;//variable para la tercera opcion
    char opcionesdisponibles;//septima opcion



    cout<<"las opciones son: "<<endl;
    cout<<"1. si desea calcular si es mayor de edad."<<endl;
    cout<<"2. si desea saber cual de los dos numeros es mayor."<<endl;
    cout<<"3. si desea saber si es un numero par o impar."<<endl;
    cout<<"4. si desea calcular el factorial de un numero."<<endl;
    cout<<"5. si desea saber los numeros impares hasta su numero (for)."<<endl;
    cout<<"6. lo mismo que la opcion 5 solo que con el (while)."<<endl;
    cout<<"7. si desea ver que dia de la semana es."<<endl;
    cout<<"Digite la opcion que desea realizar: "; cin>>opciones;

    switch(opciones){

        case 1: cout<<"digite su edad: ";
            cin>>edad;

            if(edad<=17){//para poner si esta en el rango de 18 a 25 años utilizamos y &&
                cout<<" Usted es menor de edad ";
            }
            else if(edad>=18){
                cout<<"usted es mayor de edad";
            }
            break;

        case 2: cout<<"Escriba dos numeros porfavor";//determine cuál es el mayor de los dos.
        cin>>numero1>>numero2;

        if(numero1==numero2){
            cout<<"ambos numeros son iguales";
        }
        else if(numero1>numero2){
            cout<<"el numero mayor es el primer numero ingresado: "<<numero1;
        }
        else if(numero2>numero1){
            cout<<"el numero mayor es el segundo numero ingresado: "<<numero2;
        }
        break;

        case 3: cout<<"Digite un numero: "; cin>>number; //determine si es par o impar
        if(number==0){
            cout<<"el numero "<<number<<"es un numero neutro";
        }
        else if(number%2==0){
            cout<<"el numero "<<number<<" es un numero par";
        }
        else{
            cout<<"el numero "<<number<<" es un numero impar";
        }
        break;
        case 4:  // calcule su factorial utilizando un bucle while.
            do
            {
                cout<<"Ingrese el numero que desea saber su factorial: ";
                cin>>numeroaingresar;
            } while ( numeroaingresar<1 );
            for (int factorialde = 1; factorialde <= numeroaingresar; factorialde++)
            {
                factorial=factorial*factorialde;
                cout<<factorialde<<"*";
            }
            cout<<" = "<<factorial<<"\n";
            cout<<"este es el factorial del numero que ingreso";
            system("pause");
        break;
         //variables numeroingresado,
        case 5: cout<<"ingrese un numero mayor a 10 y menor a 30"; //un programa que pida al usuario un número mayor a 10 y menor que 30,
        cin>>numeroingresado;   //  y que muestre por pantalla todos los números impares
                         //  desde 1 hasta ese número utilizando un bucle for.

        break;

        case 6: cout<<"";//Escribir un programa que realice lo mismo que el ejercicio anterior
                            // , pero usando el buqle while

        break;

        case 7: cout<<"ingrese un numero del 1 al 5: "; //número del 1 al 5 y muestre por pantalla el nombre del día de la
            cout<<"la cual le mostrara el dia correspondiente de la semana \n";
            cout << "Ingrese la Opción a ejecutar: ";
            cin >> opcionesdisponibles;

            switch(opcionesdisponibles)
            {
                case '1': cout << "El numero que eligio corresponde al dia lunes ";
                    break;
                case '2': cout << "El numero que eligio corresponde al dia martes";
                    break;
                case '3': cout << " El numero que eligio corresponde al dia miercoles";
                    break;
                case '4': cout << " El numero que eligio corresponde al dia jueves";
                    break;
                case '5': cout << " El numero que eligio corresponde al dia viernes ";
                    break;
                default: cout << " el numero que ingreso esta en la opcion";
                break;
            }
        break;

    }

    return 0;
}
