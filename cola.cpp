/*
José de Jesús Martínez Cortez
15300164
5A1
*/
#include<windows.h>
#include<iostream>

using namespace std;
int pila[20],tope;
bool band=false,band1=false;
void inicializa(){
	tope=-1;
}
void vacia (){
	if (tope==-1){
		band1=true;
	}else{
		band1=false;
	}
}
void llena (){
	int max=20;
	if (tope==max){
		band=true;
	}else{
		band=false;
	}
}
void encolar(int x){
	llena();
	if (band==true){
		cout<<"la pila esta llena, seleccione otra opcion";
	}else{
		tope ++;
		pila[tope]=x;	
	}
}
void desencolar(){
	vacia();
	if (band1==true){
		cout<<"la pila esta vacia, seleccione otra opcion";
	}else{
		for(int i=0;i<=tope;i++){
		pila[i]=pila[i+1];
	}
		tope --;	
	}
}
void imprimir(){
	if (band1==true){
		cout<<"la pila esta vacia, seleccione otra opcion";
	}else{
	for(int i=1;i<=tope;i++){
		cout<<pila[i]<<"\n";
	}
}
}
void limpiar(){
	inicializa();
}
int main()
{
	int num,opci;
	do{
		cout<<"Elija una opcion \n\ 1)ingresar dato a la pila\n 2)eliminar dato de la pila\n 3)imprimir datos\n 4)eliminar todos los datos de la pila\n 5)salir\n";
		cin>>opci;
		system("cls");
		switch (opci){
			case 1:
				cout<<"ingrese el numero\n";
				cin>>num;
				encolar(num);
				system("pause");
				system("cls");
				break;
			case 2:
				desencolar();
				system("pause");
				system("cls");
				break;
			case 3:
				imprimir();
				system("pause");
				system("cls");
				break;
			case 4:
				limpiar();
				system("pause");
				system("cls");
				break;
			case 5:
				cout<<"saliendo";
			Sleep(1000);
				system("cls");
				break;
			default:
				cout<<"opcion no valida, intentelo de nuevo";
				system("pause");
				system("cls");
				break;	
		}	
	}while(opci!=5);
    return 0;
}
