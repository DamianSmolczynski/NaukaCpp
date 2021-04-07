#include <iostream>

using namespace std;


int x=20;
main()
{
    int *wskaznik;
    wskaznik=&x;

    cout<<x<<"\n";
    cout<<*wskaznik<<"\n";

    return 0;
}