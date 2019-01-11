#include <iostream>
#include <conio.h>
#include <head.h>

using namespace std;

int main(){

	cout << "Podaj liczbe:";
	int b;
	cin >> b;
	boolean rowne=even(b);
	if(rowne!=true){
		cout << "Zmienna nieparzysta";
	}
	else{
		cout << "Zmienna parzysta";
	}

	_getch();
	return 0;
}
