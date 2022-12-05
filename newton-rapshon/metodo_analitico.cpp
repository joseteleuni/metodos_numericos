//Cabeceras
#define _USE_MATH_DEFINES // Definicion de constantes matematicas 
#include <iostream>
#include <cmath>
#include "lib.h"

using namespace std;

// variables globales
float x0=0.4;
float er=0.00001;

// Declaracion de funciones globales
float f(float x);
float df(float x);

//metodo int main
int main(){

    metodo(x0,er,f,df);
    return 0;
}

float f(float x){
    return (3*x+sin(x)-exp(x)) ;
}

float df(float x){
    return (3+cos(x)-exp(x)) ;
}



