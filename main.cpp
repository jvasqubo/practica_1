#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    char volver;
    volver = 'y';
    while (volver == 'y')
    {
    int opcion;
    Menu();
    cout<<"Elija una opcion:";
    cin>>opcion;
    while (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4 && opcion != 5 && opcion != 6 && opcion != 7 && opcion != 8 && opcion != 9 && opcion != 10  ){
        cout<<"Opcion invalida.Elija una opcion:";
        cin>>opcion;
    }
    switch(opcion){
     case 1:
        problema_2();
        int numero;
        cout<<"\n\nIngrese un numero: ";
        cin>>numero;
        billetes(numero);
        cout<<"Desea volver al menu principal? y/n : ";
        cin>>volver;
        while (volver != 'y' && volver != 'n'){
        cout<<"Respuesta invalida. Desea volver al menu principal? y/n:";
        cin>>volver;
        }
        break;


    case 2:
        problema_4();
        int hora1;
        int hora2;
        cout<<"Ingrese un numero de maximo 4 digitos: ";
        cin>>hora1;
        hora1 = confirmarhora(hora1);
        cout<<"Ingrese otro numero de maximo 4 digitos: ";
        cin>>hora2;
        hora2 = confirmarhora(hora2);
        sumarhora(hora1, hora2);
        cout<<"Desea volver al menu principal? y/n : ";
        cin>>volver;
        while (volver != 'y' && volver != 'n'){
        cout<<"Respuesta invalida. Desea volver al menu principal? y/n:";
        cin>>volver;
        }
        break;

    case 3:
        problema_5();
        int n;
        cout<<"Ingrese un numero impar: ";
        cin>>n;
        numero = confirmarimpar(n);
        construirpatron(numero);
        cout<<"Desea volver al menu principal? y/n : ";
        cin>>volver;
        while (volver != 'y' && volver != 'n'){
        cout<<"Respuesta invalida. Desea volver al menu principal? y/n:";
        cin>>volver;
        }
        break;

    case 4:
        problema_7();
        int nfibo;
        cout<<"\n Ingrese un numero: ";
        cin>>nfibo;
        fibonacci(nfibo);
        cout<<"Desea volver al menu principal? y/n : ";
        cin>>volver;
        while (volver != 'y' && volver != 'n'){
        cout<<"Respuesta invalida. Desea volver al menu principal? y/n:";
        cin>>volver;
        }
        break;

    case 5:
        problema_9();
        int ndigitos;
        cout<<"\n Ingrese un numero: ";
        cin>>ndigitos;
        sumardigitos(ndigitos);
        cout<<"Desea volver al menu principal? y/n : ";
        cin>>volver;
        while (volver != 'y' && volver != 'n'){
        cout<<"Respuesta invalida. Desea volver al menu principal? y/n:";
        cin>>volver;
        }
        break;

    case 6:
        problema_11();
        int comun;
        int MCM;
        cout<<"\n Ingrese un numero: ";
        cin>>comun;
        MCM = minimocomunmultiplo(comun);
        cout<<"El minimo comun multiplo es "<< MCM <<endl;
        cout<<"Desea volver al menu principal? y/n : ";
        cin>>volver;
        while (volver != 'y' && volver != 'n'){
        cout<<"Respuesta invalida. Desea volver al menu principal? y/n:";
        cin>>volver;
        }
        break;

    case 7:
        problema_13();
        int limite;
        int sumatoria;
        cout<<"\n Ingrese un numero: ";
        cin>>limite;
        sumatoria = sumadeprimos(limite);
        cout<<"El resultado de la suma es: "<< sumatoria <<endl;
        cout<<"Desea volver al menu principal? y/n : ";
        cin>>volver;
        while (volver != 'y' && volver != 'n'){
        cout<<"Respuesta invalida. Desea volver al menu principal? y/n:";
        cin>>volver;
        }
        break;

    case 8:
        problema_14();
        int mayorpalindromo;
        int numero1;
        int numero2;
        mayorpalindromo=0;
        int contador;
        contador = 999;
        while ( contador >= 100)
        {
            for (int i=999; i>=100; i-=1)
            {
                if (espalindromo(contador*i)==true)
                {
                    if ((contador*i)>mayorpalindromo)
                    {
                        numero1 = contador;
                        numero2 = i;
                        mayorpalindromo = contador*i;
                    }
                }
           }
            contador -=1;
        }
        cout<<numero1<<" * "<<numero2<<" = "<<mayorpalindromo<<endl;
        cout<<"Desea volver al menu principal? y/n : ";
        cin>>volver;
        while (volver != 'y' && volver != 'n'){
        cout<<"Respuesta invalida. Desea volver al menu principal? y/n:";
        cin>>volver;
        }
        break;

    case 9:
        problema_15();
        int dime;
        int dimension;
        cout<<"Ingrese un numero impar: ";
        cin>>dimension;
        dime = confirmarimpar(dimension);
        cout<<" En una espiral de "<<dime<<" x "<<dime<<", la suma es "<<sumadecuadrado(dime)<<endl;
        cout<<"Desea volver al menu principal? y/n : ";
        cin>>volver;
        while (volver != 'y' && volver != 'n'){
        cout<<"Respuesta invalida. Desea volver al menu principal? y/n:";
        cin>>volver;
        }
        break;

    case 10:
        problema_17();
        int k;
        cout<<"Ingrese un numero: ";
        cin>>k;
        numerostriangulares(k);
        cout<<"Desea volver al menu principal? y/n : ";
        cin>>volver;
        while (volver != 'y' && volver != 'n'){
        cout<<"Respuesta invalida. Desea volver al menu principal? y/n:";
        cin>>volver;
        }
        break;

    default: cout<<"Opcion invalida\n";
    }
    }
    return 0;
}


