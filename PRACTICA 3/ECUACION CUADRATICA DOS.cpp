#include<stdio.h>
#include<math.h>
#include<conio.h>
 
int main ()
{
float a,b,c,d,x1,x2;
printf ("   BIENVENIDO USUARIO!   \n Determinemos tu [ECUACION CUADRATICA]");
printf ("\n\n\n Introduce el coeficiente del termino cuadratico [a]:");
scanf ("%f",&a);
printf ("\n Introduce el coeficiente del termino lineal [b]:");
scanf ("%f",&b);
printf ("\n Introduce el coeficiente del termino independiente [c]:");
scanf ("%f",&c);
if (a!=0){
printf ("\n\tCALCULANDO...");}
else {
 
printf ("\n\n Lo sentimos usuario, tu operacion no es posible"); }
{
d=sqrt((b*b)-(4*a*c));
}
if (d>0)
{
x1=((b*-1)+(d))/(2*a);
x2=((b*-1)-(d))/(2*a);
printf ("\n\n\t El resultado de x1 es: %1.2f",x1);
printf ("\n\t El resultado de x2 es: %1.2f",x2);}
else{
 
printf("\n\n [ERROR] LAS SOLUCIONES NO SON REALES ");}
getch ();
return 0;
}
