#include <iostream>
#include <string>
#include <fstream> //biblioteka 
using namespace std;

struct baza          //sruktura bazy
{
	string imie, nazwisko;
	int numer;
};

baza user[5];

int main()
{
	for(int i=0; i<5;i++)  //pêtla zapisu danych uzytkownikow
	{
		cout<<"Wpisz imie uzytkownika: ";
		cin>>user[i].imie;
		cout<<"Wpisz nazwisko uzytkownika: ";
		cin>>user[i].nazwisko;
		cout<<"Wpisz numer uzytkownika uzytkownika: ";
		cin>>user[i].numer;
	}

	fstream plik;      //stworzenie pliku typu fstream
	
	plik.open("user.txt", ios::out);     //komenda tworzenia pliku- ios::out
	
	for(int i=0; i<5;i++) 
	{
		
		plik<<user[i].imie<<endl;
		plik<<user[i].nazwisko<<endl;
		plik<<user[i].numer<<endl;
	}
	return 0;
}


