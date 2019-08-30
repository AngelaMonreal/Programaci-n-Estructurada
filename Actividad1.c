#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float x, a, b;

	printf("Ingrese un numero del 0 al 10:\n");
	scanf("%f", &x);

	if(x>=0 && x<=10){
		a= ((x-1)/4)-((x-5)/36);
		printf("El resultado para la primera operacion algebraica es: %f\n", a);
	}else{
		printf("El numero que ingresaste no es valido, intentalo de nuevo\n");}



	system("pause");
	return 0;
}
