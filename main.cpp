//Piccolo abbozzo iniziale: preso un vettore con un certo numero di elementi, lo ordina e stampa a video il risultato.
//Inoltre, la funzione "random" genera i 7 numeri esrtatti.

#include <iostream>
#include <algorithm>
#include <time.h>

#define elementi 3

int random_num[7];

void random() {
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

int main() {
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
	return 0;
}