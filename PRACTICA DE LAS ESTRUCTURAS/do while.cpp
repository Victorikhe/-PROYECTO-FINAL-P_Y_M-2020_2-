#include <stdio.h>
int main ()
{
int x [4];
int j=0;
int i=0;
int r; 
printf ("DIGITE SU CODIGO DE ACCESO: \n");
do{
    printf("INGRESE DIGITO %d  ", j+1);
    scanf("%d",&x[j]);
    j=j+1; 
    
} while (j<=3);

j=0;

do{
    do{
    if (j!=i &&x[j]==x[i]){
      r=1;
}
        i=i+1;
 } while (i<=3); 
 
 i=0;
 j=j+1;
 
}while (j<=3);
if (r==0){
printf ("codigo valido");
}
else{
    printf ("codigo no valido");
}
}

