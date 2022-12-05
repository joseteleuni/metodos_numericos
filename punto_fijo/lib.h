#include <iostream>
#include <cmath>
using namespace std;

//Variables globales
float xs,xr;

//Implementacion de Funciones
void punto_fijo(float x,float er,float (*gdx) (float)){
    xr=x;

     do {
          xs = xr;
          xr = (*gdx)(xs);
          cout<<"xs : "<<xs<<" | ";
          cout<<"xr : "<<xr<<"\n";      
       }
       
       while(xr-xs>er) ;
    
    cout<<"El valor de xr es : "<<xr;
}

bool convergencia(float x,float (*gdx) (float)){
   
    bool status;

    if((*gdx)(x)>-1 && (*gdx)(x)<1){
         status = true;
    }
    else{
        status = false;
    }

    return status;
}