#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

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

	system("pause");
	return 0;
}
