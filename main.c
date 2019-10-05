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

	int ventasEmpleadoOficinaEdificio[6][10][2], i=0, j=0, k=0; //Declaracion de variables
	
	for(i=0; i<6; i++){                                         //for anidado para autollenado
		for(j=0; j<10; j++){
			for(k=0; k<1; k++){
                ventasEmpleadoOficinaEdificio[i][j][k]=i*j+k+1;
			}
		}
	}
	ventasEmpleadoOficinaEdificio[3][7][1] = 4234;              //Asignacion de valor al array
																//Imprimir valor del array
	printf("El empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido %d unidades\n",ventasEmpleadoOficinaEdificio[3][7][1]);
/*
a) ¿Cuantos elementos componen el array multidimensional?
120
b) ¿Qué ocurre si intentamos mostrar por pantalla un valor con un índice que no
está definido para ese array multidimensional?
Arroja valores aleatorios
*/

//**********************************ACTIVIDAD 2*********************************
int sum = 0;
for(i=0; i<6; i++){                                         //for anidado para autollenado y aumento en el valor mas 10
		for(j=0; j<10; j++){
			for(k=0; k<=1; k++){
				sum=ventasEmpleadoOficinaEdificio[i][j][k];
                ventasEmpleadoOficinaEdificio[i][j][k]=(sum+10);
			}
		}
	}
	
	printf("El empleado numero 3 de la oficina numero 7 del edificio numero 2 ha vendido %d unidades\n",ventasEmpleadoOficinaEdificio[3][7][1]);
	
	system("pause");
	return 0;
}
