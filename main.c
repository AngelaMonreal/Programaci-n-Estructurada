/*
*Autor: Angela Monreal
*Fecha: 26/10/2019
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

int estudiantes, i=0, j=0, posicion;  //Declaramos variables
float  maxpromedio=0;
struct Estudiante{                   //Declaramos estructura a utilizar en el programa
	char nombre[20], sexo[20];
	int C[5], edad;
	float promedio;
	};

	printf("Inserte el numero de estudiantes a evaluar\n");
	scanf("%d", &estudiantes);
	
struct Estudiante alumno[estudiantes];   //Asignamos variable a utilizar de la estructura

	
	for(i=0; i<estudiantes;i++){        //Ciclo tipo for para llenado de informacion
		int suma=0;
		fflush(stdin);
		printf("Nombre del alumno: \n");
		scanf("%s", &alumno[i].nombre);
		fflush(stdin);
		printf("Sexo: \n");
		scanf("%s", &alumno[i].sexo);
		fflush(stdin);
		printf("Edad: \n");
		scanf("%d", &alumno[i].edad);

		fflush(stdin);
		for(j=0; j<5; j++){           //Ciclo tipo for para llenado de calificaciones
			printf("Calificacion %d: ", j+1);
			scanf(" %d", &alumno[i].C[j]);
			suma= suma+alumno[i].C[j];
		}
		alumno[i].promedio= suma/5;   //Operacion aritmetica para obtener promedio
		
	}
	for(i=0; i<estudiantes; i++){    //Ciclo tipo for para saber cual es el alumno con mayor promedio
		if(alumno[i].promedio>maxpromedio){
			maxpromedio=alumno[i].promedio;
			posicion= i;            //Bandera para identificar el alumno con mayor promedio
		}
	}                              //Imprimir resultado deseado
	printf("El alumno con mayor promedio es:");
	printf("Nombre: %s\tSexo: %s\tEdad: %d\tPromedio: %.2f\n", alumno[posicion].nombre,alumno[posicion].sexo, alumno[posicion].edad, alumno[posicion].promedio);
	
//**********************************ACTIVIDAD 2*********************************
	int npandas;             //Declaracion de variables
	struct Panda{                 //Declaracion de la estructura a utilizar en el programa
		char nombre[20], sexo[20];
		int peso, anio, edad, tenerBebe;
	};
	printf("Inserte el numero de pandas en el zoologico:\n");
	scanf("%d", &npandas);
	
struct Panda panda[npandas];      //Asignamos variable a utilizar de la estructura

	 
	for(i=0; i<npandas;i++){     //Ciclo tipo for para el llenado de informacion
		printf("Nombre del panda: \n");
		scanf("%s", &panda[i].nombre);
		fflush(stdin);
		printf("Sexo: \n");
		scanf("%s", &panda[i].sexo);
		fflush(stdin);
		printf("Peso: \n");
		scanf("%d", &panda[i].peso);
		printf("Año de nacimiento: \n");
		scanf("%d", &panda[i].anio);
		fflush(stdin);
		
		panda[i].edad= 2019 - panda[i].anio;  //Operacion aritmetica para caluclar la edad del panda
		if(strcmp(panda[i].sexo,"Femenino") == 0 && panda[i].edad>=5){   //Condicional para comparar la edad y el sexo y saber si puede tener bebes
			panda[i].tenerBebe=1;
		}else{
			panda[i].tenerBebe=0;
		}
		printf("Tener bebes: %d\n", panda[i].tenerBebe);  //Imprimir resultado deseado
	} 
	return 0;
}



