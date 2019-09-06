/*
*Autor: Angela Monreal
*Fecha: 30/08/2019
*Grupo: 006
*Horario: 7:00 a.m. - 9:00 a.m.
*Matricula: 1848122
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
<<<<<<< HEAD

    //**************************************************************************
	//ACTIVIDAD 1
	int c;
	
	printf("Ingrese su calificacion\n");
	scanf("%d", &c);
	
	if(c>=5 && c<=10){
		printf("APTO\n");
	}if(c>=0 && c<5){
		printf("NO APTO\n");
	}if(c<0 || c>10){
		printf("ERROR: Nota incorrecta\n");
	}
	//**************************************************************************
	//ACTIVIDAD 2
	int dia;
	
	printf("\n\nSelecciona el dia de la semana\n");
	scanf("%d", &dia);
	
	if(dia==1){
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
	}if(dia<1 || dia>7){
		printf("ERROR: Dia incorrecto\n");
	}
	//**************************************************************************
	//ACTIVIDAD EXTRA
	
	int opcion;
	
	printf("\n\nIngrese una opcion\n");
	scanf("%d", &opcion);
	
	switch(opcion){
		case 1:
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
		default:
			printf("ERROR: Opcion no valida\n\n");
	}

=======
    int numero1, numero2;                            //Declaramos las variables que estaremos utilizando en nuestro código

	/*ACTIVIDAD 1*/
	
	printf("Actividad 1\n");

	printf("Introduzca el primer numero\n");
	scanf("%d", &numero1);                           //Introduccion de variables
	printf("Introduzca el segundo numero\n");
	scanf("%d", &numero2);

	if(numero1>numero2){                             /*Asignamos una condición que determine si la primera
													 variable es mayor que la segunda.*/
		printf("El numero mayor es: %d\n", numero1);
	}else{                                           /*Si la condicion es falsa entonces la segunda variable
													 es mayor que la primera*/
		printf("El numero mayor es: %d\n", numero2);
	}
	
	/*ACTIVIDAD 2*/
	
	printf("\nActividad 2\n");
	
	int A=5;                 //Declaracion de variables con valor asignado
	int B=3;
	int C=-12;
	
	if(A>3){
		printf("A es mayor a 3\n");                                             /*Ingresamos las condiciones a ejecutar
																				en caso de que se cumplan imprimir el resultado*/
	}if(A>C){
		printf("A es mayor a C\n");
	}if(B!=C){
		printf("A es diferente de C\n");
	}if(A==3){
		printf("A es igual a 3\n");
	}if(A*B == 15){
		printf("El resultado de la multiplicacion de A x B es igual a 15\n");
	}if(C/B < A){
		printf("El resultado de la division de C / B es menor a A\n");
	}if(C / B == -10){
		printf("El resultado de la division de C / B es igual a -10\n");
	}if(A + B + C == 5){
		printf("El resultado de la suma de A, B y C es igual a 5\n");
	}if((A+B == 8) && (A-B == 2)){
		printf("Si sumamos A y B el resultado es igual a 8 y si los restamos es igual a 2\n");
	}if((A+B == 8) || (A-B == 6)){
		printf("Si sumamos A y B el resultado es igual a 8 y si los restamos es igual a 6\n");
	}if(A > 3 && B > 3 && C < 3){
		printf("A y B son mayores a 3 mientras que C es menor a 3\n");
 	}
	
	printf("\nActividad 3\n");
	
	int A1,B1,C1;                //Declaracion de variables
	
	printf("Ingresa A\n");       //Ingresamos el valor para A
	scanf("%d", &A1);            
	printf("Ingresa B\n");       //Ingresamos el valor para B
	scanf("%d", &B1);
	printf("Ingresa C\n");       //Ingresamos el valor para C
	scanf("%d", &C1);
	
	if(A1>3){                                                                   /*Ingresamos las condiciones a ejecutar
																				en caso de que se cumplan imprimir el resultado*/
		printf("A es mayor a 3\n");
	}if(A1>C1){
		printf("A es mayor a C\n");
	}if(B1!=C1){
		printf("A es diferente de C\n");
	}if(A1==3){
		printf("A es igual a 3\n");
	}if(A1*B1 == 15){
		printf("El resultado de la multiplicacion de A x B es igual a 15\n");
	}if(C1/B1 < A1){
		printf("El resultado de la division de C / B es menor a A\n");
	}if(C1 / B1 == -10){
		printf("El resultado de la division de C / B es igual a -10\n");
	}if(A1 + B1 + C1 == 5){
		printf("El resultado de la suma de A, B y C es igual a 5\n");
	}if((A1+B1 == 8) && (A1-B1 == 2)){
		printf("Si sumamos A y B el resultado es igual a 8 y si los restamos es igual a 2\n");
	}if((A1+B1 == 8) || (A1-B1 == 6)){
		printf("Si sumamos A y B el resultado es igual a 8 y si los restamos es igual a 6\n");
	}if(A1 > 3 && B1 > 3 && C1 < 3){
		printf("A y B son mayores a 3 mientras que C es menor a 3\n");
 	}
	
>>>>>>> 86cc805bab59f59626b89dd30a645b2f16389f3c
	system("pause");
	return 0;

}
