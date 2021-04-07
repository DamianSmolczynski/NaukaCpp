#include <iostream>

using namespace std;

int main()
{
	float wzrost;
	
	cout << "Podaj wzrost w centymetrach: ";
	cin >> wzrost;
	
	if(wzrost<1||wzrost>250)
	{
		cout << "Czy na pewno podales poprawna liczba?";
	}
	else
	{
		if(wzrost<150)
		{
			cout << "Niski";
		}
		if(150<=wzrost&&
		wzrost<170)
		{
			cout << "Sredni";
		}if(170<wzrost)
		{
			cout << "Wysoki";
		}
	}
	
	
	
	return 0;
}
