#include<cmath>
#include<vector>
#include<iostream>

using namespace std;
void Radix(int a[], int n, int x)
{
	vector< vector <int> > Vec;
	Vec.resize(10);
	int temp, m = 0;

	for (int i = 0; i<x+1; i++) {
		for (int j = 0; j<n; j++) {
			temp = (int)(a[j] / pow(10, i)) % 10;
			Vec[temp].push_back(a[j]);
		}
		for (int l = 0; l<n; l++) {
			cout << a[l] << ", ";
		}
		cout << "\n";
		for (int k = 0; k<10; k++)
		{
			for (int l = 0; l<Vec[k].size(); l++) {
				a[m] = Vec[k][l];
				m++;
			}
			Vec[k].clear();
		}

		m = 0;

	}
}

int main()
{
	int Nnum,i,max=0,x=0;
	do{
	cout << "ingrese el numero de datos que desea ordenar\n";
	cin >> Nnum;
	if(Nnum > 20 || Nnum<2) {
			cout << "Error. la cantidad de numeros a analizar debe estar entre 2 y 20\n intentelo de nuevo\n";
		}
		system("pause");
		system("cls");
	} while (Nnum > 20 || Nnum<2);
	int Numeros[20];
	for (i = 0; i<Nnum; i++) {
			cout << "ingrese el numero "<< i +1<<"\n";
			cin >> Numeros[i];
			system("cls");
		
	}
	for (i = 0; i < Nnum; i++) {
		if (Numeros[i] > max)
		{
			max = Numeros[i];
		}

	}
	while (max > 0) {
		max = max / 10;
		x++;
	}
	system("cls");
	cout << "original \n";
	Radix(Numeros, Nnum,x);
	system("pause");
    return 0;
}


