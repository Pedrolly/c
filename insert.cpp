#include<iostream>
using namespace std;

struct dado
{
	int k; // chave
	int status; // 0:vazia, 1:ocupada
};

// Função auxiliar para inserir a chave key em uma tabela hash de tamanho m
int hash_aux(int k, int m)
{
	int pos = k % m; // posição a inserir

	// Se a posição for negativa, temos que somar m
	if(pos < 0)
		pos += m;

	return pos;
}

// Função que implementa a sondagem linear
int hash(int k, int i, int m)
{
	return (hash_aux(k, m) + i) % m;
}

// Insere a chave k na tabela t, de tamanho m
int hash_insert(dado t[], int m, int k)
{
	int i = 0;
	do
	{
		int j;
		j = hash(k, i, m);
		if(t[j].status == 0)
		{
		t[j].k = k;
        t[j].status = 1;
		return j;	
		}	
	else
	{
		i++;
	}
	}while(i!=m);
return -1;
}

int main()
{
	int m; // tamanho da tabela
	int i; // contador
	dado t[100];// tabela hash
	int k; // chaves
	cin >> m;
	for(i = 0; i < m; i++)
	{
		t[i].status = 0;
		t[i].k = -1;
	}
	cin >> k;
	while(k != 0)
	{
		hash_insert(t, m, k);
		cin >> k;
	}
	for(i = 0; i < m; i++)
		cout << t[i].k << " ";
	cout << endl;

	return 0;
}
