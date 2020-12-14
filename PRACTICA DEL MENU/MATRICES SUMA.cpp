#include<stdio.h>

main()
{
	int i,j,fil,col,dim=100;
	float MatA[dim][dim],MatB[dim][dim],Res[dim][dim];
	
	printf("\n Programa de suma de matrices\n");
	
	printf("\n Especifica la dimension de matrices\n");
	printf("Filas: ");
	scanf("%d",&fil);
	printf("Columnas: ");
	scanf("%d",&col);
	
	printf("\n");
	printf("\n Introduce los datos de la matriz A:\n");
	
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++) 
		{
		   printf("a[%d][%d]=",i,j);
	       scanf("%f",&MatA[i][j]);
		}
	}
	
	printf("\n");
	printf("\n Introduce los datos de la matriz B:\n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++) 
		{
		   printf("b[%d][%d]=",i,j);
	       scanf("%f",&MatB[i][j]);
		}
	}
	
		for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++) 
		{
		   Res[i][j]=MatA[i][j]+MatB[i][j];
		}
	}
	
	
	printf("\n");
	printf("\n El resultado de la suma de las matrices es:\n");
		for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++) 
		{
		   printf("%.2f   ",Res[i][j]);
		}
		printf("\n");
	}
	
		printf("\n");
		return 0;

}
