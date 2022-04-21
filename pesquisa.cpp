#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int x, i = 0, n,pos;
	bool achou = false;
	int vetor[100];
	int procurado;
	cin >> x;
	while(x != 0)
	{
		vetor[i] = x;
		i++;
		cin >> x;
	}
	n = i;
	cin >> procurado;

	for(i = 0; i < n; i++)
		if(vetor[i] == procurado)
		{
			pos = i;
			achou = true;
		}
	if(achou == true)
		cout << "Elemento " << procurado << "foi encontrado na posição" << pos << endl;
	else
		cout << "Elemento " << procurado << " nao foi encontrado" << endl;
	return 0;
}
