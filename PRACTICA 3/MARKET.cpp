#include <stdio.h>

int main ()
{
    int totalbolsas;
    float costoProducto,porcentaje,descuento,TOTAL,costoBolsas;
    char dep;
    
    
    printf("BIENVENIDO USUARIO A [UABC MARKET]\n\n DESEAS CONSULTAR ALGUN PRODUCTO?\n INDICA EL DEPARTAMENTO\n\n\t");
    printf("P) Perfumeria\n\t");
    printf("S) Salchichoneria\n\t");
    printf("C) Carniceria\n\t");
    printf("L) Limpieza\n\t");
    printf("MARCA LA OPCION DE PREFERENCIA (P,S,C,L): ");
    scanf("%c",&dep);
    printf("INGRESA EL COSTO DEL PRODUCTO DE INTERES: ");
    scanf("%f",&costoProducto);    
    printf("INDIQUE LA CANTIDAD DE BOLSAS QUE REQUERIRA: ");
    scanf("%d",&totalbolsas);
    
    switch (dep)
    {
    	case 'P':
    	          porcentaje=0.20;
    	          break;
    	case 'S': 
    	          porcentaje=0.40;
    	          break;
    	case 'C':
    		      porcentaje=0.20;
    	          break;
    	case 'L':
    		      porcentaje=0.35;
    	          break;
	}
    descuento=costoProducto*porcentaje;
    costoBolsas= totalbolsas*0.10;
    TOTAL= costoProducto - descuento + costoBolsas;
    printf("\n EL COSTO DE TU PRODUCTO ES DE %.2f",costoProducto);
    printf("\n EL DESCUENTO INDICADO ES  %.2f",descuento);
    printf("\n VALOR ADICIONAL POR BOLSA %.2f",costoBolsas);
    printf("\n TOTAL A PAGAR: %.2f",TOTAL);
	return 0;
}

