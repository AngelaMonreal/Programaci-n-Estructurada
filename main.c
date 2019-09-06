/*
*AUTOR: Angela Monreal
*FECHA: 06/09/2019
*GRUPO: 006
*HORARIO: 7:00 a.m. - 9:00 a.m.
*MATRICULA: 1848122
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    //**************************************************************************
	//ACTIVIDAD 1
	int c;
	
	printf("Ingrese su calificacion\n");       //Se ingresa variable tipo entero
	scanf("%d", &c);
	
	if(c>=5 && c<=10){                         //Se valida para las condiciones especificadas
		printf("APTO\n");
	}if(c>=0 && c<5){
		printf("NO APTO\n");
	}if(c<0 || c>10){                          //De no cumplir con las condiciones anteriores marca ERROR
		printf("ERROR: Nota incorrecta\n");
	}
	//**************************************************************************
	//ACTIVIDAD 2
	int dia;
	
	printf("\n\nSelecciona el dia de la semana\n");            //Se ingresa variable tipo entero
	scanf("%d", &dia);
	
	if(dia==1){           //Se valida cada una de las condiciones y en donde cumpla con ella se muestra en pantalla el dia de la semana
		printf("\nLunes\n");
	}if(dia==2){
		printf("Martes\n");
	}if(dia==3){
		printf("Miercoles\n");
	}if(dia==4){
		printf("Jueves\n");
	}if(dia==5){
		printf("Viernes\n");
	}if(dia==6){
		printf("Sabado\n");
 	}if(dia==7){
		printf("Domingo\n");
	}if(dia<1 || dia>7){                      //De no ser un dia valido se ejecuta la ultima condicion y muestra un mensaje de error
		printf("ERROR: Dia incorrecto\n");
	}
	//**************************************************************************
	//ACTIVIDAD EXTRA
	
	int opcion;                              //Se ingresa una variable tipo entero
											 //Se muestra un menú al usuario
	printf("\n\nMenu\n1: Opcion 1\n2: Opcion 2\n3: Opcion 3\n4: Opcion 4\n5: Opcion 5\n");
	printf("\nIngrese una opcion\n");      //Pide al usuario que ingrese una opcion del 1 al 5
	scanf("%d", &opcion);
	
	switch(opcion){
		case 1:                              //Se declara un switch y se comienza a evaluar para cada numero ingresado por el usuario
			printf("Usted selecciono la opcion 1\n\n");
			break;
		case 2:
			printf("Usted selecciono la opcion 2\n\n");
			break;
		case 3:
			printf("Usted selecciono la opcion 3\n\n");
			break;
		case 4:
			printf("Usted selecciono la opcion 4\n\n");
			break;
		case 5:
			printf("Usted selecciono la opcion 5\n\n");
			break;
		default:                            //En caso de que el numero ingresado sea menor a 1 o mayor a 6 se manda un mensaje de error
			printf("ERROR: Opcion no valida\n\n");
	}

	system("pause");
	return 0;
}
