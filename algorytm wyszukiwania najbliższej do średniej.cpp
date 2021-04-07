#include <iostream>

using namespace std;

int ile_liczb=5;
float liczba[5];

float odoleglosc_od_sredniej[5];
float najbardziej_zblizona;
int index_najbardziej_zblizonej;

float suma, srednia;

float krancowa[5];
int o=0;



void pobieranie_liczb()         //procedura zapisu 5 liczb w tablicy
{
    for(int i=0; i<ile_liczb; i++)
    {
        cout<<"Podaj "<<i+1<<" liczbe: ";
        cin>>liczba[i];
        suma+=liczba[i];
    }
}

float srednia_oblicz(float s)    //funkcja obliczajaca srednia
{
    return s/ile_liczb;
}

void sprawdzanie_odleglosci()     //procedura sprawdzajaca odleglosc liczb z tablicy do sredniej
{
    srednia=srednia_oblicz(suma);

    for(int i=0; i<ile_liczb; i++)
    {  
        odoleglosc_od_sredniej[i]=srednia-liczba[i];

        if(odoleglosc_od_sredniej[i]<0)
        {
            odoleglosc_od_sredniej[i]*=(-1);
        }
    }
}

void sortowanie_odleglosci()     //procedura znajdowania liczby najblizszej sredniej wszystkich liczb 
{  
    najbardziej_zblizona=odoleglosc_od_sredniej[0];
    index_najbardziej_zblizonej=0;

    for(int i=1; i<ile_liczb; i++)
    {
        if(odoleglosc_od_sredniej[i]<najbardziej_zblizona)
        {
            najbardziej_zblizona=odoleglosc_od_sredniej[i];
            index_najbardziej_zblizonej=i;
        }
    }
}

void przypadek_krancowy()
{
    for(int j=0; j<ile_liczb; j++)
    {
        if(odoleglosc_od_sredniej[j]==najbardziej_zblizona)
        {
            krancowa[o]=liczba[j];
            o++;
        }
        else{}
    }
}
            


int main()
{
    
    pobieranie_liczb();
    

    sprawdzanie_odleglosci();

    sortowanie_odleglosci();

    przypadek_krancowy();

    cout<<"Srednia wynosi: "<<srednia_oblicz(suma)<<"\n";
    for(int k=0; k<o;k++)
    {
        cout<<"Liczba najblizsza sredniej to: "<<krancowa[k]<<endl;
    }

    return 0;
}
