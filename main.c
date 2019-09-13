/*
*Autor: Angela Monreal
*Fecha: 13/09/2019
*Grupo: 006
*Horario: Viernes 7:00 - 9:00 a.m.
*Matrícula: 1848122
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//**************ACTIVIDAD 1*****************

	char opcion;
	int num, suma=0;       //Declaracion de variables para el codigo.

	do                    //Abrimos un ciclo tipo do/while.
	{
		printf("Ingrese un numero entero:\n");             //Introducimos las instrucciones que estará realizando nuestro codigo.
		scanf("%d", &num);
		printf("Desea ingresar un numero(s/n)?\n");
		fflush(stdin);
		scanf("%c", &opcion);
		fflush(stdin);

		suma= suma + num;  //Operacion para la sumatoria de los numeros.

	}while(opcion=='s');   //Mientras que la opcion sea igual al caracter "s" el ciclo continuará ejecutandose.
						   //En cuanto finalice imprimirá la sumatoria de los numeros que introducimos.
	    printf("La suma de los numeros ingresados es: %d\n\n", suma);

//**************ACTIVIDAD 2*****************

int numero, i=0, j;
int serie[100];            //Declaracion de variables y del arreglo con el cual estaremos trabajando, dandole 100 para espacio.

                           //Abrimos un ciclo tipo do/while
	do
	{
		printf("Ingrese un numero entero:\n"); //Realizamos bloque de instrucciones que estará realizando el programa.
		scanf("%d", &numero);
		serie[i] = numero;                     //Añadimos un arreglo para comenzar a almacenar los numeros que introducimos.
		i++;
	}while(numero<100);
		for (j=0;j<i;j++)printf("%d, ", serie[j]); //Añadimos un ciclo for para contabilizar e imprimir los numeros almacenados.
	
system("pause");
return 0;

}



