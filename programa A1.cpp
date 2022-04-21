#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>

using namespace std;

int main () 	// programa A1
{
int a[5];
int b[5][5];
int i, j, soma1, soma2;

soma1 = 0; soma2 = 0;
	for (i = 0; i <= 4; i = i + 1)
	{
		for (j = 0; j <= 4; j = j +1)
		{
		     cout <<  "Entre com o elemento " <<  i << "," <<  j<< " de B: ";
		     cin >> b [i][j];
		}
cout <<  "Entre com o elemento " << i << " de A: ";
		cin >> a [i];		
	}
for (i = 0; i <= 4; i = i + 1)
	{
		for (j = 0; j <= 4; j = j +1)
			soma2 = soma2 + b[i][j];	// comando C1
soma1 = soma1 + a[i];			// comando C2
	}
	cout << "Soma 1 = " << soma1 << " e Soma 2 = " << soma2 << endl;	
	return 0;
}