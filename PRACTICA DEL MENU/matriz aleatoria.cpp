#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int x,y, A [ 3 ][ 3 ];
srand(time(NULL));
printf("Tu matriz ALEATORIA es:  \n");
for(x=0;  x<3;  x++){
for(y=0;  y<3;  y++){
A [ x ][ y ] = rand( )%5;
printf("[%d] " , A [ x ]  [ y ]);
}
printf("\n");
}
}
