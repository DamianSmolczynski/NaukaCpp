#include <iostream>
#include <string>

using namespace std;


string zdanie[3]{"Tworzenie kodu Ÿród³owego w oparciu o funkcje jest praktyczne - w³aœciwe stosowanie funkcji wp³ywa bowiem pozytywnie na organizacjê kodu pisanej aplikacji.","Dobrze zorganizowany kod zapewnia przejrzystoœæ, a co za tym idzie efektywnoœæ pracy.","Skoro korzystne jest wydzielanie kodu do funkcji to warto poznaæ lepiej mo¿liwoœci pracy z funkcjami jakie daje nam jêzyk C++."};
string spacja=" ";
string calosc;

main()
{
	calosc=zdanie[0] + spacja + zdanie[1] + spacja + zdanie[2];
	
	cout<<calosc;
	
}

