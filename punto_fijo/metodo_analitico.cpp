//Cabeceras
#define _USE_MATH_DEFINES // Definicion de constantes matematicas 
#include <iostream>
#include <cmath>

using namespace std;

//Funciones a usar
void punto_fijo(float);
bool convergencia(float x);

// Declaracion de variables globales
float x0=0;
float er=0.00001;
float xs,xr;

int main(){
   
  if(convergencia(x0)){

    cout<<"El g(x) es convergente "<<"\n";

    punto_fijo(x0);
    
  }

  else {
    cout<<"No converge"<<endl;
  }
  return 0;
}


// Implementacion de Funciones
void punto_fijo(float x){
    xr=x;

     do {
          xs = xr;
          xr=(exp(xs)-sin(xs))/3;
          cout<<"xs : "<<xs<<" | ";
          cout<<"xr : "<<xr<<"\n";      
       }
       
       while(xr-xs>er) ;
    
    cout<<"El valor de xr es : "<<xr;
}

bool convergencia(float x){
    float gdx;
    bool status;
    gdx=(exp(x)-cos(x))/3;

    if(gdx>-1 && gdx<1){
         status = true;
    }
    else{
        status = false;
    }

    return status;
}


