#include <iostream>
#include <string>

using namespace std;


string zdanie[3]{"Tworzenie kodu �r�d�owego w oparciu o funkcje jest praktyczne - w�a�ciwe stosowanie funkcji wp�ywa bowiem pozytywnie na organizacj� kodu pisanej aplikacji.","Dobrze zorganizowany kod zapewnia przejrzysto��, a co za tym idzie efektywno�� pracy.","Skoro korzystne jest wydzielanie kodu do funkcji to warto pozna� lepiej mo�liwo�ci pracy z funkcjami jakie daje nam j�zyk C++."};
string spacja=" ";
string calosc;

main()
{
	calosc=zdanie[0] + spacja + zdanie[1] + spacja + zdanie[2];
	
	cout<<calosc;
	
}

