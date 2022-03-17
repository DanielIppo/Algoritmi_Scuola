/*Creare un algoritmo che cerca un elemento in maniera binaria*/
#include <iostream>
using namespace std;

int main() {
	int numeroDaTrovare, indice = -1;
	int a [] = {1,4,5,19,32,33,42,44,51,60,66,69,87,90,91,99,100, 1001};
    
    cout<<"Inserisci un numero da trovare: ";
    cin>>numeroDaTrovare;
    
	int fine = sizeof(a)/sizeof(a[0]);
	int inizio = 0;
	while(inizio <= fine){
		int medio = (inizio + fine) / 2;
		if (a[medio] == numeroDaTrovare ) {
			indice = medio;
			cout << "Numero trovato a indice: " << indice;
			break;
		}
		if (a[medio] < numeroDaTrovare) {
			inizio = medio  + 1;
		}
		else 
		{
			fine = medio - 1;
		}
	}
	if(indice ==-1){
	    cout << "Non trovato";
	}
}
