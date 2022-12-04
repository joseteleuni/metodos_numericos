//Cabeceras
#define _USE_MATH_DEFINES // Definicion de constantes matematicas 
#include <iostream>
#include <cmath>

using namespace std;

// variables globales
float x0=0.4;
float er=0.00001;
float xs,xr;

// declaracion de funciones
void metodo(float x);

//metodo int main
int main(){

    metodo(x0);
    return 0;
}

// Implementacion

void metodo(float x) {
    xr=x;
    float fx;
     do {
          xs = xr;
          fx = 3*xs+sin(xs)-exp(xs);
          xr=xs -(3*xs+sin(xs)-exp(xs))/(3+cos(xs)-exp(xs));
          cout<<"xs : "<<xs<<" | ";
          cout<<"xr : "<<xr<<" | ";
          cout<<"f(xs) : "<<fx<<"\n";      
       }
       
       while(abs(xs-xr)>er) ;
    
    cout<<"El valor de xr es : "<<xr;
    
}

