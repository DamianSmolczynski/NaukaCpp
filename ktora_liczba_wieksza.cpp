#include <iostream>

using namespace std;
int main()
 {
 	float a;
 	float b;
 	
 	cout << "Wprowadz liczbe a --->  ";
 	cin >> a;
 	
 	cout << "Wprowadz liczbe b --->  ";
 	cin >> b;
 	
 	if(a>b && a<0 )
 		{
 			cout << "Liczba a jest wieksza od b i jest ujemna.";
		}
 	if(a>b && a>=0)
 		{
 			cout << "Liczba a jest wieksza od b i jest dodatnia.";
		 }
	if(a<b && b<0)
		{
			cout << "Liczba b jest wieksza od a  i jest ujemna.";
		}
	if(a<b && b>=0)
		{
			cout << "Liczba b jest wieksza od a i jest dodatnia.";
		}
	if(a==b)
		{
			cout << "Liczby a i b sa sobie rowne.";
		}
	
	 
	return 0;
}
