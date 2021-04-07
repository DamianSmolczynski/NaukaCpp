#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)

{
	
	int n;
	cout <<"Wprowadz liczbe n: "; cin>>n;
	
	while(n>=0)
	{
		for(int k;k<=n;k++)
		{
			cout<<k*k;
				if(k*k!=n*n
					){
						cout<<", ";
					}
			
			Sleep(100);
		}
	}
	
	
	
	
	
	
	
	return 0;
}
