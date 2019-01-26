#include <iostream>
#include "head.h"

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
		cout << "Zmienna parzysta";
	}
	else{
		cout << "Zmienna nieparzysta";
	}
	//koniec kodu do wykonania funkcji od Karola

	return 0;
}
