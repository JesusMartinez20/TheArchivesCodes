/*
José de Jesús Martínez Cortez
15300164
5A1
*/
#include<windows.h>
#include<iostream>

using namespace std;
bool band=false,band1=false;
struct nodo{
	int dato;
	nodo*sig;
}*lista, *aux, *aux2,*tope;
void inicializa(){
	lista=NULL;
}
void vacia (){
	if (lista==NULL){
		band1=true;
	}else{
		band1=false;
	}
}
void buscar(int x){
	vacia();
	if (band1==true){
		cout<<"la lista esta vacia, seleccione otra opcion";
	}else{
		aux=lista;
		while(aux!=NULL){
			if(aux->dato==x){
				band=true;
				break;
			}else{
				band=false;
				aux=aux->sig;
			}
		}
}
} 
void insercion(int x){
	vacia();
	if (band1==true){
		lista= new nodo;
		lista->dato=x;
		lista->sig=NULL;
		tope=lista;
	}else{
		aux=new nodo;
		aux->dato=x;
		if(aux->dato<lista->dato){
			aux->sig=lista;
			lista=aux;
		}else {
		aux2=lista;
		while(aux2->sig!=NULL && aux2->sig->dato<aux->dato){
			aux2=aux2->sig;
		}
		aux->sig=aux2->sig;
		aux2->sig=aux;
	}
	}
}
void eliminar(int x){
	vacia();
	if (band1==true){
		cout<<"la cola esta vacia, seleccione otra opcion";
	}else {
		buscar(x);
		if(band==false){
			cout<<"el dato no se encuentra en la lista\n";
			system("pause");
			system("cls");
		}else{
			if (x==lista->dato){
				if(lista->sig==NULL){
					delete lista;
					delete aux;
				}else{
					aux=lista->sig;
					delete lista;
					lista=aux;
				}
			}else{
				aux=lista;
				while(aux->sig->dato!=x){
					aux=aux->sig;
				}
				aux2=aux->sig;
				aux->sig=aux2->sig;
				delete aux2;
			}
		}
	}
}
void imprimir(){
	vacia();
	if (band1==true){
		cout<<"la lista esta vacia, seleccione otra opcion";
	}else{
	for(aux=lista;aux!=NULL;aux=aux->sig){
		cout<<aux->dato<<"\n";
	}
}
}
void limpiar(){
	if (band1==true){
		cout<<"la lista esta vacia, seleccione otra opcion";
	}else{
		while(lista!=aux){
			aux=lista->sig;
			delete lista;
			lista=aux;
		}
		delete lista;
		inicializa();
	}
}
int main()
{
	int num,opci;
	do{
		cout<<"Elija una opcion \n\ 1)ingresar dato a la lista\n 2)eliminar dato de la lista\n 3)imprimir datos\n 4)eliminar todos los datos de la lista\n 5)salir\n";
		cin>>opci;
		system("cls");
		switch (opci){
			case 1:
				cout<<"ingrese el numero\n";
				cin>>num;
				insercion(num);
				system("cls");
				break;
			case 2:
				cout<<"ingrese el numero que desea eliminar\n";
				cin>>num;
				eliminar(num);
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
			Sleep(500);
				system("cls");
				break;
			default:
				cout<<"opcion no valida, intentelo de nuevo";
				system("pause");
				system("cls");
				break;	
		}	
	}while(opci!=6);
    return 0;
}

