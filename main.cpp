//Piccolo abbozzo iniziale: preso un vettore con un certo numero di elementi, lo ordina e stampa a video il risultato.
//Inoltre, la funzione "random" genera i 7 numeri esrtatti.

#include <iostream>
#include <algorithm>
#include <time.h>

#define elementi 3
#define nonhocapitolastoriadelmontepremi NULL

void random() {
	int random_num[7];
	srand(time(NULL));
	std::cout << "Numeri estratti:" << std::endl;
	for (short int a = 0; a < 7; a++) {
		random_num[a] = rand() % 90;
		if (a < 6) {
			std::cout << random_num[a] << ", ";
		}
		else {
			std::cout << "\nIl numero Super Star e' " << random_num[a] << std::endl;
		}
	}
}

int vincite(short int k) {   
	int montepremi_tot = ((rand() % 8999 + 1000) * 10000);
	int montepremi[11];
	for (short int a = 0; a < 11; a++) {
		switch (a) {
		case 1: montepremi[a] = nonhocapitolastoriadelmontepremi; //2
			break;
		case 2: montepremi[a] = nonhocapitolastoriadelmontepremi; //3
			break;
		case 3: montepremi[a] = nonhocapitolastoriadelmontepremi; //4 e 5
			break;
		case 4: montepremi[a] = nonhocapitolastoriadelmontepremi; //6
			break;
		case 5: montepremi[a] = 5; //0 e Superstar
			break;
		case 6: montepremi[a] = 10; //1 e Superstar
			break;
		case 7: montepremi[a] = 100;  //2 e Superstar
			break;
		case 8: montepremi[a] = montepremi[3] * 100; //3 e Superstar
			break;
		case 9: montepremi[a] = montepremi[4] * 100; //4 e Superstar
			break;
		case 10: montepremi[a] = montepremi[5] * 25; //5 e Superstar
			break;
		case 11: montepremi[a] = nonhocapitolastoriadelmontepremi + 2*10e6; //6 e Superstar
			break;
		}
	}
	return montepremi[k];
}

int main() {
	short int tipovincita;
	int vettore[elementi]; 
	std::cout << "Inserisci i " << elementi << " elementi dell'array:" << std::endl;
	for (short int a = 0; a < elementi; a++) {
		std::cin >> vettore[a];
	}
	std::sort(vettore, vettore + elementi);
	std::cout << "Vettore ordinato:" << std::endl;
	for (short int a = 0; a < elementi; a++) {
		std::cout << vettore[a] << std::endl;
	}
	random();
	tipovincita = rand() % 11;  //questa definizione è ovviamente temporanea
	std::cout << tipovincita << std::endl; // temporaneo
	std::cout << "Complimenti!!! Hai vinto " << vincite(tipovincita) << " euro !!!";
	return 0;
}