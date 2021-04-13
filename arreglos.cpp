/*
José de Jesús Martínez Cortez
TGO. en desarrollo de software
*/
#include<windows.h>
#include<iostream>

using namespace std;

void main()
{
	int arregloEnteros[10];		//Declaracion de un arreglo tipo int con 10 espacios
	float arregloFlotantes[5];	//Declaracion de un arreglo tipo float con 5 espacios
	int arreglo3[3]={1,2,3}; 	//Arreglo inicializado desde la declaracion
	
	arregloEnteros[5]=2;		//asignando un valor especifico (2) al indice sexto elemento del arreglo (indice 5)
	
	for(int i=0;i<10;i++){		//Recorrimiento de cada una de las posiciones del arreglo e imprimiendo cada uno de sus valores
		cout<<aregloEnteros[i]<<endl;
	}
}
