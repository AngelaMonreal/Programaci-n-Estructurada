/*
*Autor: Angela Monreal
*Fecha: 24/08/2019
*Grupo: #006
*Horario: 7:00 a.m - 9:00 a.m
*Matricula: 1848122
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float x, a, b, y, c;
	float constante=0.6666666; //resultado de (2/3)
	
	//Actividad 1 Operacion algebraica 1

	printf("Ingrese un numero del 0 al 10:\n");
	scanf("%f", &x);

	if(x>=0 && x<=10){
		a= ((x-1)/4)-((x-5)/36);
		printf("El resultado para la primera operacion algebraica es: %f\n", a);
		
	//Actividad 1 Operacion algebraica 2
	
		b= (6)*(((x+1)/8)-(((2*x)-3)/16));
		printf("El resultado para la segunda operacion algebraica es: %.2f\n", b);
	}else{
		printf("El numero que ingresaste no es valido, intentalo de nuevo\n");}
		
	//Actividad 2 Operacion algebraica 1

	printf("Ingrese un numero del 0 al 10:\n");
	scanf("%f", &y);
	
	if(y>=0 && y<=10){
		c=((y-(1-((y-2)/3)))+1);
		c= constante*c;
		printf("El resultado para la tercera operacion algebraica es: %.2f\n", c);
	}else{
		printf("El numero que ingresaste no es valido, intentalo de nuevo\n");}

	system("pause");
	return 0;
}
