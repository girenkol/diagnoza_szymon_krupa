#include <iostream>
#include <windows.h>

using namespace std;

int horner(int wsp[],int stopien, int x)
{
    int wynik = wsp[0];

    for(int i=1; i<=stopien; i++)
    {
        wynik=wynik*x+wsp[i]; cout<<wynik;
    }
    return wynik;
}

int main()
{
    int stopien, argument;
    int *wspolczynnik;
	cout<<"Podaj stopien wielomianu: ";
	cin>>stopien;
    system("cls");
	wspolczynnik= new int [stopien];
	for(int i=0; i<=stopien; i++)
    {
        cout<<"Podaj wspolczynnik dla x^"<<stopien-i<<":";
        cin>>wspolczynnik[i];
        system("cls");
    }
    cout<<"Podaj argument wielomianu: ";
    cin>>argument;
    system("cls");
    cout<<"Wartosc wielomianu W("<<argument<<") wynosi: "<<horner(wspolczynnik, stopien, argument);
}
