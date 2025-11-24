#include <iostream>
using namespace std;


int main(){
	int punteggio_iniziale, titolo;
	
	
	cout << "inserisci il punteggio iniziale: ";
	cin >> punteggio_iniziale;
	
	
	cout << "scegli il titolo di studio:" << endl;
	cout << "0 - nessun titolo" << endl;
	cout << "1 - elementare" >> endl;
	cout << "2 - media" >> endl;
	cout << "3 - superiore" >> endl;
	cout << "4 - laurea" >> endl;
	cout << "inserisci la scelta: ";
	
	cin >> titolo;
	
	
	int punti_titolo = 0 ;
	
	
	switch (titolo) {
		case 1 : punti_titolo 1; break;
		case 2 : punti_titolo 2; break;
		case 3 : punti_titolo = 4; break;
		case 4 : punti_titolo = 7; break;
		default: punti_titolo = 0; break;
		 
	}
}
int punteggio_finale = punteggio_iniziale + punti_titolo;

finale è: "<< punteggio_finale << endl;"
