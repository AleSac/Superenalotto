//piccolo abbozzo iniziale: preso un vettore con un certo numero di elementi, lo ordina e stampa a video il risultato

#include <iostream>
#include <algorithm>

#define elementi 10

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
	return 0;
}
