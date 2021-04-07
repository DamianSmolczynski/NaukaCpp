#include <iostream>
#include <string>
#include <fstream>		  //biblioteka zapisu pliku tekstowego
#include <cstdlib>        //biblioteka dla exit(0)

using namespace std;

	struct baza																		//struktura odczytu danych z pliku txt
	{
		string imie,nazwisko;
		int numer;
	};
	
	
baza user[5];
int i=0;

main()
	{
		fstream plik;							
		plik.open("user.txt",ios::in);												//komenda odczytu pliku txt- ios::
		
			if(plik.good()==false)													//warunek, który sprawdza czy mamy co pobierac z pliku txt
			{
				cout<<"Nastapil blad wczytywania uzytkownika.";
				exit(0);
			}
		
		int nr_linii=1,nr=0;
		string linia;
		
			while(getline(plik,linia))												//pêtla pobierania linii z pliku i wkladania go do stringa linia
			{
			
						
						switch(nr_linii)
							{	
								case 1: user[nr].imie=linia;						break;
								case 2: user[nr].nazwisko=linia	;					break;
								case 3: user[nr].numer=atoi(linia.c_str());			break;
								
							}
						
						nr_linii++;
						
					
					if(nr_linii==4)
						{
						
							nr_linii=1;nr++;
							
						}
						
			}
		
		plik.close();																//zamkniecie pliku po zakonczeniu uzywania
		
			for(int i=0;i<5;i++)													//sprawdzenie poprawnosci zapisu
				{
					cout<<user[i].imie		<<endl;
					cout<<user[i].nazwisko	<<endl;
					cout<<user[i].numer		<<endl;
				}
		
		struct nowa_baza															//nowa struktura do konwersji pliku txt
			{
				string imie_nazwisko;
				int numer;
			};
		
		nowa_baza user_1[5];
		string spacja=" ";															//string spacji do tworzenia stringa o ktorey prosil uzytkownik
		
			for(int j=0;j<5;j++)													//zapis w nowej strukturze za¿yczonego stringa
				{
					user_1[j].imie_nazwisko = user[j].imie + spacja + user[j].nazwisko;
					user_1[j].numer = user[j].numer;
				}
		
		cout<<user_1[0].imie_nazwisko;												//sprawdzian poprawnosci zapisu
		
		fstream plik_1;																//nowy plik fstream do zapisu nowych parametrow bazy danych
		
		plik.open("nowa_baza.txt",ios::out);
		
			for(int i=0; i<5;i++) 
				{
					
					plik<<user_1[i].imie_nazwisko	<<endl;
					plik<<user_1[i].numer			<<endl;
				}
		return 0;
		
		
	}

