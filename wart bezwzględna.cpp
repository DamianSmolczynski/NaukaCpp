#include <iostream>

using namespace std;

int main()
{
	float a; float b;
	
	cout << "Wprowadz liczbe a: ";
	cin >> a;
	
	cout << "Wprowadz liczbe b: ";
	cin >> b;
	
	if(a==b||-a==-b||-a==b||-b==a)
	{
		cout << "Wartosci bezwzgledne sa rowne.";
	}
	else
{
	
	if(a>0 && b>0)
	{
		if(a>b)
		{
			cout << "Liczba a ma wieksza wartosc bezwzgledna wynoszaca " << a;
		}
		else
		{
			cout << "Liczba b ma wieksza wartosc bezwzgledna wynoszoca " << b;
		}
	}
	
	if(a<0 && b<0 )
	{
		if(-a>-b)
		{
			cout << "Liczba a ma wieksza wartosc bezwzgledna wynaszoca " << -a;
		}
		else
		{
			cout << "Liczba b ma wieksza wartosc bezwzgledna wynoszoca " << -b;
		}
	}
		
	if(a>0 && b<0)
	{
		if(a>-b)
		{
			cout << "Liczba a ma wieksza wartosc bezwzgledna wynaszoca " << a;
		}
		else
		{
			cout << "Liczba b ma wieksza wartosc bezwzgledna wynoszoca " << -b;
		}
	}
	
	if(a<0 && b>0)
	{
		if(-a>b)
		{
			cout << "Liczba a ma wieksza wartosc bezwzgledna wynaszoca " << -a;
		}
		else
		{
			cout << "Liczba b ma wieksza wartosc bezwzgledna wynoszoca " << b;
		}
	}
}
	
	return 0;
}
