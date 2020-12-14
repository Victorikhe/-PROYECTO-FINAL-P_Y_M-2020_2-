#include <stdlib.h>
#include <stdio.h>

int main()
{
 float altura, peso, IMC;

    printf("Introduce tu altura (en metros): ");
    scanf("%f", & altura);

    printf("Introduce tu peso (en kilogramos): ");
    scanf("%f", & peso);

    IMC = peso/(altura*altura);

    printf("Segun tu indice de masa corporal: ", IMC );

    if (IMC<18.5)
        printf("Tu categoria es [PESO BAJO]");
        else
     if (18.5<IMC&&IMC<=24.9)
        printf("TU PESO ES IDEAL");
        else
     if (25<IMC&&IMC<29.9)
        printf("Tu categoria es [SOBREPESO]"); 
        else
     if (30<IMC&&IMC<34.5)
        printf("Tu categoria es [OBESIDAD TIPO 1]"); 
        else
      if (35<IMC&&IMC<39.9)
        printf("Tu categoria es [OBESIDAD TIPO 2]"); 
        else
     if (40<=IMC)
        printf("Tu categoria es [HIPER OBESIDAD]"); 


return 0;

}
