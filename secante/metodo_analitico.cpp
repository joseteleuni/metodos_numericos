//Cabeceras
#define _USE_MATH_DEFINES // Definicion de constantes matematicas 
#include <iostream>
#include <cmath>

using namespace std;

// Declaracion de funciones
void metodo(float x0,float x1);
float ecuacion(float x);

// Declaracion de variables globales
float x0=0.5;
float x1=0.4;
float er=0.00001;


// Funcion int main
int main(){
  
    metodo(x0,x1);

    return 0;
}

// Implementacion
void metodo(float x0,float x1){
    float xn,xn_1,xn_2;
    xn=x0;
    xn_1=x1;

    do{
    
       xn_2 = xn_1-ecuacion(xn_1)*((xn-xn_1)/(ecuacion(xn)-ecuacion(xn_1)));
       cout<<xn_1<<" | ";
       cout<<xn_2<<" | \n";
       
       xn=xn_1;
       xn_1=xn_2;
    }
    while(xn_1-xn_2<er);

    cout<<"La raiz es : "<<xn_2;
}

float ecuacion(float x){

    return 3*x+sin(x)-exp(x);
}
