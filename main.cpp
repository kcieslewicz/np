#include <iostream>
#include <head.h>

using namespace std;

int main(){
	cout << "Witaj!";
	//Kod do wykonania funkcji od Karola
	cout << "Podaj liczbe:";
	int a;
	cin >> a;
	boolean even=even(a);
	cout << "Czy liczba jest parzysta?";
	if(even==true){
		cout << "Zmienna parzysta";
	}
	else{
		cout << "Zmienna nieparzysta";
	}
	//koniec kodu do wykonania funkcji od Karola

	return 0;
}
