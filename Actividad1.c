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
	float x, a, b, y, c, d;
	float constante=0.6666666; //resultado de (2/3)
	
	/*Actividad 1 Operacion algebraica 1
	En esta seccion del programa realizamos la primera opreacion algebraica
	indicada en la Actividad 1*/

	printf("Ingrese un numero del 0 al 10:\n");
	scanf("%f", &x);

	if(x>=0 && x<=10){ /*Agregamos una condicion para restringir el numero
	                   que el usuerio puede ingresar limitandola de 0 a 10*/
	                   
		a= ((x-1)/4)-((x-5)/36); /*Agregamos la opreacion algebraica*/
		printf("El resultado para la primera operacion algebraica es: %.2f\n", a);
		
	//Actividad 1 Operacion algebraica 2
	
		b= (6)*(((x+1)/8)-(((2*x)-3)/16));  /*Con la misma condicion realizamos
		                                    la segunda operacion algebraica*/
		                                    
		printf("El resultado para la segunda operacion algebraica es: %.2f\n", b);
	}else{ /*En dado caso que el usuario acceda fuera del rango limitado en
	       el programa entonces pasará fuera de la condicion lanzando un mensaje
	       emergente que le indicará que debe intentar con otro numero*/
	       
		printf("El numero que ingresaste no es valido, intentalo de nuevo\n");}
		
	//Actividad 2 Operacion algebraica 1

	printf("Ingrese un numero del 0 al 10:\n");
	scanf("%f", &y);
	
	if(y>=0 && y<=10){ /*Agregamos nuevamente una condicion restringiendo el
	                    numero que el usuario puede ingresar dandole el rango de 0 a 10*/
	                    
		c=((y-(1-((y-2)/3)))+1); /*Agregamos la tercera opreacion algebraica*/
		c= constante*c;
		printf("El resultado para la tercera operacion algebraica es: %.2f\n", c);
		
	//Actividad 2 Operacion algebraica 2
	
	    d= (2-((-2*(y-1))-((y-3)/2))); /*Apoyandonos de la condicion declarada con anterioridad
	                                   realizamos la ultima opreacion algebraica*/
	                                   
	    printf("El resultado para la cuarta operacion algebraica es: %.2f\n", d);
	    
	}else{ /*En dado caso que el usuario acceda fuera del rango limitado en
	       el programa entonces pasará fuera de la condicion lanzando un mensaje
	       emergente que le indicará que debe intentar con otro numero*/
	       
		printf("El numero que ingresaste no es valido, intentalo de nuevo\n");}

	system("pause");
	return 0;
}
