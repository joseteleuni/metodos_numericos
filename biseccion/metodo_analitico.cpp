//Cabeceras
#define _USE_MATH_DEFINES // Definicion de constantes matematicas 
#include <iostream>
#include <cmath>

using namespace std;

// variables globales
double a=0.3;
double b=0.4;
double er=0.00001; 

// declaracion de funciones
void metodo(double x , double y);
double funcion(double x);

//metodo int main
int main(){
    cout<<"La primera operacion : "<<funcion(a)<<"\n";
    cout<<"La segunda operacion : "<<funcion(b)<<"\n";

    metodo(a,b);
    return 0;
}


// Implementacion
void metodo(double x ,double y){ 

  double x1,x2,xm,xs;
  x1 = x;
  x2 = y;
  xm=(x1+x2)/2;

  do {  
     xs = xm;

     if(funcion(xm)*funcion(x1)<0){
          x2 = xm;
     }

     if(funcion(xm)*funcion(x2)<0){
           x1 = xm;
     }
    
     xm = (x1+x2)/2;
     cout<<"Xs : "<<xs<<" | ";
     cout<<"Xm : "<<xm<<"\n";

    }
    while(abs(xm-xs)>er);

    cout<<"La raiz es : "<<xm<<"\n";

  }
   

double funcion (double x){

    return (3*x+sin(x)-exp(x));
}