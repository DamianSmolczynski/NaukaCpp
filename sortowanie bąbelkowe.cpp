#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int ile;
double start, stop, czas;

void sortowanie_babelkowe(int *tab, int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=n-1; j>=1; j--)
        {
            if(tab[j]<tab[j-1])
            {
                int bufor;
                bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}

void quicksort(int *tablica, int lewy, int prawy)
{
    int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while (tablica[i]<v) i++;
        while (tablica[j]>v) j--;
        if (i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++; j--;
        }
    }   while (i<=j);
    if (j>lewy) quicksort(tablica,lewy, j);
    if (i<prawy) quicksort(tablica, i, prawy);
}

main()
{
    cout<<"Pororwnanie czasow sortowania v.1\n";

    cout<<"Ile losowych liczb w tablicy: \n";
    cin>>ile;

    //dynamiczna alokacja tablicy
        int *tablica;
        tablica=new int [ile];

        int*tablica2;
        tablica2= new int [ile];

    //inicjowania generatora liczb losowych
        srand(time(NULL));

    //wczytywanie losowych liczb do tablicy
        for(int i=0; i<ile; i++)
        {
            tablica[i] = rand()%100000+1;
        }

    //przepisanie tablicy
        for(int i=0; i<ile; i++)
        {
            tablica2[i] = tablica[i];   
        }

        //cout<<"Przed posortowaniem: \n";
        //for(int i=0; i<ile; i++)
        //{
            
        //    cout<<tablica[i]<<" ";
        //}

        cout<<"Sortuje teraz babelkowo. Prosze czekac!\n";

        start = clock();

        sortowanie_babelkowe(tablica, ile);

        stop = clock();

        czas = (double)(stop-start) / CLOCKS_PER_SEC;

        //cout<<"Po posortowaniu: \n";
        //for(int i=0; i<ile; i++)
       // {
            
      //      cout<<tablica[i]<<" ";
       // }
        cout<<"\nCzas sortowania babelkowego: "<<czas<<" s\n";


        cout<<"Teraz sortuje agorytmem quicksort. Prosze czekac!\n";

        start = clock();

        quicksort(tablica2, 0, ile-1);

        stop = clock();

        czas = (double)(stop-start) / CLOCKS_PER_SEC;

       // cout<<"Po posortowaniu: \n";
       // for(int i=0; i<ile; i++)
       // {
       //     
       //     cout<<tablica[i]<<" ";
      //  }
        cout<<"\nCzas sortowania quicksort: "<<czas<<" s\n";




        delete [] tablica;
        delete [] tablica2;


    return 0;
}