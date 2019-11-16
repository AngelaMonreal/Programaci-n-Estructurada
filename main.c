/*
*Autor: Angela Monreal
*Fecha: 11/11/2019
*Grupo: #006
*Horario: 7:00 a.m - 9:00 a.m
*Matricula: 1848122
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lectura (char direccion[30]); //funcion para leer un archivo, crear otro archivo y colocarle  la cadena de texto invertida
void suma (char direccion2[30]); //funcion para leer un archivo e insertar la sumatoria en otro archivo
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//**********************************ACTIVIDAD 1*********************************
    lectura("C:/Users/Alex/Desktop/ArchivoOrigen.txt"); //se le ingresa la direccion del archivo que se desea leer
//**********************************ACTIVIDAD 2*********************************
    suma("C:/Users/Alex/Desktop/Numeros.txt"); //se le ingresa la direccion del archivo que se desea leer
    
	return 0;
}

void lectura (char direccion[30]){
	FILE *file1 , *file2; 														//variables tipo FILE para los archivos
	int i = 0;																	//variable contador
    char data1;																	//variable para colocar un caracter del archivo origen
    char cop[100];																//variable para colocar los caracteres del archivo
    file1 = fopen ( direccion, "r" );											//funcion para abrir el archivo origen en modo lecutra
    file2 = fopen ( "C:/Users/Alex/Desktop/archivo_alreves.txt" , "w" );		//funcion para abrir y crear otro archivo en modo escritura
    
    while ( (data1 = fgetc ( file1 )) != EOF ) {								//ciclo utilizado para obtener caracter por caracter del archivo origen
        //fputc ( data1, file1 );
    	cop[i] = data1;															//insersion de caracter al arreglo
        i++;																	//aumento de contador
        printf("%c", cop[i]);													//printf utilizado para monitorear salida
    }
    
    fclose ( file1 );															//cerramos archivo origen
    file1 = fopen ( direccion, "w" );											//funcion para abrir el archivo origen en modo escritura
    fputs("procesado", file1);													//funcion para insertar en el archivo origen la palabra procesado
    
    for (i=i-1; i>=0;i--){														//ciclo para insertar los caracteres en forma invertida
    	printf("%c", cop[i]);													//printf utilizado para monitoriar lo que se esta ingresando en el archivo creado
    	fputc ( cop[i], file2 );												//copiar caracter al archivo origen
	}
    fclose ( file1 );															//cerramos archivo origen
    fclose ( file2 );															//cerramos archivo origen
}

void suma (char direccion[30]){
	FILE *file3 , *file4;																//variables tipo FILE para los archivos
	int i = 0, sum = 0;																	//variable contador
    int data1=0;																		//variable para colocar un caracter del archivo origen
    int num[2];																			//variable para colocar un caracter del archivo origen
    file3 = fopen ( direccion, "r" );													//funcion para abrir el archivo origen en modo lecutra
    file4 = fopen ( "C:/Users/Alex/Desktop/sumatoria.txt" , "w" );						//funcion para abrir y crear otro archivo en modo escritura
    
    while ( (data1 = fgetc ( file3 )) != EOF ) {										//ciclo utilizado para obtener caracter por caracter del archivo origen
        //fputc ( data1, file1 );
    	num[i] = data1;																	//insertar caracter que se obtuvo en el archivo origen
        i++;
        //printf("%d", cop[i]);
    }
    
    fputs("la suma de ", file4);														//funcion para agregar linea de texto al archivo creado
    fputc(num[0],file4);
    fputs(" y ", file4);
    fputc(num[1],file4);
    fputs(" es: ", file4);
    sum=num[0]+num[1];
    printf("\nsuma%f\n", sum);
	fputc(sum,file4);
    
    fclose ( file3 );																	//cerrar archivo origen
    fclose ( file4 );																	//cerrar archivo creado
}
