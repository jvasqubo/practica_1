#include<iostream>

using namespace std;

void problema_2(){
    cout<<"Problema 2: Se necesita un programa que permita determinar la minima combinacion de billetes y";
    cout<<" monedas para una cantidad de dinero determinada.";
    cout<<" Los billetes en circulacion son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las";
    cout<<" monedas son de $500,$200, $100 y $50."<<endl;
}
void billetes ( int numero)
{
    int x;
    x = numero/50000;
    cout<<"$50.000: "<<x<<endl;
    if (numero/50000 >= 1){numero = numero - (x*50000);}
    x = numero/20000;
    cout<<"$20.000: "<<x<<endl;
    if (numero/20000 >= 1){ numero = numero - (x*20000);}
    x = numero/10000;
    cout<<"$10.000: "<<x<<endl;
    if (numero/10000 >= 1){numero = numero - (x*10000);}
    x = numero/5000;
    cout<<"$5.000: "<<x<<endl;
    if (numero/5000 >= 1){numero = numero - (x*5000);}
    x = numero/2000;
    cout<<"$2.000: "<<x<<endl;
    if (numero/2000 >= 1){numero = numero - (x*2000);}
    x = numero/1000;
    cout<<"$1.000: "<<x<<endl;
    if (numero/1000 >= 1){numero = numero - (x*1000);}
    x = numero/500;
    cout<<"$500: "<<x<<endl;
    if (numero/500 >= 1){numero = numero - (x*500);}
    x = numero/200;
    cout<<"$200: "<<x<<endl;
    if (numero/200 >= 1){numero = numero - (x*200);}
    x = numero/100;
    cout<<"$100: "<<x<<endl;
    if (numero/100 >= 1){numero = numero - (x*100);}
    x = numero/50;
    cout<<"$50: "<<x<<endl;
    if (numero/50 >= 1){numero = numero - (x*50);}
    cout<<"Resultante: "<<numero<<endl;
}
void Menu()
{
    cout<<"\n\nMENU PRINCIPAL"<<endl;
    cout<<"*********************"<<endl;
    cout<<"1. Problema 2 \n2. Problema 4\n3. Problema 5\n4. Problema 7\n5. Problema 9\n6. Problema 11\n7. Problema 13\n8. Problema 14\n9. Problema 15\n10. Problema 17"<<endl;
    cout<<"*********************"<<endl;
}
void problema_4(){
    cout<<"Escriba un programa para leer dos numeros enteros con el siguiente significado: El valor del primer numero representa una hora del dia en un reloj de 24 horas de modo que 1245 representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duración de la misma manera, por lo que 345 representa 3 horas y 45 minutos. El programa debe sumar esta duracion primer numero y el resultado sera impreso en la misma notacion, en este caso 1630, que es el tiempo de 3 horas y 45 minutos despues de 12:45."<<endl;
}
void problema_5(){
cout<<"Escriba un programa que escriba un patron en pantalla. El tamano del patron estara determinado un numero entero impar que ingrese el usuario."<<endl;
}
void problema_7(){
cout<<"En la seria de Fibonacci, cada numero es la suma de los anteriores e incia en 1 y 1. Escriba un programa que que reciba un numero n y halle la suma de todos los numeros pares en la serie de fibonacci menores a n. "<<endl;
}
void problema_9(){
cout<<"Escriba un programa que pida un numero entero N  e imprima el resultado de la suma de todos sus digitos elevados a si mismos."<<endl;
}
void problema_11(){
cout<<"Escriba un programa que reciba un numero y calcule el minimo comun multiplo de todos los numeros enteros entre 1 y el numero ingresado."<<endl;
}
void problema_13(){
cout<<"Escriba un programa que reciba un numero y calcule la suma de todos los primos menores que el numero ingresado."<<endl;
}
void problema_14(){
cout<<"Un numero palindromo es igual de derecha a izquierda y de izquierda a derecha. Escriba un programa que calcule el numero palindromo mas grande que se puede obtener como una multiplicacion de numeros de 3 digitos."<<endl;
}
void problema_15(){
cout<<"Empezando con el numero 1 y moviendose hacia la izquierda y en sentido horario se genera una espiral de numeros. Escriba un programa que reciba un numero impar n y calcule la suma de los numeros en la diagonal de una espiral de nxn."<<endl;
}
void problema_17(){
cout<<"Escriba un programa que reciba un numero k y calcule cual es el primer numero triangular que tiene mas de k divisores"<<endl;
}
int confirmarhora(int hora1){
    while (hora1%100>59||hora1/100>24 || hora1>2400 ){
        cout<<"Numero invalido. Ingrese un nuevo numero:";
        cin>>hora1;}
    return hora1;
}
void sumarhora(int hora1, int hora2){
    int horas1;
    int horas2;
    int minutos1;
    int minutos2;
    int sumahora;
    int sumaminutos;
    horas1 = hora1/100;
    horas2 = hora2/100;
    sumahora = horas1 + horas2;
    if (sumahora>24){sumahora = sumahora - 24;}
    minutos1 = hora1%100;
    minutos2 = hora2%100;
    sumaminutos = minutos1 + minutos2;
    if (sumaminutos>60){sumaminutos = sumaminutos - 60;
    sumahora += 1;
    }
    cout<<"La hora es: "<< sumahora<<":"<<sumaminutos<<endl;
}

