#include <iostream>
#include <cmath>
using namespace std;
void quickSort(int vetor[], int tamanho, int i, int j)
{
	int trab, esq, dir, pivo;
	esq = i;
	dir = j;
	pivo = vetor[(int)round((esq + dir) / 2.0)];
	do
	{
		while (vetor[esq] < pivo)
			esq++;
		while (vetor[dir] > pivo)
			dir--;
		if (esq <= dir)
		{
			trab = vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = trab;
			esq++;
			dir--;
		}
	}
	while (esq <= dir);
	if (dir - i >= 0)
		quickSort(vetor, tamanho, i, dir);
	if (j - esq >= 0)
		quickSort(vetor, tamanho, esq, j);
}
int binaria(int vetor[], int tamanho, int x)
{
	bool achou; // var aux p/ busca
	int baixo, meio, alto; // var aux
	baixo = 0;
	alto = tamanho - 1;
	achou = false;
	while ((baixo <= alto) && (achou == false))
	{
		meio = (baixo + alto) / 2;
		if (x < vetor[meio])
			alto = meio - 1;
		else if (x > vetor[meio])
			baixo = meio + 1;
		else
			achou = true;
	}
	if (achou)
		return meio;
	else
		return -1;
}
int main()
{
	int ids[20];
	int procurando;
	int n;//numeros de ids cadastrados
	int x;
	int j,i;
	n = 0;
	cin >> x;
	while(x != -1)
	{
		ids[n] = x;
		n++;
		cin >> x;
	}
	ids[0]=i;
	ids[n]=j;
	cin >> procurando;
	quickSort(ids,n,j,x);
	if(binaria(ids, n, procurando) == -1)
		cout << "Nao possui acesso" << endl;
	if(binaria(ids, n, procurando) != -1)
		cout << "Possui acesso" << endl;
	return 0;
}
