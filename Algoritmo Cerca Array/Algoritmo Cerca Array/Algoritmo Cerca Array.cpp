/*Creare un algoritmo che cerca un elemento in maniera binaria*/
#include <iostream>
using namespace std;

int main() {
	int numeroDaTrovare, indice = -1;
	int a [] = {1,4,5,19,32,33,42,44,51,60,66,69,87,90,91,99,100, 1001};//Creo un array ordinato
    
    cout<<"Inserisci un numero da trovare: ";
    cin>>numeroDaTrovare;
    
	int fine = sizeof(a)/sizeof(a[0]); //Mi calcolo la lunghezza dell'array
	int inizio = 0;
	while(inizio <= fine){
		int medio = (inizio + fine) / 2;//Trovo la metà dell'array e verifico se il numero da trovare è maggiore o minore
		if (a[medio] == numeroDaTrovare ) {
			indice = medio;
			cout << "Numero trovato a indice: " << indice;
			break;
		}
		if (a[medio] < numeroDaTrovare) { //Se il numero da trovare è maggiore creno un nuovo inizio dell'array
			inizio = medio  + 1;
		}
		else 
		{
			fine = medio - 1; //Se non è ne maggiore e nemmeno uguale quindi è minore creo una nuova fine dell'array
		}
	}//Ripeto tutto finché non avrò esaurito l'array
	if(indice ==-1){
	    cout << "Non trovato";
	}
}
