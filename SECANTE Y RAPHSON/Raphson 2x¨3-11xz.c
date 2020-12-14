
#include <stdio.h>
#include <math.h>

int main ()
{
	float f(float x)
{
  float y;
  y= cos(x/2)-sin(2*x);
  return y;
}
float fprima(float x)
{
   float y;
   y=-(sin(x/2)/2)-2*cos(2*x);
   return y;

}

float newtonRaphson(float X0,int iter)
{
   int i=0;
   float xi, xim,erp;
   xi=X0;
   printf("i \t Xi \t\t Xi+1 \t\t Err\n");
   do
   {
      xim= xi - f(xi)/fprima(xi);
      erp= fabs((xim-xi)/xim)*100;
      printf("%i \t %.8f \t %.8f \t %.8f \n",i,xi,xim,erp);
      i++;
      xi=xim;
   }while(i<iter);
   printf("\n EL APROXIMADO DE RAIZ ES = [%.6f]",xi);
   return xim;
}
	system ("COLOR B");
    float X0=3.3;
    int iter=5;
    float raiz;
    raiz=newtonRaphson(X0,iter);
    printf("\n\n");
	return 0;
}


