//Programa ASCII
//Andrés Gómez CODIGO 2154714 David Sandoval codigo 2142786
//Version 1.0

//incluir librerias.
#include<stdio.h>
#include<string.h>
#define MAX_CHAR 20

//Definicion de prototipos
typedef struct nombres{
	char name1[MAX_CHAR]; //nombre (David)
	char name2[MAX_CHAR]; //nombre2 (Andres)
	}nombre;
	
void ingreso ();	

//Codigo principal
void main()
{
	nombre recibidos;
	ingreso(&recibidos);
	
}

void ingreso(nombre *namex){ //Ingreso de integrantes del grupo
	
	printf("\nCambio de nombre por medio de operaciones logicas \n");
	printf("\nIntercambiar David con Andres \n");
 	printf("\nIngrese el nombre del integrante (David): \n");
	scanf("%s", namex[0].name1);

	namex[1].name2[0] = (namex[0].name1[0]|0b00000001)& 0b01000001; //operacion lógica para obtener letra "A" a partir de letra "D"
	
	namex[1].name2[1] = (namex[0].name1[1]|0b00001110)& 0b01101110;//operacion lógica para obtener letra "n" a partir de letra "a"
	
	namex[1].name2[2] = namex[0].name1[2]& 0b01100100;//operacion lógica para obtener letra "d" a partir de letra "v"
	
	namex[1].name2[3] = (((namex[0].name1[3]<<1)& 0b01010010)| 0b01100000);//operacion lógica para obtener letra "r" a partir de letra "i"
		
	namex[1].name2[4] = namex[0].name1[4]|0b00000001;//operacion lógica para obtener letra "e" a partir de letra "d"
	
	namex[1].name2[5] = ((namex[0].name1[5]>>1)|0b01110011);//operacion lógica para obtener letra "s" a partir de caracter "space"
	
	printf("\nEl intercambio es: %s \n", namex[1].name2); 

	
}


