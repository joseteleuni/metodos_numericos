#include <iostream>
#include <cmath>

using namespace std;

// Implementacion

void metodo(float x,float er ,float (*f)(float) ,float (*df)(float)) {

    float xr,xs;
    xr=x;
    float fx,dfx;
     do {
          xs = xr;
          fx = f(xs);
          dfx = df(xs);
          xr=xs -fx/dfx;

          cout<<"xs : "<<xs<<" | ";
          cout<<"xr : "<<xr<<" | ";
          cout<<"f(xs) : "<<fx<<"\n";      
       }
       
       while(abs(xs-xr)>er) ;
    
    cout<<"El valor de xr es : "<<xr<<"\n";
    
}
