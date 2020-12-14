#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
	int binario[100], x, i=0;
	printf("BIENVENIDO USUARIO\n");
	cout<<"\nDIGITA UN NUMERO:  ";
	cin>>x;
	do{
		binario[i]=x%2;
		x=x/2;
		i++;
	} while(x!=0);
	for (int CONTI=i;CONTI<100;CONTI++){
		binario[CONTI]=9;
	}
	for (i=99;i>=0;i--){
		if(binario[i]==0)cout<<binario[i];
		if(binario[i]==1)cout<<binario[i];
	}
}
