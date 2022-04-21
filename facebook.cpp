#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int vetor[1000];
	int maior = 0, menor = 9999999, n, i, amigmen, amigmai;
	cout << "Entre com a quantidade de contatos" << endl;
	cin >> n;

	for(i = 1; i <= n; i++)
	{
		cout << "entre com o numero do amigo" << i << endl;
		cin >> vetor[i];
		if(vetor[i] > maior)
		{
        maior = vetor[i];
		}
	if(vetor[i] < menor)
	{
		menor = vetor[i];
	}
	
	
	}

cout<<"menor numero de contatos: "<<menor<<endl;
cout<<"maior numero de contatos: "<<maior<<endl;
	return 0;
}