#include <iostream>
#include <conio.h>
#include <head.h>

using namespace std;

int main(){

	cout << "Podaj liczbe:";
	int a;
	cin >> a;
	boolean check=even(a);
	cout << "Czy liczba jest parzysta?";
	if(check==true){
		cout << "Zmienna parzysta";
	}
	else{
		cout << "Zmienna nieparzysta";
	}

	_getch();
	return 0;
}
