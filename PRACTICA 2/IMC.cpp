#include <stdio.h>
char nombre[10];
int edad;
float altura,IMC, peso;
main()
{

 
    printf("Hola, por favor ingresa tu nombre: ");
	scanf("%s",&nombre);
	
    printf("Por favor ingresa tu edad: ");
	scanf("%d",&edad); 
	
    printf("Introduce tu altura (en metros): ");
    scanf("%f", &altura);

    printf("Introduce tu peso (en kilogramos): ");
    scanf("%f", &peso);

    IMC=peso/(altura*altura);
    printf("\nHola %s \n tu edad es de %d  \n tu estatura es %1.2f metros \n Tu indice de masa corporal es %f:",nombre,edad,altura,IMC);
    return 0;
	}
