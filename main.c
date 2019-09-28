/*
*Autor: Angela Monreal
*Fecha: 27/09/19
*Grupo: 006
*Horario: Viernes 7:00 a.m. - 9:00 a.m
*Matricula: 1848122
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//**********************************ACTIVIDAD 1*********************************

	/*int numeroDeCoches[24]={25,14,52,37,84,24,46,7,89,9,78,54,4,25,6,76,89,78,64,44,55,67,8,6};  Asignamos valores a un arreglo
																								   unidimensional de 24 posiciones
	int R=21;                  Asignamos a R el valor de 21, despues de
							   haberle asignado un 2 y ver como funcionaba
							   
	numeroDeCoches[R]= 57;     Asignamos al arreglo en la posicion R
							   el valor de 57
	
	printf("Horas: %d\nTotal de coches: %d\n", R, numeroDeCoches[R]);           Mostramos en pantalla la hora segun R y el
																				total de coches correspondientes

	NOTA: Comentaricé la actividad 1 para poder percibir mejor lo que ocurre en la actividad 2  */
//**********************************ACTIVIDAD 2*********************************

    int numeroDeCoches[24]={25,14,52,37,84,24,46,7,89,9,78,54,4,25,6,76,89,78,64,44,55,67,8,6};
	int A=8, B=4, R;  //Asignamos el valor de 8 a la variable de tipo entero A y 4 a la variable B
	R=(A/B);          //Asignamos el valor de la operación aritmética A entre B
	
	numeroDeCoches[R]= 57;

	printf("Horas: %d\nTotal de coches: %d\n", R, numeroDeCoches[R]);
	
	system("pause");
	return 0;
}
