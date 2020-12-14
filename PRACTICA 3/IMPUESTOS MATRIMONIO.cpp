#include<stdio.h>
int main ()
{
	int salario;
	char EstadoCivil;
	float TASA, TariFinal,total;
	
	printf("Bienvenido usuario, para desplegar en pantalla su totalidad necesitamos los siguientes datos\n"); 
	printf ("INGRESE SU ESTADO CIVIL TAL Y COMO SE INDICA EN PANTALLA/n:  CASADO = c / SOLTERO = s\n\t");
	scanf("%c",&EstadoCivil); 
	printf("Ingrese la totalidad de su sueldo MENSUAL:\n  ");
    scanf("%d",&salario);
    
 if (EstadoCivil=='c')
 
 	{
	 
    if(salario<64000)
	
    { 
	 
    TASA=0.10;
    TariFinal=salario*TASA;
	}
    else
    {
    TASA=0.25;
	TariFinal=salario*TASA;	
	}
	
	}
	
	
  if (EstadoCivil=='s')
  
  
  
  {
  	if (salario>32000)
  	{
  	 TASA=0.25;
  	 TariFinal=salario*TASA;
	}
	else 
	{
	TASA=0.10;
	TariFinal=salario*TASA;
	
	}
	
	}
		
	total=salario-TariFinal;
  printf("DEBIDO A QUE SU ESTADO CIVIL ES LO CORRESPONDIENTE PARA [%c]\n", EstadoCivil);
  printf("Y SIENDO TU INGRESO UN TOTAL DE %d\n", salario);
  printf("TU PORCENTAJE DE IMPUESTO ES DE %1.2f\n",TASA);
  printf("TU TARIFA FINAL DE IMPUESTOS ES DE %1.f\n", total);
	

	 return 0;
  }
    


