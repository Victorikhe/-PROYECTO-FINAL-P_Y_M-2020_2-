#include <stdio.h>
#include <math.h>


int main ()
{
	float f(float x)
{
   float y;
    y= 2*x*x*x-11*x*x+17.7*x-5;
   
   return y;
}

float secante(float x0,float x1, int iter)
{
   int i=1;
   float xi, xi1,xim1,erp;
   float f1;
   printf("i \t Xi \t\t Xi-1 \t\t Xi+1 \t\t ~=f'(x)        Err\n");
   xi=x1;
   xim1=x0;
   do
   {
      xi1= xi - (f(xi)*(xim1-xi))/(f(xim1)-f(xi));
      erp= fabs((xi1-xi)/xi1)*100;
      f1= (f(xim1)-f(xi))/(xim1-xi);
      printf("%i \t %.8f \t %.8f \t %.8f \t%.8f        %.4f\n",i,xi,xim1,xi1,f1,erp);
      xim1=xi;
      xi=xi1;
      i++;
   }while(i<=iter);
   printf("\n EL APROXIMADO DE RAIZ ES = [%.8f]",xi);
   return xi1;
}
	float x0=0.3, x1=0.5,raiz;
    int iter=5;

    raiz=secante(x0,x1,iter);
    
system ("COLOR B");

	return 0;
}

