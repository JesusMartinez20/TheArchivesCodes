/*
José de Jesús Martínez Cortez
15300164
5A1
*/
#include "iostream"
#include "windows.h"

using namespace std;
int main()
{
	int numdat, dat[20], cont1, cont2, i , ord;
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
	for( cont1=1;cont1<numdat;cont1++){
		for( cont2=0;cont2<numdat-1;cont2++){
			if(dat[cont2]>dat[cont2+1]){
				ord=dat[cont2];
				dat[cont2]=dat[cont2+1];
				dat[cont2+1]=ord;
			}
		}
			cout<<cont1<<") ";
			for(int cont1=0;cont1<numdat;cont1++){
				cout<<dat[cont1 ]<<", ";
			}
			cout<<"\n";
	}
	system("pause");
	return 0;
}




