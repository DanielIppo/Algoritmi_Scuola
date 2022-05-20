/*  Buble Sorting   */

#include <iostream>
using namespace std;

void bubbleSorting(int array[], int arrayLen) {//Passo un array tramite puntatore
    bool order = false;
    for (int i = 0; i < arrayLen - 1; i++) { // Avvio il primo ciclo
        for (int j = 0; j < arrayLen - i - 1; j++) { // Avvio il secondo ciclo con condizione che j sia minore della lunghezza dell'array - l'indice del primo for -1
            if (array[j] > array[j + 1]) { // Se il primo numero è maggiore del secondo, scambia i valori
                swap(array[j], array[j + 1]); // Scambio tra il primo elemento e il secondo
                order = true;
            }
        }
        if(order == false) {
            break;
        }
    }    
}

int main() {
    int a[] = {20,10,4,5,12,34,56,11,9,32,33,0,1,6,44,7}; // Array disordinato
    
    int aLen = sizeof(a)/sizeof(a[0]); // Calcolo della lunghezza dell'array
    
    bubble_sort(a, a_len); // Richiamo la funzione
    
    for(int i = 0; i < a_len; i++) {
        cout<<a[i]<<",";
    }
    
    return 0;
}