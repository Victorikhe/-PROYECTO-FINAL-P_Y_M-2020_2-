
#include <stdio.h>
int main()
{
int A,B, a[3][3];
for(A=0; A<3; A++){
for(B=0; B<3; B++){
printf("Ingresa el valor %d:", A , B);
scanf("%d", &a[A][B]);
}
}
printf(" Tu matriz es:\n " );
for(A=0; A<3; A++){
for(B=0; B<3; B++){
printf(" %d ",a[A][B]);
}
printf(" \n ");
}
}
