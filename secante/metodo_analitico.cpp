//Cabeceras
#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
#include "lib.h"
using namespace std;

// Declaracion de funciones
float ecuacion(float x);

// Declaracion de variables globales
float x0=0.5;
float x1=0.4;
float er=0.00001;


// Funcion int main
int main(){
  
    metodo(x0,x1,er,ecuacion);

    return 0;
}

float ecuacion(float x){

    return 3*x+sin(x)-exp(x);
}
