/*
*Autor: Angela Monreal
*Fecha: 11/10/2019
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

char palabra[20];
int x,i=0,j=0;

printf("Introduce una palabra (sin espacios ni caracteres especiales):\n");
scanf("%s",&palabra);

x=strlen(palabra);
x=x-1;

for(i=0,j=x;i<=x/2;i++,j--){
	if(palabra[i]==palabra[j]){
	printf("Es palindromo\n");
	break;
	}else{
	printf("No es palindromo\n");
	getch();
	break;}
}

//**********************************ACTIVIDAD 2*********************************
	system("pause");
	return 0;
}
