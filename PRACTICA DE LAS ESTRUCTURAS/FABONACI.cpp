#include <stdio.h>
//#include <stdio.h>
int main (){
    int POSICION;
    long long int a=0, b=1,c=1;
    //double aureo;
    printf("\nDIGITE UN NUMERO:  ");
	scanf ("%d",&POSICION);
    
    scanf ("1  ");
    for(int i=1;i<POSICION;i++){
        //aureo=0;
    	c=a+b;
    	printf ("%lli\t", c);
    	a=b;
    	b=c;
    	//aureo= double(a)/double(c); 
        double aureo =((double)c)/a;
		printf("%1.8f\n",aureo); 
    }
    printf("\n ");

    return 0; 
	}
	
	
