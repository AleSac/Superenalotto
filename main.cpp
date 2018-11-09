//Ok, adesso si comincia a lavorare seriamente

#include <iostream>
#include <algorithm>
#include <time.h>

double vincitorispeciali(short int h) {
	short int num_vincitorispec[3];
	for (short int a = 0; a < 3; a++) {
		int k = rand() % RAND_MAX;  //RAND_MAX = 32767
		long int k2;
		if (a == 0) {  //6
			k2 = k * (rand() % 19001);
			if (k2 == 1) {
				num_vincitorispec[a] = 1;
			}
			else {
				num_vincitorispec[a] = 0;
			}
		}
		else if (a == 1) {  //5 e Superstar
			k2 = k * (rand() % 3433);
			if (k2 == 1) {
				num_vincitorispec[a] = 1;
			}
			else {
				num_vincitorispec[a] = 0;
			}
		}
		else {  //6 e Superstar
			k2 = k * (rand() % RAND_MAX);
			double k3 = k2 * (rand() % 52);
			if (k3 == 1) {
				num_vincitorispec[a] = 1;
			}
			else {
				num_vincitorispec[a] = 0;
			}
		}
	}
	return num_vincitorispec[h];
}

//in realtà non sarebbe necessario calcolare il numero di vincitori per le categorie il cui montepremi non è 
//in funzione di quest'ultimo, ma secondo me se alla fine viene mostrato il numero totale di vincitori fa più bello.

long int vincitori(short int l) {  
	long int num_vincitori[12];
	long int num_schedine = ((rand() % 4999 + 5000) * 10000);
	for (short int a = 0; a < 12; a++) {
		switch (a) {
		case 0: num_vincitori[a] = 0.045 * num_schedine;  //2
			break;
		case 1: num_vincitori[a] = 0.003 * num_schedine;  //3
			break;
		case 2: num_vincitori[a] = 0.00008 * num_schedine;  //4
			break;
		case 3: num_vincitori[a] = 0.00000079 * num_schedine;  //5
			break;
		case 4: num_vincitori[a] = vincitorispeciali(1); //6
			break;
		case 5: num_vincitori[a] = 0.0072 * num_schedine; //0 e Superstar
			break;
		case 6: num_vincitori[a] = 0.0033 * num_schedine;  //1 e Superstar
			break;
		case 7: num_vincitori[a] = 0.00052 * num_schedine;  //2 e Superstar
			break;
		case 8: num_vincitori[a] = 0.000034 * num_schedine;  //3 e Superstar
			break;
		case 9: num_vincitori[a] = 0.00000093 * num_schedine;  //4 e Superstar
			break;
		case 10: num_vincitori[a] = vincitorispeciali(2);  //5 e Superstar
			break;
		case 11: num_vincitori[a] = vincitorispeciali(3);  //6 e Superstar
			break;
		}
	}
	return num_vincitori[l];
}

long int vincite(short int k) {   
	long int montepremi_tot = ((rand() % 8999 + 1000) * 10000);
	long int montepremi[12];
	for (short int a = 0; a < 12; a++) {
		switch (a) {
		case 0: montepremi[a] = (0.4 * montepremi_tot) / vincitori(a); //2
			break;
		case 1: montepremi[a] = (0.128 * montepremi_tot) / vincitori(a); //3
			break;
		case 2: montepremi[a] = (0.042 * montepremi_tot) / vincitori(a); //4
			break;
		case 3: montepremi[a] = (0.042 * montepremi_tot) / vincitori(a); //5
			break;
		case 4: montepremi[a] = (0.174 * montepremi_tot); //6
			break;
		case 5: montepremi[a] = 5; //0 e Superstar
			break;
		case 6: montepremi[a] = 10; //1 e Superstar
			break;
		case 7: montepremi[a] = 100;  //2 e Superstar
			break;
		case 8: montepremi[a] = montepremi[2] * 100; //3 e Superstar
			break;
		case 9: montepremi[a] = montepremi[3] * 100; //4 e Superstar
			break;
		case 10: montepremi[a] = montepremi[4] * 25; //5 e Superstar
			break;
		case 11: montepremi[a] = montepremi[5] + 2*10e6; //6 e Superstar
			break;
		}
	}
	return montepremi[k];
}

//attualmente, sceglie una categoria a caso e stampa a video il montepremi

int main() {
	srand(time(NULL));
	short int tipovincita;
	tipovincita = rand() % 11;  //questa definizione è ovviamente temporanea
	std::cout << tipovincita << std::endl; // temporaneo
	std::cout << "Complimenti!!! Hai vinto " << vincite(tipovincita) << " euro !!!";
	return 0;
}
