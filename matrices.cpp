/*
José de Jesús Martínez Cortez
TGO. en desarrollo de software
*/
#include<windows.h>
#include<iostream>

using namespace std;

void main()
{
	int matrizEnteros[10][10];		//Declaracion de una matriz bidimencional 10x10 tipo int
	float matrizFlotantes[3][5][4];	//Declaracion de una matriz tridimencional 3x5x4 tipo float
	int matriz3[2][2] = {{1,2},{3,4}}; 	//Matriz inicializada desde la declaracion
	
	matrizEnteros[0][5]=2;		//asignando un valor especifico (2) a la coordenada (0,5) de la matriz ->primera fila, sexta columna
	
	for(int i=0;i<10;i++){		//Recorrimiento de cada una de las posiciones de la matriz mediante dos ciclos for anidados e imprimiendo cada uno de sus valores
		for(int j=0;j<10;j++){
			cout<<aregloEnteros[i][j]<<endl;
		}
	}
}
