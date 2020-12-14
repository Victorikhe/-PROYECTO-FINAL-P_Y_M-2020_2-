#include <stdio.h>
#include <math.h>
main (){
float MASA,ACELERACION;
//////////////////////////////////////////////////////////////////
printf("BIENVENIDO USUARIO! \n Calculemos la fuerza de la gravedad \n INGRESA POR FAVOR LA MASA DE TU OBJETO: ");
scanf ("%f",&MASA);
///////////////CALCULO//////////////
ACELERACION=9.8*MASA;
//////////////////////////////////////////////////////////////////////////
printf ("\n La gravedad de tu objeto es de %f",ACELERACION);
return 0;
}
