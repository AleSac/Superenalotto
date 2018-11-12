#include <iostream>
#include <algorithm>
#include <time.h>
#include <math.h>

using namespace std;

int main() //prima parte
{

    int giocati, a;
    int valori[a];
    string star, importo;
    cout << "Quanti numeri vuoi giocare? (min: 6, max: 12):" ;    //domande iniziali
    cin >> giocati;
    if(giocati>12 || giocati<6){
    cout << "La quantita' di numeri da giocare deve essere minore di 12 e maggiore di 6!!"<<endl;
    cout << "Quanti numeri vuoi giocare? (min: 6, max: 12)" << endl;
    cin >> giocati;
    }
    cout << "Vuoi giocare anche il Super Star?" << endl;
    cin >> star;
    if(star=="si"){                            //opzione super star
        cout << "Istruzioni: " << endl;
    cout << "L'importo giocato va bene?" << endl;
    cin >> importo;
    if(importo == "no"){
       cout << "Quanti numeri vuoi giocare? (min: 6, max: 12)" << endl;
    cin >> giocati;
    if(giocati>12 || giocati<6){
    cout << "La quantita' di numeri da giocare deve essere minore di 12 e maggiore di 6!!"<<endl;
    cout << "Quanti numeri vuoi giocare? (min: 6, max: 12)" << endl;
    cin >> giocati;
    }
    cout << "Vuoi giocare anche il Super Star?" << endl;
    cin >> star;
    cout << "Istruzioni: " << endl;
    cout << "L'importo giocato va bene?" << endl;
    cin >> importo;
    } else {
        for(short int a=0; a<giocati; a++){
    cout << "Inserisci il numero che vuoi giocare: " << endl;
    cin >> valori[a];
      }
    }

    }
    cout << "Istruzioni: " << endl;          //istruzioni
    cout << "L'importo giocato va bene?" << endl;
    cin >> importo;
    if(importo == "no"){
       cout << "Quanti numeri vuoi giocare? (min: 6, max: 12)" << endl;
    cin >> giocati;
    if(giocati>12 || giocati<6){
    cout << "La quantita' di numeri da giocare deve essere minore di 12 e maggiore di 6!!"<<endl;
    cout << "Quanti numeri vuoi giocare? (min: 6, max: 12)" << endl;
    cin >> giocati;
    }
    cout << "Vuoi giocare anche il Super Star?" << endl;
    cin >> star;
    cout << "Istruzioni: " << endl;
    cout << "L'importo giocato va bene?" << endl;
    cin >> importo;
    } else {
        for(short int a=0; a<giocati; a++){
    cout << "Inserisci il numero che vuoi giocare: " << endl;   //inserimento valori
    cin >> valori[a];
      }
    }
    return 0;         //fine
}
