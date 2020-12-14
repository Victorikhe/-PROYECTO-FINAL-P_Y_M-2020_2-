#include <stdio.h>
int num; //Guardar nuestro numero entero
//int res; //Guardar nuestro residuo
int main() {
  printf("Ingresa un numero entero y positivo\n");
  scanf("%d",&num);
  //res = num%2; //Calculando el residuo de la division entre 2
  if (num%2==0) {
    /* code */
    printf("El numero es par\n");
  }
  else 
    /* code */
    printf("El numero es impar\n");
  return 0;
}