int confirmarimpar(int n){
    while (n%2 == 0){
        cout<<"Numero invalido. Ingrese un nuevo numero:";
        cin>>n;}
    return n;
}
void construirpatron(int n){
    int y;
    y = (n-1)/2;
    int contador;
    int contador1;
    contador = 1;
    contador1 = y;
    for (int i=1;i<=y;i+=1)
    {for (int x=contador1;x>=1;x-=1)
        {cout<<" ";}
     for (int x=1; x<=contador;x+=1)
        {cout<<"*";}
     cout<<"\n";
     contador +=2;
     contador1 -=1;
    }
   for (int i=1; i<=n;i+=1)
   {cout<<"*";}
   cout<<"\n";
   contador =n-2;
   contador1=1;
   for (int i=1;i<=y;i+=1)
   {for (int x=contador1;x>=1;x-=1)
       {cout<<" ";}
    for (int x=1; x<=contador;x+=1)
       {cout<<"*";}
    cout<<"\n";
    contador -=2;
    contador1 +=1;
   }
}
void fibonacci(int n)
{
    int n1;
    n1 = 1;
    int n2;
    n2 = 1;
    int termino;
    termino = n1 + n2;
    int sumatoria;
    sumatoria = 0;
    while (termino<n)
    {
       if (termino%2==0){sumatoria += termino;}
       n1 = n2;
       n2 = termino;
       termino = n1 + n2;
    }
    cout<<"El resultado de la suma es: "<<sumatoria<<endl;
}
int elevar(int x,int n)
{
    int y;
    y =x;
    for (int i=2;i<=n;i+=1)
    {
        x = x*y;
    }
    return x;
}
void sumardigitos(int n)
{
    int sumatoria;
    sumatoria = 0;
    int z;
    int y;
    y = 10;
    int digitos;
    digitos=1;
    while (n>y)
    {
        y*=10;
        digitos+=1;
    }
    for (int i=1; i<=digitos; i+=1)
    {
        z = n%10;
        n = (n-z)/10;
        sumatoria += elevar(z,z);
    }
    cout<<"El resultado de la suma es: "<<sumatoria<<endl;
}

int minimocomunmultiplo(int n)
{
    int x;
    int y;
    int contador;
    contador = 1;
    x=1;
    while (x == 1)
    {
        y = n*contador;
        x = 0;
        for (int i=2;i<n;i+=1)
        {
            if (y%i!=0)
            {
                x = 1;
                break;
            }
        }
        contador +=1;
    }
    return y;
}
bool esprimo(int n)
{
    if (n == 2)
    {
        return true;
    }
    else if (n == 3)
    {
        return true;
    }
    else if (n%2==0)
    {
        return false;
    }
    for (int i=1;i<=(n/2);i+=1)
    {
        if ((n%i)==0 && i != 1)
        {
            return false;
        }
    }
    return true;
}
int sumadeprimos(int n)
{
    int sumatoria;
    sumatoria = 2;
    if (n==2 || n==1)
    {
        return 0;
    }
    else if (n==3)
    {
        return 2;
    }
    for (int i=3; i<n;i+=2)
    {
        if (esprimo(i)==true)
        {
            sumatoria += i;
        }
    }
    return sumatoria;
}
bool espalindromo(int n)
{
    int z;
    int y;
    y = 10;
    int digitos;
    digitos=1;
    while (n>y)
    {
        y*=10;
        digitos+=1;
    }
    if (digitos%2==1)
    {
        return false;
    }
    int arreglo[digitos];
    for (int i=0; i<digitos; i+=1)
    {
        z = n%10;
        n = (n-z)/10;
        arreglo[i] = z;
}
    for (int i=0; i<digitos; i+=1)
        if (arreglo[i]!=arreglo[digitos-1-i])
        {
            return false;
        }
    return true;
}

int sumadecuadrado(int n)
{
    if (n==1)
    {
        return 1;
    }
    int inicio;
    int contador;
    int incremento;
    incremento = 2;
    contador = 1;
    inicio = 1;
    for (int i=1;i<n;i+=2)
    {
        for (int x=1;x<=4;x+=1)
        {
            inicio += incremento;
            contador += inicio;
        }
        incremento += 2;
    }
    return contador;
}

int numerodedivisores(int n)
{
    int contador;
    contador = 2;
    for (int i=2;i<=(n/2);i+=1)
    {
        if (n%i==0)
        {
            contador += 1;
        }
    }
    return contador;
}

void numerostriangulares(int n)
{
    int numero;
    int contador;
    int divisores;
    divisores = 0;
    contador = 1;
    while (divisores<=n)
    {
        numero = (contador*(contador+1))/2;
        divisores = numerodedivisores(numero);
        contador += 1;
    }
    cout<<"El numero es: "<<numero<<" que tiene "<<divisores<<" divisores"<<endl;
}
