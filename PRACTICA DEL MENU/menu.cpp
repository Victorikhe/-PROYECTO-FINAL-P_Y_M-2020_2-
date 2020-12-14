#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i; 
int j;
int TALLA;
int TALLA2;

int main()
{
int d[3][3]={{0,5,7},{7,8,9},{1,4,6}};
int r[3][1];
int suma;
int opcion;
int a[10];
printf("¿Qué desea hacer?: \n 1. Ingresar 2 vectores. \n 2. Generar 2 vectores aleatorios. \n 3. Suma de2 arreglos. \n 4. Generar la suma de elementos de un arreglo. \n 5.Llenar una matriz de 3x3. \n 6. Matriz cuadrada de numeros aleaorios 4x4. \n 7. Sumar 2 matrices bidimencionales. \n 8. Multiplicar 2 arreglos matriciales. \n");
scanf("%d", &opcion);
switch(opcion){
case 1:
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
break;
case 2:
srand(time(NULL));
printf("Tu primera serie de números aleatorios es: \n");
for(i=0; i<5; i++){
A[i] = rand()%5;
printf("%d", A[i]);
}
printf("\nTu segunda serie de números aleatorios es: \n");
for(i=0; i<6; i++){
B[i]= rand()%6;
printf("%d", B[i]);
}
break;
case 3:
for( int p=0; p<1; p++){
for(i=0; i<3; i++){
for(int j=0; j<3; j++){
suma= d[i][j]+b[j];
}
r[i][p]=suma;
printf("%d",r[i][p]);
}
}
return 0;
break;
case 4:
suma=(v[0]+v[1]+v[2]);
printf("La suma es: %d", suma);
return 0;
case 5:
for(x=0; x<3; x++){
for(y=0; y<3; y++){
printf("Ingresa el valor %d:", x , y);
scanf("%d", &z[x][y]);
}
}
printf(" Tu matriz es:\n " );
for(x=0; x<3; x++){
for(y=0; y<3; y++){
printf(" %d ",z[x][y]);
}
printf(" \n ");
}
break;
case 6:
srand(time(NULL));
printf("Tu matriz de números aleatorios es: \n");
for(m=0;m<4; m++){
for(n=0; n<4; n++){
p[m][n] = rand()%5;
printf("%d", p[m][n]);
}
printf("\n");
}
break;
case 7:
srand(time(NULL));
printf("Tu matriz de números aleatorios es: \n");
for(X=0; X<4; X++){
for(Y=0; Y<4; Y++){
W[X][Y] = rand()%5;
printf(" %d ", W[X][Y]);
}
printf(" \n ");
}
printf("Tu 2da matriz de números aleatorios es: \n ");
for(f=0; f<4; f++){
for(c=0; c<4; c++){
w[f][c] = rand()%5;
printf(" %d ", w[f][c]);
}
printf(" \n ");
}
for(j=0; j<4; j++){
suma=W[X][Y]+w[f][c];
q[X][j] =suma;
}
printf("La suma de tus matrices es: %d\n", q[X][Y]);
break;
}
}
