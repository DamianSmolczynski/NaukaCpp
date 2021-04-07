#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a;
	cout << "Wprowadz liczbe: ";
	cin >> a;
	
	if(a>=0)
	{
		cout << "Pierwiastek kwadratowy z liczby " << a << " wynosi: " << sqrt(a);
	}
	else
	{
		cout << "Pierwiastek kwadratowy z liczby ujemnej nie istnieje.";
	}
	
	return 0;
}
