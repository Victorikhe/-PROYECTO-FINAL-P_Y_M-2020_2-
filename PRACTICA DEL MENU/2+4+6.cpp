#include <stdio.h>

double PE(double v1[], int d);

int main()
{	
	const int largo = 3;
	double vector_1[] = {2,4,6};
	double resultado = PE (vector_1, largo);

	printf(" La suma de (%.f, %.f, %.f)  es igual a %.f\n",
		vector_1[0], vector_1[1], vector_1[2],
		resultado);
	return 0;
}
double PE (double v1[], int d)
{
	double resultado = 0;
	int i;
	for (i=0; i < d; i++) {
		resultado += v1[i];
	}
	return resultado;
}
