#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int numeropar, numerointervalo;
	int soma = 0;
	char variavelcontrole;
	cout << "Deseja Continuar:" << endl;
	cin >> variavelcontrole;
	while(variavelcontrole != 'n');
	{
		do
		{
			cout << "entre com um numero par" << endl;
			cin >> numeropar;
		}
		while(numeropar % 2 != 0)
		{
			do
			{
				cout << "Entre com um numero entre 0 e 10" << endl;
				cin >> numerointervalo;
			}
			while(!(numerointervalo >= 0 || numerointervalo <= 10)
		{
			soma = soma + numerointervalo;
			cout << "A soma é :" << soma << endl;
		}
	}

}

return 0;
}
