#include <iostream>
#include <conio.h>
#include <head.h>

using namespace std;

int main(){

	int a;
	cout << "Podaj liczbe";
	cin >> a;
	boolean even=even(a);
	if(even==true){
		cout << "Zmienna parzysta";
	}
	else{
		cout << "Zmienna nieparzysta";
	}

	_getch();
	return 0;
}
