#include <stdio.h>
#include <math.h>
#include <iostream>


float f(float x)
{
	
	system ("COLOR B");
////////////////ELECCION DE FUNCION//////////////////////////////////////
	float y;
     //y=2*x*cos(2*x)-(x+1)*(x+1);
     y= cos(x/2)-sin(2*x);
	 //y= x+2;
	return y;
}

float METODO(float a, float b,int iter)
{
   float xi,xi_anterior=0.0,errorporcentual;
   int ayudante=1;
   printf(" i \t | a \t |\t| b \t|\t| xi \t|\t| Margen de error\n");
  do
  {
      xi=(a+b)/2;
      errorporcentual= ((xi-xi_anterior)/xi)*100.0;
      xi_anterior=xi;
      printf("[%d] \t |%.4f| \t|%.4f| \t|%.4f| \t|%.2f%%\n",ayudante,a,b,xi,fabs(errorporcentual));


      if(f(a)*f(xi)<0)
      {
      	b=xi;
      }else{
      	a=xi;
      }
      
      ayudante++;

  }while (f(a)*f(xi)!= 0 && ayudante<=iter );

  return xi;
}


int main ()
{
	/////////DECLARACION DE LAS RAICES/////////////
    float a=3, b=3.5,iteraciones=5;
    float raiz;
    raiz=METODO(a,b,iteraciones);
    printf("\n EL APROXIMADO DE RAIZ ES = [%.6f]",raiz);
    printf("\n\n");
    
	return 0;
}



