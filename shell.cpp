/*
José de Jesús Martínez Cortez
15300164
5A1
*/
#include "iostream"
#include "windows.h"

using namespace std;
void shell(int arr[], int n) 
{ 
	int part,i,ord,j;
	bool band;
	part=n;
    while (part>1) 
    {  
		band=true; 
        part=(part/2);
        while (band==true)
		 {
		 	band=false;
		 	i=0;
			while((i+part)<=n)
			{
				if (arr[i]>arr[part+i]) 
		    		{ 
		               ord = arr[i]; 
		               arr[i] = arr[i+part]; 
		               arr[i+part] = ord; 
		               band=true;
		            } 	
						i++;
			}
    }
 
    for (j = 1; j <= n; j++)
		{
			cout << arr[j] << ", ";
		}
	cout<<"\n";
}	
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
	shell(dat, numdat);
	system("pause");
	return 0;
}
