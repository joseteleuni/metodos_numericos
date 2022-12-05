//Cabeceras
#define _USE_MATH_DEFINES // Definicion de constantes matematicas 
#include <iostream>
#include <cmath>

using namespace std;

// Implementacion
void metodo(float x0,float x1, float er, float (*ecuacion)(float)){
    float xn,xn_1,xn_2,d,xs;
    xn=x0;
    xn_1=x1;

    do{
       xs=xn_1;
       d=((*ecuacion)(xn)-(*ecuacion)(xn_1));
       xn_2 = xn_1-(*ecuacion)(xn_1)*((xn-xn_1)/d);
       cout<<xn_1<<" | ";
       cout<<xn_2<<" | \n";
       
       xn=xn_1;
       xn_1=xn_2;
    }
    while(abs(xn_2-xs)>er);

    cout<<"La raiz es : "<<xn_2<<"\n";
}
