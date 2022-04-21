#include<iostream>
using namespace std;

struct dado
{
	int k; // chave
	int status; // 0:vazia, 1:ocupada, 2-removido
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
		if(t[j].status == k)
		{
			t[j].k = k;
			t[j].status = -1;
			return j;
		}
		else
		{
			i++;
		}
	}
	while(i != m);
	return -1;
}
int hash_search(dado t[], int m, int k)
{
	int i = 0;
	int j;
	do
	{
		j = hash(k, i, m);
		if(t[j].k == k)
		{
			return j;
		}
		i++;
	}
	while(t[j].status != 0 || i != m);

	return -1;
}
int hash_remove(dado t[], int m, int k)
{
	
}
int main()
{
	int m; // tamanho da tabela
	int i; // contador
	dado t[100]; // tabela hash
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
	cin >> k;
	int p;
	p = hash_search(t, m, k);
	cout<<hash_remove(t,m,k)<<endl;
	return 0;
}
