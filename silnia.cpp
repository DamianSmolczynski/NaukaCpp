#include <iostream>

using namespace std;
int liczba, wynik=1;

int main(int argc, char** argv)
{
	cout<<"Wprowadz liczbe n: "; cin>>liczba;
	
	for(int i=2;i<=liczba;i++)
	{
		wynik=wynik*i;
	}
	cout << wynik<<endl;
	
	return 0;
}
