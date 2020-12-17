#include <stdio.h>
#include<math.h>
float DerivAdelante(float h, float(xi));
float DerivAtras(float h, float(xi));
float DerivAcentrada(float h, float(xi));
float Error(float derivada_numerica);
float xi,h,o;
int main()
{
 printf("Bienvenido usuari@, Que incremento desea en la impresion de sus resultados? \n h=0.5 \n h=0.2 \n h=0.1 \n h=0.01 \n");
 printf("DIGITE LA OPCION DE PREFERENCIA: ");
 scanf("%f",&o);
 
    xi=0.6; h=o;
    printf("\n\tCalculando la derivada de f(x)=1-e^(-x/0.2) en el punto xi = 0.6\n\n");
    printf("En posicion |ADELANTE| El valor para h=%.1f es: %.4f marcando su error porcentual en %f%%\n ",h,DerivAdelante(h,xi),Error(DerivAdelante(h,xi)));
     printf("En posicion | ATRAS | El valor para h=%.1f es: %.4f marcando su error porcentual en %f%%\n ",h,DerivAtras(h,xi),Error(DerivAtras(h,xi)));
     printf("En posicion |CENTRADA| El valor para h=%.1f es: %.4f marcando su error porcentual en %f%%\n ",h,DerivAcentrada(h,xi),Error(DerivAcentrada(h,xi)));
     
}
float DerivAdelante(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2;
    fxi = 1-exp(-xi/0.2); 
    fxip1 = 1-exp(-(xi+h)/0.2); 
    fxip2 = 1-exp(-(xi+(2*h))/0.2); 
    dfxi = (-fxip2+4*fxip1-3*fxi)/(2*h);
    return dfxi; 
}
float DerivAtras(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2;
    fxi = 1-exp(-xi/0.2);
  fxip1 = 1-exp(-(xi-h)/0.2);
  fxip2 = 1-exp(-(xi-2*h)/0.2);
    dfxi = (3*fxi-4*fxip1+fxip2)/(2*h);
    return dfxi; 
}
float DerivAcentrada(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,fxip3,fxip4;
    fxip1 = 1-exp(-(xi+h)/0.2);
    fxip2 = 1-exp(-(xi+2*h)/0.2);
    fxip3 = 1-exp(-(xi-h)/0.2);
	fxip4 = 1-exp(-(xi-2*h)/0.2);
    dfxi= (-fxip2+8*fxip1-8*fxip3+fxip4)/(12*h);
    return dfxi; 
}
	float Error(float derivada_numerica){
  float Error;
  Error = fabs((derivada_numerica-0.24893)/derivada_numerica)*100;
  return Error;
}
