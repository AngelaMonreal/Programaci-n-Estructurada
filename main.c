/*
*Autor: Angela Monreal
*Fecha: 20/09/19
*Grupo: 006
*Horario: Viernes 7:00 a.m. - 9:00 a.m
*Matricula: 1848122
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//**************ACTIVIDAD 1*****************
int promedio = 0, cal, i;               		//Inicializacion de variables

for (i=0; i<10; i++){                           /*Ciclo tipo for que marca el numero de veces que se estará ejecutando
												y si va en decremento o incremento*/
 printf("Ingrese su calificacion:\n");
 scanf("%d", &cal);                             //Ingreso de calificacion del usuario y lectura del mismo
 promedio = promedio + cal;                     /*Operacion aritmetica que determina la sumatoria segun vayan siendo añadidas
												las calificaciones*/
}
promedio = promedio / 10;                       /*Operacion aritmetica que determina el promedio*/
if(promedio > 7)                                /*Condicional para marcar cuando el usuario ha aprobado o en su defecto
												reprobado*/
 printf("Aprobado\n");
else
    printf("Reprobado\n");
    
//**************ACTIVIDAD 2*****************

int potencia, base, j, res=1;                 //Inicializacion de variables

printf("Ingrese la base:\n");                 /*Se le pide al usuario ingresar base y potencia con las cuales estaremos
												trabajando en el codigo*/
scanf("%d", &base);
printf("Ingrese la potencia:\n");
scanf("%d", &potencia);
for(j=1;j<=potencia;j++){                       /*Ciclo tipo for que marca el numero de veces que se estará ejecutando
												y si va en decremento o incremento*/
 res *= base;                       			//Operacion aritmetica que determina el resultado de la potencia
}
printf("Potencia\n%d\n\n", res);

	system("pause");
	return 0;
}
