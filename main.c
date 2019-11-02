/*
*Autor: Angela Monreal
*Fecha: 01/11/2019
*Grupo: #006
*Horario: 7:00 a.m - 9:00 a.m
*Matricula: 1848122
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//**********************************ACTIVIDAD 1*********************************	
char car[7] = "ABCDEFG";            //Declaramos la cadena de caracteres asignada
char  *p;                           //Declaracion de puntero
int i, tam=0;                       //Declaracion de variables
p = &car;                           // Se le asigna a ’p’ la dirección de ’i’

for(i=0;i<7;i++){                   //Ciclo tipo for para leer la cantidad de vocales declaradas
	if(car[i]=='A'||car[i]=='E'||car[i]=='I'||car[i]=='O'||car[i]=='U')
	tam++;
}

printf("Direccion: %d", p);         //Imprimir resultados finales
printf("\nNumero de vocales: %d", tam);


//q = p; // Se le asigna a ’q’ la direcci ´on almacenada en ’p’ (la misma de ’i’) 

//**********************************ACTIVIDAD 2*********************************	

	int m=10, n=23, *p1,*o;              //Declaracion de variables
	p1=&m;                               //Asignacion de punteros
	o=&n;
	
	//Lógica utilizada para la suma de las posiciones donde están asignados los punteros "suma = *p+*o;"
	
	printf ("\nSuma: %d", *p1+*o);       //Imprimir resultados finales
	
	return 0;
}
