#include <stdio.h> 
int main() { 
int i; 
int j;
int TALLA;
int TALLA2;
printf("tamano del arreglo 1 \n"); 
scanf("%i",&TALLA); 
int age[TALLA]; 
for(i = 0;i < TALLA;i++) { 
printf("ingresa el valor %i\n",i+1); 
scanf("%i", &age[i]); 
} 
printf("\ntamano del arreglo 2 \n"); 
scanf("%i",&TALLA2); 
int age2[TALLA2]; 
for(j = 0;j < TALLA2; j++) { 
printf("ingresa el valor %i\n",j+1); 
scanf("%i", &age2[j]); 
} 
printf("Los valores del arreglo 1 son:\n"); 
for(i = 0; i < TALLA; i++){
printf("%i \n",age[i]); 
	}
printf("\nLos valores del arreglo 2 son:\n"); 
for(j = 0; j < TALLA2; j++){
printf("%i \n",age2[j]); 
	}

return 0; 
}



