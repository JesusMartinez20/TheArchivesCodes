/*
José de Jesús Martínez Cortez
15300164
5A1
*/
#include "iostream"
#include "windows.h"

using namespace std;
void Quicksort(int* arr, int izq, int der, int cant) 
{ 
	int cont1=0, numdat2=der,i = izq, j = der, ord;
    int p = arr[(izq + der) / 2]; 
    int cont2=0;
    while (i <= j) 
    { 
	    while (arr[i] < p) {
	    	i++;
		}
        while (arr[j] > p) {
			j--; 
		}
    	if (i <= j) 
    		{ 
               ord = arr[i]; 
               arr[i] = arr[j]; 
               arr[j] = ord; 
               i++; j--; 
            } 
    }      
	for (cont1 = 0; cont1 < cant; cont1++)
		{
			cout << arr[cont1] << ", ";
		}
	cout<<"\n";
     if (izq < j) 
          Quicksort(arr, izq, j, cant); 
     if (i < der) {
          Quicksort(arr, i, der, cant); }
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
	Quicksort(dat, 0, numdat-1, numdat);
	system("pause");
	return 0;
}




