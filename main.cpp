#include <iostream>
#include <conio.h>
#include "head.h"


using namespace std;

int main()
{
    int liczba,potega;

cout<<"Podaj liczbe..."<<endl;
cin>>liczba;
cout<<"Podaj potege..."<<endl;
cin>>potega;

liczba=potegowanie(liczba,potega);

_getch();
return 0;
}
