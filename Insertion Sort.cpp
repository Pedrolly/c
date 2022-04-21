#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void insercaoDireta(int vetor[], int tamanho)
{
	int i, j; // contadores
	int chave;
	for (j = 1; j < tamanho; j++)
	{
		chave = vetor[j];
		i = j - 1;
		while ((i >= 0) && (vetor[i] > chave))
		{
			vetor[i + 1] = vetor[i];
			i = i - 1;
		}
		vetor[i + 1] = chave;
	}
}
int main()
{
	int x, i; //contadores
	int vetor[100];//vetor 100 unidades
	int nLidos;//contador
	cin >> x;
	i = 0;
	while (x != 0)
	{
		vetor[i] = x;
		i++;
		cin >> x;
	}
	nLidos = i;
insercaoDireta(vetor,nLidos);	
	for(i = 0; i < nLidos; i++)
	{
		cout << vetor[i]<<" "<<endl; 
	}
	return 0;
}
