/*
José de Jesús Martínez Cortez
TGO. en desarrollo de software
*/
#include<windows.h>
#include<iostream>
#include <string.h>

using namespace std;

void main()
{
	char frase1[] = "Hola mundo";				//declaracion de cadena
   	char frase2[80];							//declaracion de una cadena con espacio para 80 caracteres
   	strcpy(frase2,frase1);						//funcion para copiar una cadena perteneciente a la libreria string.h
   	cout << "Cadena # 1: " << frase1 << endl;	//impresion de frase1
   	cout << "Cadena # 2: " << frase2 << endl;	//impresion de frase2
}
