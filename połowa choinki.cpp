#include <iostream>

using namespace std;

int main()
{
	float liczba;  //Tworz� pojemmniki na liczb� linni, oraz zmienne i i k, kt�re beda warunkowaly petle
	int i;
	int k; 
	cout << "Podaj liczbe linii:  ";
	cin >> liczba; //Uzytkownik wprowadza liczbe linii
	
	for(i=1;i<=liczba;i++) // Do momentu osiagniecia wartosci i mniejszej lub rownej liczba, zaczynajac od i=1, i b�dzie si� inkrementowa� po wykonaniu petli w srodku
	{
		for(k=0;k<i;k++) //wartosc wyjsciowa k to 0, petla bedzie wykonywa� si� do momentu gdy k bedzie mniejsze od i, a za ka�dym razem nast�pi inkrementacja 

		{		
			cout << "O";
		}
		cout << endl;
	}
	return 0;
}
