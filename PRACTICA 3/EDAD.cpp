#include <iostream>
using namespace std;
 main(){
int edad;
printf("\n BIENVENIDO USUARIO \n ");
printf("indica tu edad -> ");
scanf("%d",&edad);
printf ( "\n Ok,tu edad es:[%d] eso indica que ",edad);

if(edad>=18){
printf("usted es mayor de edad");
}
else
printf("usted es menor de edad");
return 0;
}
