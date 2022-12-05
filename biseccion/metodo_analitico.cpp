//Cabeceras
#define _USE_MATH_DEFINES // Definicion de constantes matematicas 
#include <iostream>
#include <cmath>
#include "lib.h"

using namespace std;

// variables globales
double a=0.3;
double b=0.4;
double er=0.00001; 

// declaracion de funciones
double funcion(double x);

//metodo int main
int main(){

    metodo(a,b,er,funcion);
    
    return 0;
}

double funcion (double x){

    return (3*x+sin(x)-exp(x));
}