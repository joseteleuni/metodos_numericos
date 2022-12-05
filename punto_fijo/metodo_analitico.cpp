//Cabeceras
#define _USE_MATH_DEFINES // Definicion de constantes matematicas 
#include <iostream>
#include <cmath>
#include "lib.h"

using namespace std;

//Declaracion de funciones a usar
float fx(float x);
float gx(float x);


//*************Declaracion de variables globales**********
float x0=0; // Setear el punto inicial
float er=0.00001; // Setear el error


int main(){
   
  if(convergencia(x0,fx)){

    cout<<"El g(x) es convergente "<<"\n";

    punto_fijo(x0,er,gx);
    
  }

  else {
    cout<<"No converge"<<endl;
  }
  return 0;
}

//****************Implementacion **********

// fx representa la funcion fx=0
float fx(float x) {

   return (3*x+sin(x)-exp(x));
}

// gx representa la funcion gx=x
float gx(float x){

  return (exp(x)-cos(x))/3; 
}





