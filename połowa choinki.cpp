#include <iostream>

using namespace std;

int main()
{
	float liczba;  //Tworzê pojemmniki na liczbê linni, oraz zmienne i i k, które beda warunkowaly petle
	int i;
	int k; 
	cout << "Podaj liczbe linii:  ";
	cin >> liczba; //Uzytkownik wprowadza liczbe linii
	
	for(i=1;i<=liczba;i++) // Do momentu osiagniecia wartosci i mniejszej lub rownej liczba, zaczynajac od i=1, i bêdzie siê inkrementowaæ po wykonaniu petli w srodku
	{
		for(k=0;k<i;k++) //wartosc wyjsciowa k to 0, petla bedzie wykonywaæ siê do momentu gdy k bedzie mniejsze od i, a za ka¿dym razem nast¹pi inkrementacja 

		{		
			cout << "O";
		}
		cout << endl;
	}
	return 0;
}
