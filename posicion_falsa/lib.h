//Cabeceras
#define _USE_MATH_DEFINES // Definicion de constantes matematicas 
#include <iostream>
#include <cmath>

using namespace std;

// Implementacion
void metodo(double x ,double y, double er , double(*funcion)(double)){ 

  double x1,x2,xm,xs;
  x1 = x;
  x2 = y;
  xm=(x1*(*funcion)(x2)-x2*(*funcion)(x1))/((*funcion)(x2)-(*funcion)(x1));

  do {  
     xs = xm;

     if(funcion(xm)*funcion(x1)<0){
          x2 = xm;
     }

     if(funcion(xm)*funcion(x2)<0){
           x1 = xm;
     }
    
     xm=(x1*funcion(x2)-x2*funcion(x1))/(funcion(x2)-funcion(x1));

     cout<<"Xs : "<<xs<<" | ";
     cout<<"Xm : "<<xm<<"\n";

    }
    while(abs(xm-xs)>er);

    cout<<"La raiz es : "<<xm<<"\n";

  }