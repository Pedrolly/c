#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int n, vetor[n], i, menorvet, quadra[n], menorposi;
	menorvet = 999;
	cout << "Entre com o numeros de repetições " << endl;
	cin >> n;
	for(i = 0;i <= n; i++)
	{
		cout<< "Entre com o valor de " << i << endl;
		cin >> vetor[i];
		if(vetor[i] < 0)
		{
		vetor[i] = 0;	
		}
		if(vetor[i] < menorvet)
		{
			vetor[i] = menorvet;
			menorposi = i;
		}
		quadra[i] =(vetor[i] * vetor[i]);
	}
	cout << "Menor: " << 3 << endl;
	cout << "Posição: " << menorposi << endl;
	cout << quadra[i] << endl;
	return 0;
}
