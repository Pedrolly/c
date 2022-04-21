#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	float maiortemp, menortemp, temp[5], media,

	x = 0;
	soma = 0;
	maiortemp = -50;
	menortemp = 100;
	for(i =  0; i < 5; i++)
	{
		cout << "Entre com a temperatura media do dia" << endl;
		cin >> temp[i];
		soma = soma + temp[i];
		if(temp[i] < menortemp)
		{
			menortemp = temp[i];
		}
		if(temp[i] > maiortemp)
		{
			maiortemp = temp[i];
		}
	}
	media = (soma / 5);
	cout << " A media de temperatura no ano foi de " << media << endl;

	for(i = 0; i < 5; i++)
	{
		if(temp[i] < media)
		{
			x = x + 1;
		}
		if(temp[i] <= 0)
		{
			y = y + 1;
		}

	}
	cout << "Temperaturas Menores que zero" << y << endl;
	cout << "Maior temperatura" << maiortemp << endl;
	cout << "menor temperatura " << menortemp << endl;


	return 0;
}


