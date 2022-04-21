#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int n, cont = 0, i;
	double media,soma = 0;
	cin >> n;
	int vet[n];
	
	for (i = 0; i < n; i++)
	{
		cin >> vet[i];
		soma = soma + vet[i];

	}
	media = soma / i;
	for(i = 0; i < n; i++)
	{
		if(vet[i] > media)
		{
			cont = cont + 1;
		}
	}
		cout <<  fixed << setprecision(2);
		cout << "media : " << media << endl;
		cout << "Maior que a media : " <<  cont << endl;


		return 0;
	
}
