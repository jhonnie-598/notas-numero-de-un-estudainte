/******************
   Objetivo:hallar notas de estudiantes
   Author: todos
   Fecha: 30/04/2021
*******************************/






#include <iostream>

using namespace std;

int leernotas(float notas []);
void ordenarnotas (int n, float Notas[]);
void escribirnotas (int n, float Notas[]);

int main () 
{
	float notasEs[ESMAXIMO];
	int n;
	float mitad; mediana;
	
	n=leerNotas(NotasEs);
	mitad = n / 2;
	if (n / 2 == 0){
		mediana = (Notas[mitad] + NotasEs[mitad - 1])/2;
		
	}
	
	else {
		mediana = NotasEs[mitad];
	}
	
cout <<"la mitad es ", mediana;
return 0;	
}

int leerNotas(float notas[])
{ int i, n;
	cout <<"ingrese numero de estudiantes"; cin>>n;
	while(n<1 or n >45)
	{
		cout <<"ingrese numero valido de estudiantes"; cin>>n;
	}
	for (i= 0; i<n; i++){
	do {
		cout << "ingrese nota estudiantes " << i + 1 << "Entre 0.0 y 5.0";
		cin>>notas [i];
	}while (notas[i] < 0.0 or notas [i] > 5.0 );
	
	}
	return n;
	
		
}
