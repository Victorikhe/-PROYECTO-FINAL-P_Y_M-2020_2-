
#include <stdio.h>
#include <math.h>

int main ()
{
	float f(float x)
{
  float y;
  y= (8*sin(x)*exp(-x))-1;
  return y;
}
float fp(float x)
{
   float y;
   y = (8*exp(-x)*cos(x))-(8*exp(-x)*sin(x));
   return y;

}

float newtonRaphson(float X0,int iter)
{
   int i=0;
   float xi, xm,erp;
   xi=X0;
   printf("i \t Xi \t\t Xi+1 \t\t Err\n");
   do
   {
      xm= xi - f(xi)/fp(xi);
      erp= fabs((xm-xi)/xm)*100;
      printf("%i \t %.8f \t %.8f \t %.8f \n",i,xi,xm,erp);
      i++;
      xi=xm;
   }while(i<iter);
   printf("\n EL APROXIMADO DE RAIZ ES = [%.6f]",xi);
   return xm;
   
}
    
	system ("COLOR B");
    float X0=0.3;
    int iter=5;
    float raiz;
    raiz=newtonRaphson(X0,iter);
    printf("\n\n");
	return 0;
}



