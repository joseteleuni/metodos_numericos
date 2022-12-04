//Cabeceras
#define _USE_MATH_DEFINES // Definicion de constantes matematicas 
#include <iostream>
#include <cmath>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

// Declaracion de variables globales


// Declaracion de funciones globales
void grafica();


// Funcion int main
int main(){
   
    grafica();
    return 0;
}

/*** Implementacion de funciones***/

void grafica(){

   int n = 8000; // Numero de puntos
   float j;
   double w;
   std::vector<float> x(n) ,y(n) ,z(n); // Declaramos el vector x de tamano n

   for(int i=0 ; i<n; i++){
  
      j=-1+i/2000.00;	    
      //Asignamos los valores al vector x con la funcion at()
      x.at(i) = j ; 
      y.at(i) = 3.00*j+sin(j)-exp(j);
   
   }

   plt::figure();
   plt::plot(x,y);
   plt::show();

}
