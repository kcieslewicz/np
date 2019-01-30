#include <iostream>
#include "head.h"
#include "funkcja4.h"

using namespace std;

int main(){
	cout << "Witaj!";
	//Kod do wykonania funkcji od Karola
	cout << "Podaj liczbe:";
	int a;
	cin >> a;
	bool evenv=even(a);
	cout << "Czy liczba jest parzysta?";
	if(evenv==true){
		cout << "Zmienna parzysta" << endl;
	}
	else{
		cout << "Zmienna nieparzysta" << endl;
	}
	//koniec kodu do wykonania funkcji od Karola

	Doda x; //Kod Szymona
	x.doda();



	return 0;
}
