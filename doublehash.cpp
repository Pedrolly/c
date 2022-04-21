#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
struct dado
{
	float k; // chave
	float status; // 0:vazia, 1:ocupada , 2-removido
};
// Função auxiliar para inserir a chave key em uma tabela hash de tamanho m
int h1(int k,int m)
{		
	h1=k % m;
return h1;
}
int h2(int k, int m)
{ 
  h2(k)=1+(k %(m-1)); 	
return h2;
}
// Função que implementa a sondagem linear
int hash(int k, int i, int m)
{
int a;
int b;
a = h1(k,m);
b=h2(k,m);	
	return h(k,i)=(a(k)+i*b(k))% m;
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
	p = hash(k,i,m);
	cout << p << endl;
	return 0;
}
