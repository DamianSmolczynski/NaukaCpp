#include <iostream>

using namespace std;

main()
{
	string imie;
	
	cout<<"Podaj imie: "; 
	cin>>imie;
	
	int dlugosc=imie.length();//imie.length() generuje mi dlugosc wyrazu
	
	if (imie[dlugosc-1]=='a')//imie [dlugosc-1]=='a' sprawdza czy wyraz konczy sie na litere a
	cout<<"Wydaje mi sie, ze jestes kobieta";// co wskazuje, ze prawdopodobnie uzytkownik ma zenskie imie
	else
	cout<<"Wydaje mi, sie ze jestes mezczyzna";
	
	
}
