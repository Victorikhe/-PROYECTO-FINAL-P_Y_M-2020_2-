#include <stdio.h> 
#include <stdlib.h>     /* srand, rand */
#include <time.h> 

int main() { 
int i; 
int j;
int TALLA;
int TALLA2;
srand (time(NULL)); /* initialize random seed: */

printf("tamano del arreglo 1 \n"); 
scanf("%i",&TALLA); 
int age[TALLA]; 
for(i = 0;i < TALLA;i++) { 
	age[i] = rand() % 10;
} 

printf("\ntamano del arreglo 2 \n"); 
scanf("%i",&TALLA2); 
int age2[TALLA2]; 

for(j = 0;j < TALLA2; j++) { 
	age2[j] = rand() % 10; 
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
