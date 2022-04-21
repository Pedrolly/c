#include <iostream>
#include <cmath>
using namespace std;
int tamanho(int n, int vetor[])
{
	int maior = -99999;
	int menor = 9999999;
	for(int i = 0; i <= n; i++)
	{
		if(vetor[i] > maior)
		{
			maior = vetor[i];
		}
		else
		{
			menor=vetor[i];
		return menor;
		}

		if(vetor[i] < menor)
		{
			menor = vetor[i];
			return menor;
		}
	}
return menor;
}
int main()
{
	int vetor[100];//vetor
	int n;//contador
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		i = 0;
		cin >> vetor[i];
	}
	tamanho(n,f																													vetor);
	cout << tamanho(n,vetor) << endl;
	return 0;
}
