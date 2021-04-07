#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int liczba;                      										//Tworzê pojemmniki na liczbê linni, oraz zmienne i i k, które beda warunkowaly petle
	cout << "Podaj liczbe linii:  ";  cin >> liczba;                   		//Uzytkownik wprowadza liczbe linii
	
	if(liczba>0)
	{
	for(int i=1;i<=liczba;i++)           									// Do momentu osiagniecia wartosci i mniejszej lub rownej liczba, zaczynajac od i=1, i bêdzie siê inkrementowaæ po wykonaniu petli w srodku
	{
		for(int k=1;k<=i;k++)            									//wartosc wyjsciowa k to 0, petla bedzie wykonywaæ siê do momentu gdy k bedzie mniejsze od i, a za ka¿dym razem nast¹pi inkrementacja 

		{		
			cout << "O";
		}
		cout << endl; Sleep(20);
	}
	}
	else
		{
		cout<< "Wykryto liczbe mniejsza od 1. ";   							//JezEli liczba jest mniejsza od 1 u¿ytkownik dostaje komunikat
		}	
	return 0; }
