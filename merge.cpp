/*
José de Jesús Martínez Cortez
15300164
5A1
*/
#include "iostream"
#include "windows.h"

using namespace std;


void MergeSort(int inicio,int fin,int *lista){
    if(fin - inicio == 0 || fin - inicio == 1)
        return;
    int cursor= (inicio + fin)/2;
    MergeSort(inicio,cursor,lista);
    MergeSort(cursor,fin,lista);

    int i = inicio,
        j = cursor,
        k = 0;
    int array[fin-inicio];
    while(i<cursor || j<fin){
        if(i<cursor && j<fin){
            if(lista[i]<lista[j]){
                array[k++] = lista[i++];
            }else{
                array[k++] = lista[j++];
            }
        }else if(i<cursor){
            array[k++] = lista[i++];
        }else{
            array[k++] = lista[j++];
        }
               
    }
    for(int i=0;i<fin-inicio;i++){
        lista[inicio+i]=array[i];
    }
     for (int k=0;k<fin-inicio;k++)
	{
		cout << array[k] << ", ";
	}
	cout << "\n\n";
}

int main()
{
	int numdat, dat[20], cont1, ord, min,cont2, cont3=0;
	do {
		cout << "ingrese el numero de datos que desea ordenar\n";
		cin >> numdat;
		if(numdat > 20 || numdat<2) {
			cout << "Error. la cantidad de numeros a analizar debe estar entre 2 y 20\n intentelo de nuevo";
		}
		system("pause");
		system("cls");
	} while (numdat > 20 || numdat<2);

	for (cont1 = 0; cont1 < numdat; cont1++)
	{
		cout << "ingrese el numero "<< cont1 +1<<"\n";
		cin >> dat[cont1];
	}
	system("cls");
	cout << "original ";
	for (cont1 = 0; cont1 < numdat; cont1++)
	{
		cout << dat[cont1] << ", ";
	}
	cout << "\n\n";
	cout<<"iteraciones:\n ";        
	MergeSort(0, numdat, dat);
	system("pause");
	return 0;
}
