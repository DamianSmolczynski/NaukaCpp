#include <iostream>
 
using namespace std;

int main()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	
	if(liczba%2==0) //modulo liczby, czyli reszta
	{
		cout << "Podana liczba jest parzysta";
	}
	
	else
	{
		cout << "Podana liczba jest nieparzysta";
	}
}
