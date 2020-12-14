#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double RADIO=0;
    const double volum_Esfera =0;
    const double pi = 3.141593;

int main()
{
	
    
  ////////////////////////////////////////////////////////////////////////////////////
    printf("\n\ BIENVENIDO QUERIDO USUARIO ");
    printf("\n\tIntroduzca el radio de la esfera, en metros: ");
    scanf("%lf", &RADIO);

    /////////////////////////////////////////////////////////////////////////
    volum_Esfera= 4/3 * pi* pow(RADIO,3);
    printf("\n\tEl volumen de la esfera es %lf metros c%cbicos.\n\n", volum_Esfera,163);
    return 0;
}
